from __future__ import annotations

import argparse
import json
from pathlib import Path

from seepersea_common import read_jsonl, write_jsonl


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--input", type=Path, required=True)
    parser.add_argument("--split-map", type=Path, required=True)
    parser.add_argument("--output", type=Path, required=True)
    args = parser.parse_args()

    split_map = json.loads(args.split_map.read_text(encoding="utf-8"))
    rows = read_jsonl(args.input)
    missing = sorted({row["sequence_id"] for row in rows} - set(split_map))
    if missing:
        raise ValueError(f"Sequences missing from split map: {missing}")
    for row in rows:
        row["split"] = split_map[row["sequence_id"]]
    write_jsonl(args.output, rows)
    counts = {name: sum(row["split"] == name for row in rows) for name in ("train", "val", "test")}
    print(json.dumps({"frames": len(rows), "split_counts": counts}, indent=2))


if __name__ == "__main__":
    main()
