#!/usr/bin/env python3
"""Usage: no_time.py LOG_DIR STATUS_DIR
Sets the field `no_time` of each STATUS_DIR/<example>.json from LOG_DIR/<example>.log.
`no_time(log)` maps each variant without a time to a short reason, from the lines of `VariantBenchmark#time`."""
import json, os, re, sys

PRE = '[WARNING] [stderr] '
LINE = re.compile(r"(?:Nothing to benchmark for (?P<n>.+)|(?:Didn't return a time for|Crashed benchmarking) (?P<v>.+?): (?P<r>.*))$")


def no_time(log):
    out = [l[len(PRE):].rstrip('\n') for l in open(log, errors='replace') if l.startswith(PRE)]
    res = {}
    for i, l in enumerate(out):
        if not (m := LINE.match(l)): continue
        if m['n']:
            res.setdefault(m['n'], 'nothing to benchmark (no compiled module)')
            continue
        r = re.sub(r'^[\w.$]+(?:Exception|Error): ', '', m['r']).removesuffix(' Output:').removesuffix('.')
        r = re.sub(r'^.*The benchmark call failed: ', 'the benchmark call failed: ', r)   # after R's warnings
        # The first line of the R output, before the next reason or the table.
        for o in out[i + 1:i + 6]:
            if LINE.match(o) or re.match(r'\s+removed\s', o): break
            if o := o.strip(' *'):
                r += f': {o}'
                break
        res.setdefault(m['v'], re.sub(r'(?:/[^\s/:\'"]+){2,}', '<path>', r)[:200])
    return res


if __name__ == '__main__':
    logs, st = sys.argv[1:]
    for f in sorted(os.listdir(st)):
        if not f.endswith('.json') or not os.path.exists(lf := os.path.join(logs, f[:-5] + '.log')): continue
        p = os.path.join(st, f)
        s = json.load(open(p))
        s['no_time'] = no_time(lf)
        json.dump(s, open(p, 'w'), indent=1)
