#!/usr/bin/env python3
"""
GDB debugging test runner for RCP JIT.

Combines test discovery, execution, and output validation into a single script.
Runs GDB tests in specified directories and reports results with colored output.

Usage:
    ./run-gdb-tests.py [--update] TEST_DIRS...

Examples:
    ./run-gdb-tests.py gdb-basic gdb-next    # Run specific tests
    ./run-gdb-tests.py --update gdb-basic    # Update expected output
"""

import os
import re
import subprocess
import sys
import difflib
from pathlib import Path

try:
    from rich.console import Console
    from rich.syntax import Syntax
    from rich import print as rprint
    RICH_AVAILABLE = True
except ImportError:
    RICH_AVAILABLE = False
    def rprint(*args, **kwargs):
        # Strip rich markup for fallback
        import re
        text = " ".join(str(a) for a in args)
        text = re.sub(r'\[/?[^\]]+\]', '', text)
        print(text, **kwargs)

# Patterns to ignore in output normalization
IGNORE_LINES = [
    r'^\[Thread debugging using libthread_db enabled\]$',
    r'^Using host libthread_db library .*',
    r"^warning: could not find '\.gnu_debugaltlink' .*",
    r'^\[Detaching after vfork from child process PID\]$'
]
IGNORE_PATTERNS = [re.compile(p) for p in IGNORE_LINES]

# Normalization patterns
HEX_PATTERN = re.compile(r'0x[0-9a-fA-F]+')
JIT_PATH_PATTERN = re.compile(r'/tmp/rcp_jit_[a-zA-Z0-9]+/')
PROCESS_PATTERN = re.compile(r'process \d+')
THREAD_PATTERN = re.compile(r'Thread \d+')
C_LINE_PATTERN = re.compile(r' at (.*\.c):\d+')

# Test timeout in seconds
TIMEOUT = 60


def normalize_output(content: str) -> str:
    """Normalize GDB output to allow comparison across runs."""
    lines = content.splitlines()
    normalized_lines = []

    for line in lines:
        line = line.strip()

        # Normalize variable parts
        line = HEX_PATTERN.sub('0xADDR', line)
        line = JIT_PATH_PATTERN.sub('/tmp/rcp_jit_XXXXXX/', line)
        line = PROCESS_PATTERN.sub('process PID', line)
        line = THREAD_PATTERN.sub('Thread PID', line)
        line = C_LINE_PATTERN.sub(r' at \1:XXX', line)

        # Skip ignored lines
        if any(p.match(line) for p in IGNORE_PATTERNS):
            continue

        normalized_lines.append(line)

    return "\n".join(normalized_lines) + "\n"


def check_gdb_jit_support(r_home: str) -> bool:
    """Check if GDB JIT support is enabled in rcp."""
    rscript = os.path.join(r_home, "bin", "Rscript")
    cmd = [rscript, "-e", 
           "library(rcp); if(!.Call('rcp_gdb_jit_support', PACKAGE='rcp')) quit(status=1)"]
    
    try:
        result = subprocess.run(cmd, capture_output=True, timeout=30)
        return result.returncode == 0
    except (subprocess.TimeoutExpired, FileNotFoundError):
        return False


def run_single_test(test_dir: Path, r_home: str, update_mode: bool = False) -> tuple[bool, str]:
    """
    Run a single GDB test in the specified directory.
    
    Returns:
        (success, message) tuple
    """
    test_gdb = test_dir / "test.gdb"
    test_r = test_dir / "test.R"
    expected_file = test_dir / "expected.out"
    actual_file = test_dir / "actual.log"

    # Validate test directory
    if not test_gdb.exists():
        return False, f"Missing test.gdb in {test_dir}"
    if not test_r.exists():
        return False, f"Missing test.R in {test_dir}"

    r_bin = os.path.join(r_home, "bin", "exec", "R")
    r_lib = os.path.join(r_home, "lib")

    if not os.path.exists(r_bin):
        return False, f"R binary not found at {r_bin}"

    # Build GDB command
    gdb_cmd = [
        "gdb", "-q", "-batch",
        "-x", str(test_gdb),
        "--args", r_bin, "-q", "-f", str(test_r)
    ]

    env = os.environ.copy()
    env["LD_LIBRARY_PATH"] = r_lib
    env["R_HOME"] = r_home

    # Run GDB
    try:
        result = subprocess.run(
            gdb_cmd,
            capture_output=True,
            timeout=TIMEOUT,
            env=env,
            cwd=test_dir
        )
        output = result.stdout.decode('utf-8', errors='replace')
        output += result.stderr.decode('utf-8', errors='replace')
    except subprocess.TimeoutExpired:
        return False, "GDB command timed out"
    except Exception as e:
        return False, f"GDB command failed: {e}"

    # Write actual output
    with open(actual_file, 'w', encoding='utf-8') as f:
        f.write(output)

    # Normalize output
    normalized_actual = normalize_output(output)

    # Update mode: write expected output and return
    if update_mode:
        with open(expected_file, 'w', encoding='utf-8') as f:
            f.write(normalized_actual)
        return True, "Updated expected output"

    # Compare with expected output
    if not expected_file.exists():
        return False, f"Missing {expected_file}. Use --update to create it."

    with open(expected_file, 'r', encoding='utf-8', errors='replace') as f:
        expected_content = f.read()

    if normalized_actual == expected_content:
        return True, "Output matches expected"
    else:
        # Generate diff
        diff = difflib.unified_diff(
            expected_content.splitlines(),
            normalized_actual.splitlines(),
            fromfile=f"Expected ({expected_file.name})",
            tofile="Actual (normalized)",
            lineterm=""
        )
        diff_text = "\n".join(diff)
        return False, diff_text


def print_diff(diff_text: str):
    """Print diff with syntax highlighting if available."""
    if RICH_AVAILABLE and sys.stdout.isatty():
        console = Console()
        syntax = Syntax(diff_text, "diff", theme="ansi_dark", line_numbers=False)
        console.print(syntax)
    else:
        print(diff_text)


def main():
    # Parse arguments manually
    args = sys.argv[1:]
    update_mode = "--update" in args
    if update_mode:
        args.remove("--update")
    test_dirs_args = args

    # Get R_HOME
    r_home = os.environ.get("R_HOME")
    if not r_home:
        rprint("[bold red]Error:[/bold red] R_HOME environment variable is not set.")
        sys.exit(1)

    # Check GDB JIT support
    rprint("[bold blue]Checking for GDB JIT support...[/bold blue]")
    if not check_gdb_jit_support(r_home):
        rprint("[yellow]Skipping debugging tests (GDB_JIT_SUPPORT disabled)[/yellow]")
        sys.exit(0)
    rprint("[green]GDB JIT support enabled.[/green]")

    # Determine script directory and test directories
    script_dir = Path(__file__).parent.resolve()
    
    if not test_dirs_args:
        rprint("[yellow]No test directories specified. Nothing to run.[/yellow]")
        sys.exit(0)

    test_dirs = [Path(d) if os.path.isabs(d) else script_dir / d 
                 for d in test_dirs_args]

    # Validate directories exist
    for d in test_dirs:
        if not d.exists():
            rprint(f"[bold red]Error:[/bold red] Test directory not found: {d}")
            sys.exit(1)

    # Run tests
    rprint()
    rprint(f"[bold]Running {len(test_dirs)} test(s)...[/bold]")
    rprint()

    total = 0
    passed = 0
    failed = 0
    failures = []

    for test_dir in test_dirs:
        total += 1
        test_name = test_dir.name

        rprint(f"[bold cyan]{'─' * 60}[/bold cyan]")
        rprint(f"[bold]Test:[/bold] {test_name}")

        success, message = run_single_test(
            test_dir, r_home, 
            update_mode=update_mode
        )

        if success:
            passed += 1
            if update_mode:
                rprint(f"  [bold blue]UPDATED[/bold blue] {message}")
            else:
                rprint(f"  [bold green]PASS[/bold green] {message}")
        else:
            failed += 1
            failures.append(test_name)
            rprint(f"  [bold red]FAIL[/bold red]")
            if message and not message.startswith("---"):
                rprint(f"  {message}")
            elif message:
                # It's a diff
                print_diff(message)

    # Summary
    rprint()
    rprint(f"[bold cyan]{'═' * 60}[/bold cyan]")
    rprint(f"[bold]Summary:[/bold]")
    rprint(f"  Total:  {total}")
    rprint(f"  Passed: [green]{passed}[/green]")
    rprint(f"  Failed: [red]{failed}[/red]")

    if failures:
        rprint()
        rprint("[bold red]Failed tests:[/bold red]")
        for name in failures:
            rprint(f"  • {name}")

    rprint(f"[bold cyan]{'═' * 60}[/bold cyan]")

    if failed > 0:
        sys.exit(1)
    sys.exit(0)


if __name__ == "__main__":
    main()
