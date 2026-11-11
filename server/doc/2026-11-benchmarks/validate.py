"""Usage: validate.py OLD_A NEW_A [OLD_B NEW_B]

Compare a new run with an old campaign run of the same commit: FIŘ sha256, C line count, and
fir2c.opt time, raw and as the ratio fir2c.opt / bc.opt (load-corrected). With a second pair,
also compare the step A -> B (fir2c.opt time of A / time of B) between the old and the new runs.
"""
import csv, glob, hashlib, math, os, sys


def times(d):
    out = {}
    for f in glob.glob(os.path.join(d, 'csv', 'bench_*.csv')):
        rows = {r['removed']: r for r in csv.DictReader(open(f))}
        try:
            out[os.path.basename(f)[:-4]] = (float(rows['<none>']['time']), float(rows['bc.opt']['time']))
        except (KeyError, ValueError):
            pass
    return out


def sizes(d):
    return {r['example']: r for r in csv.DictReader(open(os.path.join(d, 'sizes.tsv')), delimiter='\t')}


def sha(p):
    return hashlib.sha256(open(p, 'rb').read()).hexdigest() if os.path.exists(p) else None


def geo(xs):
    return math.exp(sum(map(math.log, xs)) / len(xs)) if xs else float('nan')


def same(old, new):
    to, tn, so, sn = times(old), times(new), sizes(old), sizes(new)
    print(f'## {os.path.basename(old)} vs {os.path.basename(new)}')
    print('example | fir | c_lines old/new | fir2c.opt ms old/new | new/old | (fir/bc) new/old')
    bad, raw, rel = 0, [], []
    for ex in sorted(set(so) | set(sn)):
        fo = sha(os.path.join(old, 'fir', ex + '.fir'))
        fn = sha(os.path.join(new, 'fir', ex + '.fir')) or sn.get(ex, {}).get('fir_sha256')
        fir_ok = fo is not None and fo == fn
        cl_o, cl_n = so.get(ex, {}).get('c_lines'), sn.get(ex, {}).get('c_lines')
        r = q = float('nan')
        if ex in to and ex in tn:
            r = tn[ex][0] / to[ex][0]
            q = (tn[ex][0] / tn[ex][1]) / (to[ex][0] / to[ex][1])
            raw.append(r); rel.append(q)
        flag = '' if fir_ok and cl_o == cl_n and abs(math.log(q)) < math.log(1.12) else '  <--'
        bad += bool(flag)
        print(f'{ex} | {"same" if fir_ok else "DIFF"} | {cl_o}/{cl_n} | '
              f'{to.get(ex, (math.nan,))[0]*1e3:.4g}/{tn.get(ex, (math.nan,))[0]*1e3:.4g} | {r:.3f} | {q:.3f}{flag}')
    print(f'geomean new/old: raw {geo(raw):.3f}, load-corrected {geo(rel):.3f}; flagged {bad}\n')


def step(oa, na, ob, nb):
    to_a, tn_a, to_b, tn_b = times(oa), times(na), times(ob), times(nb)
    print('## step A -> B (speedup = time A / time B)')
    print('example | old speedup | new speedup | new/old')
    so, sn = [], []
    for ex in sorted(set(to_a) & set(tn_a) & set(to_b) & set(tn_b)):
        o, n = to_a[ex][0] / to_b[ex][0], tn_a[ex][0] / tn_b[ex][0]
        so.append(o); sn.append(n)
        print(f'{ex} | {o:.3f} | {n:.3f} | {n / o:.3f}')
    print(f'geomean speedup: old {geo(so):.3f}, new {geo(sn):.3f}')


a = sys.argv[1:]
same(a[0], a[1])
if len(a) == 4:
    same(a[2], a[3])
    step(a[0], a[1], a[2], a[3])
