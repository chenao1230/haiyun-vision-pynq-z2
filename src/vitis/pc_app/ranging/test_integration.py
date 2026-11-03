"""Portable contract test; PC reference boxes, NOT a real board/serial test."""
import json
from pathlib import Path
import tempfile
import numpy as np
try:
    from ranging.ship_range import ShipRange
except ModuleNotFoundError:
    from ship_range import ShipRange

ROOT=Path(__file__).resolve().parent


def main():
    estimator=ShipRange()
    references=json.loads((ROOT/'data/reference_boxes.json').read_text(encoding='utf-8'))
    results=[]
    for frame in references:
        image=ROOT/'data'/frame['image_path'];boxes=frame['boxes']
        r=estimator.measure(image,boxes,box_source='pc_reference_contract_test',
                            sequence_id='POHANG00_RANGE',frame_id=frame['board_frame_id'])
        for actual,expected in zip(r,frame['expected']):
            assert actual['valid'] and abs(actual['distance_m']-expected['distance_m'])<1e-5
            assert actual['valid_points']==expected['valid_points']
        # A board that returns stretched 416 coordinates must yield the same result.
        transformed=[dict(item,xyxy=(np.asarray(item['xyxy'])*([416/2048,416/1080]*2)).tolist()) for item in boxes]
        q=estimator.measure(image,transformed,box_size=(416,416),box_source='pc_coordinate_test')
        assert all(abs(a['distance_m']-b['distance_m'])<1e-5 for a,b in zip(r,q))
        wrong=estimator.measure(image,boxes,sequence_id='G152',frame_id=frame['board_frame_id'])
        assert all(not v['valid'] and v['distance_m'] is None for v in wrong)
        bad=estimator.measure(image,[{'xyxy':[0,0,float('nan'),50]}])
        assert not bad[0]['valid']
        empty=estimator.measure(image,[{'xyxy':[0,0,100,100]}])
        assert not empty[0]['valid'] and empty[0]['distance_m'] is None
        assert estimator.measure(image,[])==[]
        results.append({'board_frame_id':frame['board_frame_id'],'measurements':r})
        print('PASS frame',frame['board_frame_id'],[round(a['distance_m'],3) for a in r])
    first=references[0]
    with tempfile.TemporaryDirectory() as temporary:
        altered=Path(temporary)/'unknown.png';altered.write_bytes(b'not the paired image')
        invalid=estimator.measure(altered,first['boxes'])
        assert all(not a['valid'] and a['distance_m'] is None for a in invalid)
    report={'status':'PASS','mode':'PC reference contract test; no board or serial was involved',
            'tested':['current reference boxes','416 coordinate mapping','unknown image','wrong sequence',
                      'invalid/empty boxes','missing point support','no stale distance reuse'],'frames':results}
    (ROOT/'contract_test.json').write_text(json.dumps(report,ensure_ascii=False,indent=2),encoding='utf-8')
    print('PASS: integration contract; actual teammate GUI/serial integration is still pending')


if __name__=='__main__':main()
