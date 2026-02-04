#!/usr/bin/env python3
import sys
import re
import difflib
import os

IGNORE_LINES = [
    r'^\[Thread debugging using libthread_db enabled\]$',
    r'^Using host libthread_db library .*',
    r"^warning: could not find '\.gnu_debugaltlink' .*",
    r'^\[Detaching after vfork from child process PID\]$'
]
IGNORE_PATTERNS = [re.compile(p) for p in IGNORE_LINES]

def normalize(content):
    lines = content.splitlines()
    normalized_lines = []
    
    hex_pattern = re.compile(r'0x[0-9a-fA-F]+')
    jit_path_pattern = re.compile(r'/tmp/rcp_jit_[a-zA-Z0-9]+/')
    process_pattern = re.compile(r'process \d+')
    thread_pattern = re.compile(r'Thread \d+')
    c_line = re.compile(r' at (.*\.c):\d+')
    
    for line in lines:
        line = line.strip()

        line = hex_pattern.sub('0xADDR', line)
        line = jit_path_pattern.sub('/tmp/rcp_jit_XXXXXX/', line)
        line = process_pattern.sub('process PID', line)
        line = thread_pattern.sub('Thread PID', line)
        line = c_line.sub(' at \\1:XXX', line)
        
        if any(p.match(line) for p in IGNORE_PATTERNS):
            continue

        normalized_lines.append(line)

    return "\n".join(normalized_lines) + "\n"

def main():
    if len(sys.argv) < 3:
        print(f"Usage: {sys.argv[0]} <actual_output> <expected_output> [--update]")
        sys.exit(1)

    actual_file = sys.argv[1]
    expected_file = sys.argv[2]
    update_mode = "--update" in sys.argv

    if not os.path.exists(actual_file):
        print(f"Error: Actual file {actual_file} not found.")
        sys.exit(1)

    with open(actual_file, 'r', encoding='utf-8', errors='replace') as f:
        actual_content = f.read()

    normalized_actual = normalize(actual_content)

    if update_mode:
        print(f"Updating {expected_file}...")
        with open(expected_file, 'w', encoding='utf-8') as f:
            f.write(normalized_actual)
        return

    if not os.path.exists(expected_file):
        print(f"Error: Expected file {expected_file} not found. Use --update to create it.")
        sys.exit(1)

    with open(expected_file, 'r', encoding='utf-8', errors='replace') as f:
        expected_content = f.read()

    if normalized_actual == expected_content:
        print("[PASS] Output matches expected golden file.")
    else:
        print("[FAIL] Output mismatch.")
        diff = difflib.unified_diff(
            expected_content.splitlines(),
            normalized_actual.splitlines(),
            fromfile=f"Expected ({expected_file})",
            tofile=f"Actual (normalized)",
            lineterm=""
        )
        diff_text = "\n".join(diff)

        if sys.stdout.isatty():
            try:
                from rich.console import Console
                from rich.syntax import Syntax
                console = Console()
                syntax = Syntax(diff_text, "diff", theme="ansi_dark", line_numbers=False)
                console.print(syntax)
            except ImportError:
                print(diff_text)
        else:
            print(diff_text)

        sys.exit(1)

if __name__ == "__main__":
    main()
