#!/usr/bin/env python3
#
# Minimal perf JIT profiling test for RCP.
#
# Checks only:
#   1. JIT symbol "fac+" is present.
#   2. At least one stack has fac+ ... rcpEval ... fac+.
#   3. [unknown] ratio in JIT-related stacks is below threshold.
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


def parse_stacks(lines: list[str]) -> list[list[str]]:
    """Parse perf script output into frame-only stacks."""
    stacks: list[list[str]] = []
    block: list[str] = []
    for line in lines + [""]:
        if line.strip():
            block.append(line)
            continue
        if block:
            frames = [entry for entry in block if entry[:1].isspace()]
            if frames:
                stacks.append(frames)
            block = []
    return stacks


def main() -> int:
    if shutil.which("perf") is None:
        print("perf not found, skipping perf tests")
        return 0

    r_bin = resolve_r_bin()
    if r_bin is None:
        print("R binary not found (set R_BIN, R_HOME, or PATH)")
        return 1

    with tempfile.NamedTemporaryFile("w", suffix=".R", delete=False) as f:
        f.write("library(rcp)\n")
        f.write('stopifnot(.Call("rcp_perf_support", PACKAGE="rcp"))\n')
        perf_support_script = f.name

    try:
        perf_support_status = run_status(
            [r_bin, "--vanilla", "--slave", "-f", perf_support_script]
        )
    finally:
        Path(perf_support_script).unlink(missing_ok=True)

    if perf_support_status != 0:
        print("Skipping perf tests (PERF_SUPPORT disabled)")
        return 0

    with tempfile.TemporaryDirectory(prefix="perf-tests-") as workdir:
        workdir_path = Path(workdir)
        test_script = workdir_path / "test_fac.R"
        perf_data = workdir_path / "perf.data"
        perf_jit_data = workdir_path / "perf.jit.data"
        perf_output = workdir_path / "perf_script.txt"

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
                "fp",
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

        with perf_output.open("w", encoding="utf-8") as out:
            run_status(["perf", "script", "-i", str(perf_jit_data)], stdout=out)

        if not perf_output.exists() or perf_output.stat().st_size == 0:
            print("perf script produced no output")
            return 1

        lines = perf_output.read_text(encoding="utf-8", errors="replace").splitlines()
        stacks = parse_stacks(lines)
        jit_stacks = [stack for stack in stacks if any("fac+" in frame for frame in stack)]
        jit_stack_texts = [" ".join(stack) for stack in jit_stacks]

        if jit_stacks:
            pass_test("resolved JIT symbol 'fac+' in perf output")
        else:
            fail_test("no resolved JIT symbol 'fac+' found")

        if any(re.search(r"fac\+.*rcpEval.*fac\+", text) for text in jit_stack_texts):
            pass_test("found stack with fac+ -> rcpEval -> fac+ call order")
        else:
            fail_test("no stack with fac+ -> rcpEval -> fac+ call order")

        total_jit_frames = sum(len(stack) for stack in jit_stacks)
        unknown_jit_frames = sum(
            1 for stack in jit_stacks for frame in stack if "[unknown]" in frame
        )
        if total_jit_frames > 0:
            unknown_pct = (unknown_jit_frames * 100) // total_jit_frames
            if unknown_pct < UNKNOWN_THRESHOLD_PCT:
                pass_test(
                    f"[unknown] frames in JIT stacks: {unknown_jit_frames}/{total_jit_frames} "
                    f"({unknown_pct}%)"
                )
            else:
                fail_test(
                    f"[unknown] frames in JIT stacks too high: "
                    f"{unknown_jit_frames}/{total_jit_frames} ({unknown_pct}%)"
                )
        else:
            fail_test("no JIT-related stacks found for [unknown] ratio check")

    print()
    total = PASS_COUNT + FAIL_COUNT
    print("============================================================")
    print(f"Perf tests: {total} total, {PASS_COUNT} passed, {FAIL_COUNT} failed")
    print("============================================================")
    return 1 if FAIL_COUNT else 0


if __name__ == "__main__":
    sys.exit(main())
