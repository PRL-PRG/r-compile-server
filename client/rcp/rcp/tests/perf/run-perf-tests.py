#!/usr/bin/env python3
#
# Minimal perf JIT profiling test for RCP.
#
# Checks only:
#   1. JIT symbol "fac" is present.
#   2. At least one stack has rcpEval ... fac call order.
#   3. Unknown-frame ratio (missing symbol name) is below threshold.
#

from __future__ import annotations

import os
import re
import shutil
import subprocess
import sys
import tempfile
from pathlib import Path


UNKNOWN_THRESHOLD_PCT = 10
PASS_COUNT = 0
FAIL_COUNT = 0


def pass_test(msg: str) -> None:
    global PASS_COUNT
    print(f"  PASS: {msg}")
    PASS_COUNT += 1


def fail_test(msg: str) -> None:
    global FAIL_COUNT
    print(f"  FAIL: {msg}")
    FAIL_COUNT += 1


def run_status(argv: list[str], stdout=None, stderr=None) -> int:
    if stdout is None:
        stdout = subprocess.DEVNULL
    if stderr is None:
        stderr = subprocess.DEVNULL
    try:
        return subprocess.run(argv, stdout=stdout, stderr=stderr, check=False).returncode
    except FileNotFoundError:
        return 127


def resolve_r_bin() -> str | None:
    env_r_bin = os.environ.get("R_BIN", "")
    if env_r_bin and Path(env_r_bin).is_file():
        return env_r_bin

    r_home = os.environ.get("R_HOME", "")
    if r_home:
        candidate = Path(r_home) / "bin" / "R"
        if candidate.is_file():
            return str(candidate)

    return shutil.which("R")


def check_perf_support(r_bin: str) -> bool:
    return run_status(
        [
            r_bin,
            "--vanilla",
            "--slave",
            "-e",
            "stopifnot(.Call(rcp:::C_rcp_perf_jit_support))",
        ]
    ) == 0


def is_fac_symbol(sym: str) -> bool:
    return sym == "fac" or sym.startswith("fac+")


def has_call_order(symbols: list[str]) -> bool:
    for idx, sym in enumerate(symbols):
        if "rcpEval" in sym:
            for later in symbols[idx + 1 :]:
                if is_fac_symbol(later):
                    return True
    return False


def load_from_perf_script(perf_script: Path) -> tuple[int, bool, int, int]:
    lines = perf_script.read_text(encoding="utf-8", errors="replace").splitlines()
    frame_re = re.compile(r"^\s*[0-9a-f]+\s+(\S+)")

    jit_stack_count = 0
    call_order_seen = False
    total_frames = 0
    unknown_frames = 0

    block: list[str] = []
    for line in lines + [""]:
        if line.strip():
            block.append(line)
            continue

        if not block:
            continue

        symbols: list[str] = []
        for entry in block:
            if not entry[:1].isspace():
                continue
            total_frames += 1
            m = frame_re.match(entry)
            symbol_text = m.group(1) if m else ""
            symbols.append(symbol_text)
            if not symbol_text or symbol_text == "[unknown]":
                unknown_frames += 1

        if any(is_fac_symbol(sym) for sym in symbols):
            jit_stack_count += 1
            if not call_order_seen and has_call_order(symbols):
                call_order_seen = True

        block = []

    return jit_stack_count, call_order_seen, total_frames, unknown_frames


def validate_results(
    jit_stack_count: int,
    call_order_seen: bool,
    total_frames: int,
    unknown_frames: int,
) -> None:
    if jit_stack_count > 0:
        pass_test("resolved JIT symbol 'fac' in perf output")
    else:
        fail_test("no resolved JIT symbol 'fac' found")

    if call_order_seen:
        pass_test("found stack with rcpEval -> fac call order")
    else:
        fail_test("no stack with rcpEval -> fac call order")

    if total_frames > 0:
        unknown_pct = (unknown_frames * 100) // total_frames
        if unknown_pct < UNKNOWN_THRESHOLD_PCT:
            pass_test(
                f"unknown frames (missing symbol): {unknown_frames}/{total_frames} "
                f"({unknown_pct}%)"
            )
        else:
            fail_test(
                f"unknown frames (missing symbol) too high: "
                f"{unknown_frames}/{total_frames} ({unknown_pct}%)"
            )
    else:
        fail_test("no frames found for unknown-symbol ratio check")


def main() -> int:
    if shutil.which("perf") is None:
        print("perf not found, skipping perf tests")
        return 0

    r_bin = resolve_r_bin()
    if r_bin is None:
        print("R binary not found (set R_BIN, R_HOME, or PATH)")
        return 1

    if not check_perf_support(r_bin):
        print("Skipping perf tests (PERF_SUPPORT disabled)")
        return 0

    with tempfile.TemporaryDirectory(prefix="perf-tests-") as workdir:
        workdir_path = Path(workdir)
        test_script = workdir_path / "test_fac.R"
        perf_data = workdir_path / "perf.data"
        perf_jit_data = workdir_path / "perf.jit.data"
        perf_script = workdir_path / "perf.script.txt"

        test_script.write_text(
            "\n".join(
                (
                    "library(rcp)",
                    "fac <- function(n) if (n <= 1) 1L else n * fac(n - 1L)",
                    'fac <- rcp::rcp_cmpfun(fac, list(name = "fac"))',
                    "for (i in 1:500000) fac(10)",
                )
            )
            + "\n",
            encoding="utf-8",
        )

        if run_status(
            [
                "perf",
                "record",
                "-k",
                "1",
                "-g",
                "--call-graph",
                "dwarf",
                "-o",
                str(perf_data),
                "--",
                r_bin,
                "--vanilla",
                "-q",
                "-f",
                str(test_script),
            ]
        ) != 0:
            print("perf record failed")
            return 1

        if run_status(
            ["perf", "inject", "--jit", "-i", str(perf_data), "-o", str(perf_jit_data)]
        ) != 0:
            print("perf inject --jit failed")
            return 1

        with perf_script.open("w", encoding="utf-8") as out:
            if run_status(["perf", "script", "-i", str(perf_jit_data)], stdout=out) != 0:
                print("perf script failed")
                return 1

        if not perf_script.exists() or perf_script.stat().st_size == 0:
            print("perf script output is empty")
            return 1

        jit_stack_count, call_order_seen, total_frames, unknown_frames = load_from_perf_script(
            perf_script
        )

        validate_results(
            jit_stack_count=jit_stack_count,
            call_order_seen=call_order_seen,
            total_frames=total_frames,
            unknown_frames=unknown_frames,
        )

    print()
    total = PASS_COUNT + FAIL_COUNT
    print("============================================================")
    print(f"Perf tests: {total} total, {PASS_COUNT} passed, {FAIL_COUNT} failed")
    print("============================================================")
    return 1 if FAIL_COUNT else 0


if __name__ == "__main__":
    sys.exit(main())
