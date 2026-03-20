#!/bin/bash
# Discover all test subdirectories
# Output: space-separated list of test directory names
SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
ls -d "$SCRIPT_DIR"/*/ 2>/dev/null | xargs -n1 basename | sort | tr '\n' ' ' | sed 's/ $//'
