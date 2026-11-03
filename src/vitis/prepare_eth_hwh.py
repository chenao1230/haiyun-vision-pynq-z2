"""Create a PYNQ-Z2 Ethernet-enabled HWH without modifying the source project."""

from __future__ import annotations

import argparse
import xml.etree.ElementTree as ET
from pathlib import Path


def selected(name: str) -> bool:
    if name.startswith("PCW_ENET0_"):
        return True
    if name in {
        "PCW_ACT_ENET0_PERIPHERAL_FREQMHZ",
        "PCW_EN_ENET0",
        "PCW_EN_EMIO_ENET0",
        "PCW_EN_PTP_ENET0",
        "PCW_P2F_ENET0_INTR",
        "PCW_ENET_RESET_ENABLE",
        "PCW_ENET_RESET_SELECT",
        "PCW_ENET_RESET_POLARITY",
        "PCW_MIO_TREE_PERIPHERALS",
        "PCW_MIO_TREE_SIGNALS",
        "PCW_IO_IO_PLL_FREQMHZ",
    } or name.startswith("PCW_FCLK0_PERIPHERAL_"):
        return True
    if name.startswith("PCW_MIO_"):
        parts = name.split("_")
        if len(parts) >= 3 and parts[2].isdigit():
            pin = int(parts[2])
            return pin == 9 or 16 <= pin <= 27 or pin in {52, 53}
    return False


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("source_hwh", type=Path)
    parser.add_argument("preset_xml", type=Path)
    parser.add_argument("output_hwh", type=Path)
    args = parser.parse_args()

    preset_root = ET.parse(args.preset_xml).getroot()
    desired: dict[str, str] = {}
    for node in preset_root.iter():
        raw = node.attrib.get("name", "")
        if not raw.startswith("CONFIG."):
            continue
        name = raw.removeprefix("CONFIG.")
        if selected(name):
            desired[name] = node.attrib["value"]

    tree = ET.parse(args.source_hwh)
    changed: dict[str, tuple[str, str]] = {}
    ethernet_pins = {9, *range(16, 28), 52, 53}
    for node in tree.getroot().iter():
        name = node.attrib.get("NAME")
        if name in desired and "VALUE" in node.attrib:
            old = node.attrib["VALUE"]
            new = desired[name]
            if name in {"PCW_MIO_TREE_PERIPHERALS", "PCW_MIO_TREE_SIGNALS"}:
                old_items = old.split("#")
                new_items = new.split("#")
                if len(old_items) != len(new_items):
                    raise SystemExit(f"MIO tree length mismatch for {name}")
                for pin in ethernet_pins:
                    old_items[pin] = new_items[pin]
                new = "#".join(old_items)
            if old != new:
                node.attrib["VALUE"] = new
                changed[name] = (old, new)

    required = {
        "PCW_EN_ENET0",
        "PCW_ENET0_PERIPHERAL_ENABLE",
        "PCW_ENET0_ENET0_IO",
        "PCW_ENET0_GRP_MDIO_ENABLE",
        "PCW_ENET0_GRP_MDIO_IO",
        "PCW_ENET0_RESET_ENABLE",
        "PCW_ENET0_RESET_IO",
    }
    missing = sorted(required - changed.keys())
    if missing:
        raise SystemExit(f"Required Ethernet parameters were not changed: {missing}")

    args.output_hwh.parent.mkdir(parents=True, exist_ok=True)
    tree.write(args.output_hwh, encoding="UTF-8", xml_declaration=True)
    print(f"Wrote {args.output_hwh}")
    for name, values in sorted(changed.items()):
        print(f"{name}: {values[0]} -> {values[1]}")


if __name__ == "__main__":
    main()
