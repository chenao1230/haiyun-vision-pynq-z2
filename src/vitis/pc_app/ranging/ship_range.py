"""Small GUI adapter: received ship boxes -> paired observed LiDAR ranges.

Requires NumPy only. No camera, serial reader, detector, BP-Net, GPU or training.
Never reads a saved distance: each request selects points using the supplied box.
"""
import hashlib
import json
from pathlib import Path
import numpy as np


def _sha(path):
    return hashlib.sha256(Path(path).read_bytes()).hexdigest()


def _select_surface(xyz,uv,box):
    x1,y1,x2,y2=box;w=x2-x1;h=y2-y1
    region=[x1+.08*w,y1+.30*h,x2-.08*w,y2-.06*h]
    inside=(uv[:,0]>=region[0])&(uv[:,0]<region[2])&(uv[:,1]>=region[1])&(uv[:,1]<region[3])
    candidates=np.flatnonzero(inside)
    if len(candidates)<10:return np.array([],dtype=int),'too_few_points'
    ordered=candidates[np.argsort(xyz[candidates,2])]
    z=xyz[ordered,2]
    split=np.flatnonzero(np.diff(z)>np.maximum(1.5,.04*z[:-1]))+1
    groups=[g for g in np.split(ordered,split) if len(g)>=max(10,int(.15*len(candidates)))]
    if len(groups)!=1:return np.array([],dtype=int),'mixed_or_insufficient_depth'
    chosen=groups[0];span=np.ptp(uv[chosen],axis=0)
    if span[0]<.10*w or span[1]<.08*h:return np.array([],dtype=int),'insufficient_spatial_support'
    return chosen,None


class ShipRange:
    """Create once at application startup; call measure after each complete frame.

    boxes: list of {"xyxy": [x1,y1,x2,y2], "track_id": optional integer}.
    Box coordinates must refer to the supplied full undistorted image.
    For STRETCHED 416x416 network coordinates, explicitly set box_size=(416,416).
    Letterbox/padded GUI coordinates must first be mapped back by the caller.
    """
    def __init__(self,data_dir=None):
        self.data_dir=Path(data_dir) if data_dir else Path(__file__).resolve().parent/'data'
        manifest=json.loads((self.data_dir/'manifest.json').read_text(encoding='utf-8'))
        self.frames={row['image_sha256']:row for row in manifest['frames']}
        self.cached={}

    def measure(self,image_path,boxes,box_size=None,box_source='external',sequence_id=None,frame_id=None):
        """Return one result for each supplied box. Unknown image -> invalid, no stale value.

        Optional sequence_id/frame_id enforce the included board-input mapping:
        POHANG00_RANGE, 0/1/2. Do not guess these from a different image group.
        """
        image_path=Path(image_path)
        try: identity=_sha(image_path)
        except OSError:identity=None
        frame=self.frames.get(identity)
        reason=None
        if frame is None:reason='no_paired_depth_for_this_image'
        elif sequence_id is not None and sequence_id!=frame['board_sequence_id']:reason='sequence_mismatch'
        elif frame_id is not None and frame_id!=frame['board_frame_id']:reason='frame_mismatch'
        if reason:return [self._invalid(item,reason,box_source) for item in boxes]
        if identity not in self.cached:
            path=self.data_dir/frame['points_path']
            if _sha(path)!=frame['points_sha256']:raise ValueError('Point cloud file changed or corrupted: '+str(path))
            with np.load(path,allow_pickle=False) as cloud:
                self.cached[identity]=(cloud['xyz_camera_m'].copy(),cloud['uv'].copy())
        xyz,uv=self.cached[identity]
        ow,oh=frame['image_size_wh'];mw,mh=frame['point_image_size_wh']
        if box_size is None:bw,bh=ow,oh
        else:bw,bh=box_size
        if not np.isfinite([bw,bh]).all() or bw<=0 or bh<=0:raise ValueError('Invalid box_size')
        output=[]
        for item in boxes:
            try:
                box=np.asarray(item['xyxy'],dtype=np.float64)
                if box.shape!=(4,) or not np.isfinite(box).all():raise ValueError('Invalid box')
                if not (0<=box[0]<box[2]<=bw and 0<=box[1]<box[3]<=bh):raise ValueError('Out-of-image box')
            except (ValueError,KeyError,TypeError):
                output.append(self._invalid(item,'invalid_box',box_source));continue
            model_box=box*np.array([mw/bw,mh/bh,mw/bw,mh/bh])
            chosen,reason=_select_surface(xyz,uv,model_box)
            if reason:
                output.append(self._invalid(item,reason,box_source));continue
            radial=np.linalg.norm(xyz[chosen],axis=1)
            distance=float(np.median(radial))
            output.append({'track_id':item.get('track_id'),'object_id':item.get('object_id'),
                'distance_m':distance,'distance_value':distance,'units':'m','valid':True,'reason':None,
                'valid_points':int(len(chosen)),'label':'{:.1f} m'.format(distance),
                'distance_source':'paired_observed_LiDAR_XYZ','box_source':box_source,
                'distance_definition':'median_camera_to_visible_surface_radial_distance',
                'dataset_frame_id':frame['dataset_frame_id'],'image_sha256':identity,
                'quality_fields':{'radial_p10_m':float(np.percentile(radial,10)),
                                  'radial_p90_m':float(np.percentile(radial,90))},
                'independent_target_distance_accuracy_verified':False})
        return output

    @staticmethod
    def _invalid(item,reason,source):
        return {'track_id':item.get('track_id'),'object_id':item.get('object_id'),
                'distance_m':None,'distance_value':None,'units':'m','valid':False,'reason':reason,
                'valid_points':0,'label':'--','box_source':source}
