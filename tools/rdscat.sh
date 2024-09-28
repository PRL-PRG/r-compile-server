#!/bin/bash

set -Eeuo pipefail

if [[ $# -ne 1 ]]; then
	echo "Usage: $0 <input_file>"
	exit 1
fi

CURRENT_DIR=$(pwd)
SCRIPT_DIR=$(cd $(dirname "$0") && pwd)
BASE_DIR=$(cd "$SCRIPT_DIR/.." && pwd)
R="$BASE_DIR/external/R/bin/R"

if [[ ! -x "$R" ]]; then
	echo "R not found at $R"
	exit 1
fi

$R --slave --vanilla -e "x <- readRDS('$1'); if (is.environment(x)) { ls.str(x); } else { str(x); }"
