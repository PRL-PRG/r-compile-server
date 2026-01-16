#!/bin/bash

set -e

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
COMPILE_SCRIPT="$SCRIPT_DIR/compile-package.R"

PACKAGES_FILE=""
OUTPUT_DIR=""
JOBS=""
USE_CACHE=""
KEEP_OUTPUT=""

while [[ $# -gt 0 ]]; do
  case $1 in
  --jobs)
    JOBS="$2"
    shift 2
    ;;
  --cache)
    USE_CACHE="--cache"
    shift
    ;;
  --keep-output)
    KEEP_OUTPUT="yes"
    shift
    ;;
  -*)
    echo "Error: Unknown option: $1"
    exit 1
    ;;
  *)
    if [ -z "$PACKAGES_FILE" ]; then
      PACKAGES_FILE="$1"
    elif [ -z "$OUTPUT_DIR" ]; then
      OUTPUT_DIR="$1"
    else
      echo "Error: Unexpected argument: $1"
      exit 1
    fi
    shift
    ;;
  esac
done

# Set defaults
JOBS="${JOBS:-$(nproc)}"

if [ -z "$PACKAGES_FILE" ] || [ -z "$OUTPUT_DIR" ]; then
  echo "Usage: $0 <packages_file> <output_dir> [options]"
  echo ""
  echo "Arguments:"
  echo "  packages_file: File containing one package name per line"
  echo "  output_dir:    Directory to store output files"
  echo ""
  echo "Options:"
  echo "  --jobs <n>:      Number of parallel jobs (default: all)"
  echo "  --cache:         Enable caching (sets cache=T in rsh_compile)"
  echo "  --keep-output:   Keep compiled artifacts in <output_dir>/<package_name>/"
  exit 1
fi

if [ ! -f "$PACKAGES_FILE" ]; then
  echo "Error: Packages file not found: $PACKAGES_FILE"
  exit 1
fi

if [ ! -f "$COMPILE_SCRIPT" ]; then
  echo "Error: Compile script not found: $COMPILE_SCRIPT"
  exit 1
fi

# Check if parallel is installed
if ! command -v parallel &>/dev/null; then
  echo "Error: GNU parallel is not installed"
  exit 1
fi

mkdir -p "$OUTPUT_DIR"

echo "Compiling packages from: $PACKAGES_FILE"
echo "Output directory: $OUTPUT_DIR"
echo "Parallel jobs: $JOBS"
echo "Caching: ${USE_CACHE:-disabled}"
echo "Keep output: ${KEEP_OUTPUT:-no}"
echo ""

# For --keep-output, we pass <output_dir>/<package_name> as the artifact directory
if [ -n "$KEEP_OUTPUT" ]; then
  KEEP_OUTPUT_FLAG="--keep-output '$OUTPUT_DIR/{}'"
else
  KEEP_OUTPUT_FLAG=""
fi

parallel --jobs "$JOBS" -a "$PACKAGES_FILE" --results "$OUTPUT_DIR/{}/out" --progress --line-buffer --tag \
  "Rscript '$COMPILE_SCRIPT' {} '$OUTPUT_DIR/{}/results.csv' $USE_CACHE $KEEP_OUTPUT_FLAG"

echo ""
echo "Compilation complete. Results in: $OUTPUT_DIR"
