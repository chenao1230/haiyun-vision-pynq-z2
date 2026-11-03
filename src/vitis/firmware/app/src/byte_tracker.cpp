// Selected q05 profile: process std .05, measurement std .1. V1 used .01/.1.
#ifndef BYTE_ASPECT_PROCESS_STD
#define BYTE_ASPECT_PROCESS_STD 0.05
#endif
#ifndef BYTE_ASPECT_MEASURE_STD
#define BYTE_ASPECT_MEASURE_STD 0.1
#endif
// SPDX-License-Identifier: AGPL-3.0-only
// Derived algorithm: local Ultralytics 8.0.196 byte_tracker.py and kalman_filter.py.
// Dense rectangular assignment below is an independent Hungarian implementation,
// with dummy cost=threshold/2 (same minimum-cost objective as cost-limited LAPJV).
#include "byte_tracker.h"
#include <algorithm>
#include <cmath>
#include <cstring>
#include <limits>
#ifdef SHIP_RECOVERY_DIAGNOSTICS
#include <iostream>
#endif
namespace {
const int TRACKED=1, LOST=2, REMOVED=3;
// Caps stop with an error; they NEVER drop candidates or silently recycle IDs.
const size_t MAX_DETECTIONS=256,MAX_TRACKS=256;
void measurement(const YoloDetection& d,double z[4]) {
    // Python STrack first converts tlwh to float32 before XYAH conversion.
    float w=d.x2-d.x1,h=d.y2-d.y1;
    z[0]=float(d.x1+w/2);z[1]=float(d.y1+h/2);z[2]=float(w/h);z[3]=h;
}
float overlap(const ByteTrackResult& a,const ByteTrackResult& b) {
    float w=std::max(0.f,std::min(a.x2,b.x2)-std::max(a.x1,b.x1));
    float h=std::max(0.f,std::min(a.y2,b.y2)-std::max(a.y1,b.y1));
    float inter=w*h;
    return inter/((a.x2-a.x1)*(a.y2-a.y1)+(b.x2-b.x1)*(b.y2-b.y1)-inter+1e-7f);
}
ByteTrackResult detbox(const YoloDetection& d) {
    ByteTrackResult b={d.x1,d.y1,d.x2,d.y2,d.score,0,d.class_id,0};return b;
}
// R3: conservative fallback for mature confirmed tracks, never a new-track source.
// Only recent misses are eligible. Existing high/low associations retain priority.
// Fraction of a detection not covered by a stronger different-class ship.
// Box-only visibility evidence, not a segmentation or an appearance model.
double visible_fraction(const YoloDetection& d,const std::vector<YoloDetection>& all,bool& occluder) {
    double covered=0;occluder=false;
    const double area=double(d.x2-d.x1)*(d.y2-d.y1);
    for(size_t i=0;i<all.size();++i) {
        const YoloDetection& other=all[i];
        if(other.class_id==d.class_id || other.score<.5f || other.score<=d.score+.2f)continue;
        const double iw=std::max(0.,double(std::min(other.x2,d.x2)-std::max(other.x1,d.x1)));
        const double ih=std::max(0.,double(std::min(other.y2,d.y2)-std::max(other.y1,d.y1)));
        if(iw*ih>0){occluder=true;covered=std::max(covered,iw*ih/area);}
    }
    return 1-covered;
}
double recovery_cost(const ArmByteTracker::Track& t,const YoloDetection& d,int fid,const std::vector<YoloDetection>& all,int mode) {
    const int age=fid-t.last;
    if(!t.confirmed || t.last-t.start<(mode==2?2:1) || age<1 || age>3 || t.cls!=d.class_id || d.score<(mode==2?.1f:.12f))return 1e6;
    const ByteTrackResult p=t.box();
    const double pw=p.x2-p.x1,ph=p.y2-p.y1,dw=d.x2-d.x1,dh=d.y2-d.y1;
    if(pw<=0 || ph<=0 || dw<=0 || dh<=0)return 1e6;
    const double wr=dw/pw,hr=dh/ph;
    if(wr<(mode==2?.25:.40) || wr>(mode==2?1.30:1.80) || hr<(mode==2?.40:.55) || hr>(mode==2?1.40:1.75))return 1e6;
    const double iw=std::max(0.,double(std::min(p.x2,d.x2)-std::max(p.x1,d.x1)));
    const double ih=std::max(0.,double(std::min(p.y2,d.y2)-std::max(p.y1,d.y1)));
    const double inter=iw*ih,pa=pw*ph,da=dw*dh,iou=inter/(pa+da-inter+1e-9);
    const double contain=inter/std::min(pa,da);
    const double dx=std::fabs((p.x1+p.x2-d.x1-d.x2)*.5)/pw;
    const double dy=std::fabs((p.y1+p.y2-d.y1-d.y2)*.5)/ph;
    if(iou<(mode==2?.10:.20) || contain<(mode==2?.70:.60) || iw/std::min(pw,dw)<.60 || ih/std::min(ph,dh)<.65 || dx>(mode==2?.50:.30) || dy>.50)return 1e6;
    if(mode==2) {bool occluder=false;const double visible=visible_fraction(d,all,occluder);if(!occluder || visible<.20)return 1e6;}
    return .55*(1-iou)+.25*(1-contain)+.10*dx+.10*dy;
}
struct Assignment {std::vector<std::pair<int,int> > pairs;std::vector<int> rows,cols;};
Assignment assign(const std::vector<ArmByteTracker::Track>& ts,const std::vector<int>& ti,
                  const std::vector<YoloDetection>& ds,const std::vector<int>& di,double threshold,bool fuse,int recover=0,int fid=0,bool confirmation=false) {
    Assignment out; int nr=ti.size(),nc=di.size();
    if (!nr || !nc) {out.rows=ti;out.cols=di;return out;}
    // nr rows, nc real columns + nr private/unmatched columns. Real cost shifted
    // by threshold/2; dummy cost threshold/2. Equivalent to nr+nc square extension.
    int n=nr,m=nc+nr;
    std::vector<double> cost(n*m,threshold/2),u(n+1),v(m+1);
    for(int i=0;i<nr;++i) for(int j=0;j<nc;++j) {
        float iou=overlap(ts[ti[i]].box(),detbox(ds[di[j]]));
        float c=1.f-iou;
        if(fuse)c=1.f-(1.f-c)*ds[di[j]].score;
        // Soft class consistency, applied after score fusion in every match stage.
        // Strong geometry can still match through a noisy class prediction.
        if(ts[ti[i]].cls!=ds[di[j]].class_id)c+=0.1f;
        const double value=recover?recovery_cost(ts[ti[i]],ds[di[j]],fid,ds,recover):double(c);
        bool forbidden=false;
        if(ts[ti[i]].fragment_hold) {
            bool occluder=false;const double visible=visible_fraction(ds[di[j]],ds,occluder);
            if(ts[ti[i]].cls!=ds[di[j]].class_id || (occluder && visible<.20))forbidden=true;
            // A low merged box must not clear the fragment hold and then steal the
            // foreground ship at the following high-score association stage.
            for(size_t k=0;k<ds.size();++k)if(ds[k].class_id!=ts[ti[i]].cls && ds[k].score>=.5f && ds[k].score>ds[di[j]].score+.2f)
                if(overlap(detbox(ds[k]),detbox(ds[di[j]]))>.55f)forbidden=true;
        }
        if(confirmation && ts[ti[i]].weak_seed && (ds[di[j]].score<.6f || ds[di[j]].class_id!=ts[ti[i]].cls || fid-ts[ti[i]].last!=1))forbidden=true;
        cost[i*m+j]=(forbidden || value>threshold?1e6:value)-threshold/2;
    }
    if(recover) {
        // A low-score box must prefer one eligible track and one detection clearly.
        // Reject competition with already-updated tracks instead of stealing their box.
        const std::vector<double> initial=cost;
        for(int i=0;i<nr;++i)for(int j=0;j<nc;++j) {
            const double value=initial[i*m+j]+threshold/2;
            if(value>threshold)continue;
            bool ambiguous=false;
            for(int k=0;k<nr;++k)if(k!=i && initial[k*m+j]+threshold/2<=value+.08)ambiguous=true;
            for(int k=0;k<nc;++k)if(k!=j && initial[i*m+k]+threshold/2<=value+.08)ambiguous=true;
            for(size_t k=0;k<ts.size();++k)if(ts[k].last==fid && ts[k].state==TRACKED) {
                const ByteTrackResult other=ts[k].box();const YoloDetection& d=ds[di[j]];
                if(overlap(other,detbox(d))>.55f)ambiguous=true;
                const double iw=std::max(0.,double(std::min(other.x2,d.x2)-std::max(other.x1,d.x1)));
                const double ih=std::max(0.,double(std::min(other.y2,d.y2)-std::max(other.y1,d.y1)));
                const double detection_area=double(d.x2-d.x1)*(d.y2-d.y1);
                // A weak fragment fully inside a strongly observed ship is ambiguous,
                // even when its IoU is small solely because that ship is much larger.
                if(ts[k].score>=.5f && ts[k].score>d.score+.2f && iw*ih/detection_area>.85)ambiguous=true;
            }
            if(ambiguous)cost[i*m+j]=1e6;
        }
    }
    std::vector<int> p(m+1),way(m+1);
    for(int i=1;i<=n;++i) {
        p[0]=i;int j0=0;
        std::vector<double> minv(m+1,1e30);std::vector<bool> used(m+1,false);
        do {
            used[j0]=true;int i0=p[j0],j1=0;double delta=1e30;
            for(int j=1;j<=m;++j) if(!used[j]) {
                double cur=cost[(i0-1)*m+j-1]-u[i0]-v[j];
                if(cur<minv[j]){minv[j]=cur;way[j]=j0;}
                if(minv[j]<delta){delta=minv[j];j1=j;}
            }
            for(int j=0;j<=m;++j) if(used[j]){u[p[j]]+=delta;v[j]-=delta;}else minv[j]-=delta;
            j0=j1;
        }while(p[j0]);
        do {int j1=way[j0];p[j0]=p[j1];j0=j1;}while(j0);
    }
    std::vector<int> row(n,-1);std::vector<bool> matched(nc,false);
    for(int j=1;j<=nc;++j)if(p[j]){row[p[j]-1]=j-1;matched[j-1]=true;}
    for(int i=0;i<n;++i)if(row[i]>=0)out.pairs.push_back(std::make_pair(ti[i],di[row[i]]));else out.rows.push_back(ti[i]);
    for(int j=0;j<nc;++j)if(!matched[j])out.cols.push_back(di[j]);
    return out;
}
bool contains(const std::vector<int>& ids,int id){return std::find(ids.begin(),ids.end(),id)!=ids.end();}
}
void ArmByteTracker::reset(){frame=0;next_id=0;tracked.clear();lost.clear();previous_removed.clear();}
void ArmByteTracker::Track::init(const YoloDetection& d,int idx,int fid,int tid){
    std::memset(m,0,sizeof(m));std::memset(p,0,sizeof(p));measurement(d,m);
    double h=m[3],s[8]={h/10,h/10,1e-2,h/10,h/16,h/16,1e-5,h/16};
    for(int i=0;i<8;++i)p[i][i]=s[i]*s[i];
    id=tid;state=TRACKED;start=last=fid;cls=d.class_id;index=idx;score=d.score;confirmed=(fid==1);weak_seed=false;fragment_hold=false;
}
void ArmByteTracker::Track::predict(){
    if(state!=TRACKED)m[7]=0;
    double h=m[3],s[8]={h/20,h/20,BYTE_ASPECT_PROCESS_STD,h/20,h/160,h/160,1e-5,h/160},q[8][8];
    for(int i=0;i<8;++i)for(int j=0;j<8;++j){
        q[i][j]=p[i][j];if(i<4)q[i][j]+=p[i+4][j];if(j<4)q[i][j]+=p[i][j+4];if(i<4&&j<4)q[i][j]+=p[i+4][j+4];
        if(i==j)q[i][j]+=s[i]*s[i];
    }
    for(int i=0;i<4;++i)m[i]+=m[i+4];
    std::memcpy(p,q,sizeof(p));
}
bool ArmByteTracker::Track::correct(const YoloDetection& d,int idx,int fid){
    double z[4],s[4]={m[3]/20,m[3]/20,BYTE_ASPECT_MEASURE_STD,m[3]/20},S[4][4],L[4][4]={},K[8][4]={},q[8][8];measurement(d,z);
    for(int i=0;i<4;++i)for(int j=0;j<4;++j)S[i][j]=p[i][j]+(i==j?s[i]*s[i]:0);
    for(int i=0;i<4;++i)for(int j=0;j<=i;++j){
        double a=S[i][j];for(int k=0;k<j;++k)a-=L[i][k]*L[j][k];
        if(i==j){if(!(a>0)||!std::isfinite(a))return false;L[i][j]=std::sqrt(a);}else L[i][j]=a/L[j][j];
    }
    for(int r=0;r<8;++r){double y[4]={};
        for(int i=0;i<4;++i){double a=p[r][i];for(int k=0;k<i;++k)a-=L[i][k]*y[k];y[i]=a/L[i][i];}
        for(int i=3;i>=0;--i){double a=y[i];for(int k=i+1;k<4;++k)a-=L[k][i]*K[r][k];K[r][i]=a/L[i][i];}
    }
    double innovation[4];for(int i=0;i<4;++i)innovation[i]=z[i]-m[i];
    for(int i=0;i<8;++i){for(int k=0;k<4;++k)m[i]+=K[i][k]*innovation[k];
        for(int j=0;j<8;++j){q[i][j]=p[i][j];for(int k=0;k<4;++k)for(int l=0;l<4;++l)q[i][j]-=K[i][k]*S[k][l]*K[j][l];}}
    std::memcpy(p,q,sizeof(p));last=fid;state=TRACKED;confirmed=true;score=d.score;cls=d.class_id;index=idx;fragment_hold=false;weak_seed=false;return true;
}
ByteTrackResult ArmByteTracker::Track::box()const{
    double w=m[2]*m[3];ByteTrackResult b={float(m[0]-w/2),float(m[1]-m[3]/2),float(m[0]+w/2),float(m[1]+m[3]/2),score,id,cls,index};return b;
}
bool ArmByteTracker::update(const std::vector<YoloDetection>& ds,std::vector<ByteTrackResult>& out){
    out.clear();if(ds.size()>MAX_DETECTIONS||tracked.size()+lost.size()>MAX_TRACKS)return false;
    for(size_t i=0;i<ds.size();++i){const YoloDetection& d=ds[i];
        if(!std::isfinite(d.x1)||!std::isfinite(d.y1)||!std::isfinite(d.x2)||!std::isfinite(d.y2)||!std::isfinite(d.score)||d.x2<=d.x1||d.y2<=d.y1||d.score<0||d.score>1||d.class_id<0||d.class_id>=6)return false;}
    ++frame;
    std::vector<int> high,low,pi,ui,removed;
    for(size_t i=0;i<ds.size();++i){if(ds[i].score>.5f)high.push_back(i);else if(ds[i].score>.1f&&ds[i].score<.5f)low.push_back(i);}
    std::vector<Track> pool,unconfirmed;
    for(size_t i=0;i<tracked.size();++i)if(tracked[i].confirmed)pool.push_back(tracked[i]);else unconfirmed.push_back(tracked[i]);
    pool.insert(pool.end(),lost.begin(),lost.end());
    for(size_t i=0;i<pool.size();++i){pool[i].predict();pi.push_back(i);}
    Assignment a=assign(pool,pi,ds,high,.8,true);
    for(size_t i=0;i<a.pairs.size();++i)if(!pool[a.pairs[i].first].correct(ds[a.pairs[i].second],a.pairs[i].second,frame))return false;
    std::vector<int> remaining;for(size_t i=0;i<a.rows.size();++i)if(pool[a.rows[i]].state==TRACKED)remaining.push_back(a.rows[i]);
    Assignment b=assign(pool,remaining,ds,low,.5,false);
    for(size_t i=0;i<b.pairs.size();++i)if(!pool[b.pairs[i].first].correct(ds[b.pairs[i].second],b.pairs[i].second,frame))return false;
    std::vector<int> recovery_rows=b.rows;
    for(size_t i=0;i<a.rows.size();++i)if(pool[a.rows[i]].state==LOST)recovery_rows.push_back(a.rows[i]);
    Assignment recovery=assign(pool,recovery_rows,ds,b.cols,.62,false,1,frame);
    Assignment fragments=assign(pool,recovery.rows,ds,recovery.cols,.65,false,2,frame);
    recovery.pairs.insert(recovery.pairs.end(),fragments.pairs.begin(),fragments.pairs.end());
    for(size_t i=0;i<recovery.pairs.size();++i) {
        const int ti=recovery.pairs[i].first,di=recovery.pairs[i].second;
#ifdef SHIP_RECOVERY_DIAGNOSTICS
        std::cerr<<"RECOVERY frame="<<frame<<" id="<<pool[ti].id<<" was_lost="<<(pool[ti].state==LOST)<<" age="<<(frame-pool[ti].last)<<" det="<<di<<" score="<<ds[di].score<<"\n";
#endif
        const ByteTrackResult predicted=pool[ti].box();
        const double wr=(ds[di].x2-ds[di].x1)/(predicted.x2-predicted.x1);
        const double hr=(ds[di].y2-ds[di].y1)/(predicted.y2-predicted.y1);
        if(wr<.75 || hr<.70) {
            // A visible fragment is valid association evidence, not a full-box measurement.
            // Keep the already predicted mean/covariance, avoiding false shrink velocity.
            // Display still uses this actual detection through detection_index.
            pool[ti].last=frame;pool[ti].state=TRACKED;pool[ti].confirmed=true;
            pool[ti].index=di;pool[ti].score=ds[di].score;pool[ti].cls=ds[di].class_id;pool[ti].fragment_hold=true;
        } else if(!pool[ti].correct(ds[di],di,frame))return false;
    }
    for(size_t i=0;i<b.rows.size();++i)if(pool[b.rows[i]].last!=frame)pool[b.rows[i]].state=LOST;
    for(size_t i=0;i<unconfirmed.size();++i)ui.push_back(i);
    Assignment c=assign(unconfirmed,ui,ds,a.cols,.7,true,0,frame,true);
    for(size_t i=0;i<c.pairs.size();++i) {
        Track& t=unconfirmed[c.pairs[i].first];const YoloDetection& d=ds[c.pairs[i].second];
        const bool weak=t.weak_seed;const double previous_x=t.m[0],previous_y=t.m[1];
        if(!t.correct(d,c.pairs[i].second,frame))return false;
        if(weak) {double z[4];measurement(d,z);for(int k=0;k<4;++k)t.m[k]=z[k];t.m[4]=z[0]-previous_x;t.m[5]=z[1]-previous_y;}
    }
    for(size_t i=0;i<c.rows.size();++i){
        unconfirmed[c.rows[i]].state=REMOVED;
        removed.push_back(unconfirmed[c.rows[i]].id);
    }
    std::vector<Track> next;
    // Preserve previously tracked order, then new activations, then re-found IDs.
    for(size_t i=0;i<tracked.size();++i){
        const std::vector<Track>& source=tracked[i].confirmed?pool:unconfirmed;
        for(size_t j=0;j<source.size();++j)if(source[j].id==tracked[i].id&&source[j].state==TRACKED)next.push_back(source[j]);
    }
    for(size_t i=0;i<c.cols.size();++i) {
        const bool ordinary=ds[c.cols[i]].score>=.6f;
        const bool seed=!ordinary && ds[c.cols[i]].score>.5f && high.size()==1 && pool.empty() && unconfirmed.empty();
        if(ordinary || seed){Track t;t.init(ds[c.cols[i]],c.cols[i],frame,++next_id);if(seed){t.confirmed=false;t.weak_seed=true;}next.push_back(t);}
    }
    for(size_t i=0;i<lost.size();++i)for(size_t j=0;j<pool.size();++j)if(pool[j].id==lost[i].id&&pool[j].state==TRACKED)next.push_back(pool[j]);
    std::vector<Track> nextlost;
    // Match legacy lifecycle: expired lost IDs remain in lost for this update,
    // and are subtracted on the next update (same as reference previous_removed).
    for(size_t i=0;i<lost.size();++i)for(size_t j=0;j<pool.size();++j)if(pool[j].id==lost[i].id&&pool[j].state!=TRACKED&&!contains(previous_removed,pool[j].id)){
        if(frame-pool[j].last>30){pool[j].state=REMOVED;removed.push_back(pool[j].id);}nextlost.push_back(pool[j]);}
    for(size_t i=0;i<b.rows.size();++i)
        if(pool[b.rows[i]].state!=TRACKED && !contains(previous_removed,pool[b.rows[i]].id))nextlost.push_back(pool[b.rows[i]]);
    std::vector<bool> da(next.size(),false),db(nextlost.size(),false);
    for(size_t i=0;i<next.size();++i)for(size_t j=0;j<nextlost.size();++j)if(1.f-overlap(next[i].box(),nextlost[j].box())<.15f){
        if(next[i].last-next[i].start>nextlost[j].last-nextlost[j].start)db[j]=true;else da[i]=true;}
    tracked.clear();lost.clear();
    for(size_t i=0;i<next.size();++i)if(!da[i])tracked.push_back(next[i]);
    for(size_t i=0;i<nextlost.size();++i)if(!db[i])lost.push_back(nextlost[i]);
    previous_removed.insert(previous_removed.end(),removed.begin(),removed.end());
    // Reference keeps up to 1000 historical removed entries, including repeats.
    if(previous_removed.size()>1000)
        previous_removed.erase(previous_removed.begin(),previous_removed.end()-999);
    if(tracked.size()+lost.size()>MAX_TRACKS)return false;
    for(size_t i=0;i<tracked.size();++i)if(tracked[i].confirmed)out.push_back(tracked[i].box());
    return true;
}
