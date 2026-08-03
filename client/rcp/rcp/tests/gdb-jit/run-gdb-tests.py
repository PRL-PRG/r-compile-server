#!/usr/bin/env python3
"""GDB JIT test runner — validates structural properties of backtraces."""

import os, re, subprocess, sys

R_HOME = os.environ["R_HOME"]
SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
TIMEOUT = 60

def check_gdb_jit():
    r = subprocess.run(
        [f"{R_HOME}/bin/Rscript", "-e",
         "library(rcp); if(!.Call('rcp_gdb_jit_support', PACKAGE='rcp')) quit(status=1)"],
        capture_output=True, timeout=30, env={**os.environ, "RCP_GDB_JIT": "1"})
    return r.returncode == 0

def run_gdb(test_dir):
    r_bin = f"{R_HOME}/bin/exec/R"
    return subprocess.run(
        ["gdb", "-q", "-batch", "-x", "test.gdb", "--args", r_bin, "-q", "-f", "test.R"],
        capture_output=True, timeout=TIMEOUT, cwd=test_dir,
        env={**os.environ, "LD_LIBRARY_PATH": f"{R_HOME}/lib",
             "R_HOME": R_HOME, "RCP_GDB_JIT": "1"}
    ).stdout.decode("utf-8", errors="replace")

def extract_bt(output, tag):
    m = re.search(f"==={tag}_START===\\n(.*?)==={tag}_END===", output, re.DOTALL)
    return m.group(1) if m else None

def bt_frames(bt):
    return [l for l in bt.splitlines() if re.match(r"#\d+", l)]

def check(cond, msg, errors):
    if not cond:
        errors.append(msg)

def test_gdb_recursion(output, errors):
    check("Result: 6" in output, "missing 'Result: 6'", errors)
    check("corrupt stack" not in output.lower(), "corrupt stack detected", errors)
    for i, tag in enumerate(["BT1", "BT2", "BT3"], 1):
        bt = extract_bt(output, tag)
        check(bt is not None, f"{tag} section not found", errors)
        if not bt:
            continue
        frames = bt_frames(bt)
        check(not any("?? ()" in f for f in frames), f"{tag}: unresolved frames", errors)
        check(any("main" in f for f in frames[-1:]), f"{tag}: doesn't end with main", errors)
        fac_count = sum(1 for f in frames if re.search(r"\bfac\b", f))
        check(fac_count == i, f"{tag}: expected {i} fac frame(s), got {fac_count}", errors)

def test_gdb_next(output, errors):
    check("corrupt stack" not in output.lower(), "corrupt stack detected", errors)
    bt = extract_bt(output, "BT1")
    check(bt is not None, "BT1 section not found", errors)
    if bt:
        frames = bt_frames(bt)
        check(not any("?? ()" in f for f in frames), "BT1: unresolved frames", errors)
        check(any("main" in f for f in frames[-1:]), "BT1: doesn't end with main", errors)
        check(any("f_jit" in f for f in frames), "BT1: f_jit not in backtrace", errors)
    for val in ["10.000000", "1.000000", "11.000000"]:
        check(f"dbl: {val}" in output, f"missing 'dbl: {val}'", errors)

TESTS = {"gdb-recursion": test_gdb_recursion, "gdb-next": test_gdb_next}

if not check_gdb_jit():
    print("Skipping debugging tests (GDB JIT support not available)")
    sys.exit(0)

failed = 0
for name in sys.argv[1:]:
    test_dir = os.path.join(SCRIPT_DIR, name)
    output = run_gdb(test_dir)
    errors = []
    TESTS[name](output, errors)
    if errors:
        failed += 1
        print(f"  FAIL  {name}")
        for e in errors:
            print(f"    - {e}")
    else:
        print(f"  PASS  {name}")

sys.exit(1 if failed else 0)
