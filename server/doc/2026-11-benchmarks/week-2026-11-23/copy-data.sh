#!/bin/sh
# Refresh data/ from the scratch folder. Keeps the hand-written data/site-code.tsv.
# Copies a timing run only when it has DONE.
set -eu
S=${S:-/private/tmp/claude-501/-Users-jakobeha-Documents-grad-research-r-compile-server/d83e9c63-f288-4e64-a1e0-52e0951c10b1/scratchpad}
D=$(cd "$(dirname "$0")" && pwd)/data
mkdir -p "$D/counter" "$D/gvn" "$D/warmup" "$D/next" "$D/timing"
cp "$S/counter/all-counts.tsv" "$S/counter/report.txt" "$D/counter/"
cp "$S/gvn/gvn-per-example.tsv" "$S/gvn/gvn-removals.tsv" "$S/gvn/gvn-hashes.tsv" "$D/gvn/"
cp "$S"/warmup/*-hashes.tsv "$D/warmup/"
cp "$S/next/ranked-prom.tsv" "$S/next/ranked-box.tsv" "$S/next/breadth.tsv" \
   "$S/next/promise-counts.tsv" "$S/next/propcounts.txt" "$D/next/"
for r in r1-CE0 r1-CE1 r1-CE2 r1-TIP r1-GVN r2-TIP r2-CE2 r2-CE1 r2-CE0; do
  [ -e "$S/timing/$r/DONE" ] || continue
  rm -rf "$D/timing/$r"; mkdir -p "$D/timing/$r/csv"
  cp "$S/timing/$r/meta.json" "$S/timing/$r/DONE" "$D/timing/$r/"
  cp "$S/timing/$r/csv/"bench_*.csv "$D/timing/$r/csv/" 2>/dev/null || true
done
echo "copied: $(ls "$D/timing" | wc -l | tr -d ' ') timing runs"
