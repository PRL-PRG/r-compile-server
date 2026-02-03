#!/usr/bin/env python3
import sys
import re
import difflib
import os

def normalize(content):
    lines = content.splitlines()
    normalized_lines = []
    
    # Flags to skip header
    skip_until_library = True
    
    # Regex patterns
    # Hex addresses: 0x7ffff458b2e6
    hex_pattern = re.compile(r'0x[0-9a-fA-F]+')
    # JIT paths: /tmp/rcp_jit_KjmRLU/
    jit_path_pattern = re.compile(r'/tmp/rcp_jit_[a-zA-Z0-9]+/')
    # Thread/Process info
    process_pattern = re.compile(r'process \d+')
    thread_pattern = re.compile(r'Thread \d+')
    
    # GDB specific warnings to ignore
    ignore_patterns = [
        "warning: could not find '.gnu_debugaltlink'",
        "[Thread debugging using libthread_db enabled]",
        "Using host libthread_db library",
        "[Detaching after vfork from child process"
    ]

    for line in lines:
        # 1. Skip R header until we see "library(rcp)" or a prompt
        if skip_until_library:
            if "library(rcp)" in line or line.strip() == "> library(rcp)":
                skip_until_library = False
            else:
                continue

        # 2. Filter out noisy GDB lines
        if any(p in line for p in ignore_patterns):
            continue

        # 3. Normalize
        # Replace hex addresses
        line = hex_pattern.sub('0xADDR', line)
        # Replace JIT paths
        line = jit_path_pattern.sub('/tmp/rcp_jit_XXXXXX/', line)
        # Replace process/thread IDs
        line = process_pattern.sub('process PID', line)
        line = thread_pattern.sub('Thread PID', line)
        
        # Remove trailing whitespace
        line = line.rstrip()
        
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

    # Normalize expected content too? 
    # Usually expected content is already normalized. 
    # But just in case user manually edited it or it was generated differently.
    # We assume expected content IS the normalized version.
    
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
        for line in diff:
            print(line)
        sys.exit(1)

if __name__ == "__main__":
    main()
