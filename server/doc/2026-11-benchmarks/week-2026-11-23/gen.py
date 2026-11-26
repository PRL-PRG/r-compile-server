#!/usr/bin/env python3
"""Write index.html, the report of the week 2026-11-23, from data/, facts.md and next.md.

Usage: python3 gen.py [DATA_DIR [OUT_FILE]]  (defaults: ./data and ./index.html).
Timing runs without data/timing/<run>/DONE show as "Pending".
"""
import csv, glob, html, json, math, os, re, statistics, sys

HERE = os.path.dirname(os.path.abspath(__file__))
D = sys.argv[1] if len(sys.argv) > 1 else os.path.join(HERE, 'data')
OUT = sys.argv[2] if len(sys.argv) > 2 else os.path.join(HERE, 'index.html')
CATS = ['awf', 'shootout', 'real', 'ati', 'scalar', 'mathkernel', 'riposte', 'misc']
BUILDS = ['bcopt', 'ce0', 'ce1', 'ce2', 'tip', 'gvn']  # counter build ids
BNAME = {'bcopt': 'bc.opt', 'ce0': 'CE0', 'ce1': 'CE1', 'ce2': 'CE2', 'tip': 'TIP', 'gvn': 'GVN'}
FIR = ['CE0', 'CE1', 'CE2', 'TIP', 'GVN']
RUNS = [('r1-CE0', 'CE0'), ('r1-CE1', 'CE1'), ('r1-CE2', 'CE2'), ('r1-TIP', 'TIP'), ('r1-GVN', 'GVN'),
        ('r2-TIP', 'TIP'), ('r2-CE2', 'CE2'), ('r2-CE1', 'CE1'), ('r2-CE0', 'CE0')]
GNUR = ['ast', 'bc.default', 'bc.opt']
BASE, RERUN = '<none>', '<none> (rerun)'
NOTES = []  # data notes: inconsistencies found at generation time


def note(msg):
    if msg in NOTES: return
    NOTES.append(msg)
    print('gen.py: data note: ' + msg, file=sys.stderr)


def check(cond, msg):
    if not cond: note(msg)


def esc(s): return html.escape(str(s), quote=True)


def rd(*p): return open(os.path.join(D, *p), encoding='utf-8').read()


def tsv(*p):
    return list(csv.DictReader((l for l in rd(*p).splitlines() if not l.startswith('#')), delimiter='\t'))


def gmean(xs):
    xs = [x for x in xs if x]
    return math.exp(sum(map(math.log, xs)) / len(xs)) if xs else None


def num(s):
    try:
        v = float(s)
        return v if math.isfinite(v) and v > 0 else None
    except (TypeError, ValueError):
        return None


def cat_of(e): return e.removeprefix('bench_').split('_')[0]


def short(e): return e.removeprefix('bench_')


def fi(n): return f'{n:,.0f}'


def fk(n):  # 1234567 -> 1.23 M, 12345 -> 12.3 K
    a = abs(n)
    return (f'{n / 1e6:.2f} M' if a >= 1e6 else f'{n / 1e3:.1f} K' if a >= 1e4 else fi(n))


def fr(r, d=3): return '–' if r is None else f'{r:.{d}f}'


def pct(r): return '–' if r is None else f'{(r - 1) * 100:+.1f} %'.replace('-', '−')


# ---------------------------------------------------------------- markdown

def mdi(s):
    """Inline markdown: `code`, **bold**, *em*."""
    out, parts = [], re.split(r'(`[^`]*`)', s)
    for p in parts:
        if p.startswith('`') and p.endswith('`') and len(p) > 1:
            out.append(f'<code>{esc(p[1:-1])}</code>')
        else:
            t = esc(p)
            t = re.sub(r'\*\*(.+?)\*\*', r'<strong>\1</strong>', t)
            t = re.sub(r'(?<![\w*])\*(?!\s)(.+?)(?<!\s)\*(?![\w*])', r'<em>\1</em>', t)
            out.append(t)
    return ''.join(out)


def md_table(lines, cls='md'):
    rows = [[c.strip() for c in l.strip().strip('|').split('|')] for l in lines]
    head, body = rows[0], [r for r in rows[2:]]
    h = ''.join(f'<th scope="col">{mdi(c)}</th>' for c in head)
    b = ''.join('<tr>' + ''.join(f'<td>{mdi(c)}</td>' for c in r) + '</tr>' for r in body)
    return f'<div class="tw"><table class="{cls}"><thead><tr>{h}</tr></thead><tbody>{b}</tbody></table></div>'


def md(text):
    """Block markdown: paragraphs, - and 1. lists, tables. No headings."""
    out, lines, i = [], text.strip('\n').splitlines(), 0
    while i < len(lines):
        l = lines[i]
        if not l.strip(): i += 1; continue
        if l.lstrip().startswith('|'):
            j = i
            while j < len(lines) and lines[j].lstrip().startswith('|'): j += 1
            out.append(md_table(lines[i:j])); i = j; continue
        m = re.match(r'(\s*)(-|\d+\.) ', l)
        if m:
            tag = 'ul' if m[2] == '-' else 'ol'
            items = []
            while i < len(lines) and (mm := re.match(r'\s*(-|\d+\.) (.*)', lines[i])):
                item = mm[2]; i += 1
                while i < len(lines) and lines[i].startswith('  ') and not re.match(r'\s*(-|\d+\.) ', lines[i]):
                    item += ' ' + lines[i].strip(); i += 1
                items.append(f'<li>{mdi(item)}</li>')
            out.append(f'<{tag}>{"".join(items)}</{tag}>'); continue
        para = [l]; i += 1
        while i < len(lines) and lines[i].strip() and not re.match(r'\s*(\||-|\d+\.) ', lines[i]) \
                and not lines[i].lstrip().startswith('|'):
            para.append(lines[i]); i += 1
        out.append(f'<p>{mdi(" ".join(x.strip() for x in para))}</p>')
    return ''.join(out)


def sections(text):
    """{heading: body} of the `## ` sections of a markdown file."""
    out, cur = {}, None
    for l in text.splitlines():
        if l.startswith('## '): cur = l[3:].strip(); out[cur] = []
        elif cur: out[cur].append(l)
    return {k: '\n'.join(v) for k, v in out.items()}


def sec(secs, prefix):
    k = next((k for k in secs if k.startswith(prefix)), None)
    if k is None: sys.exit(f'gen.py: no section starting with {prefix!r}')
    return k, secs[k]


def bullets(body):
    """The top-level list items of a markdown body (continuation lines joined)."""
    items = []
    for l in body.splitlines():
        if m := re.match(r'(-|\d+\.) (.*)', l): items.append(m[2])
        elif items and l.startswith('  ') and l.strip(): items[-1] += ' ' + l.strip()
    return items


def table_lines(body):
    return [l for l in body.splitlines() if l.lstrip().startswith('|')]


FACTS = sections(open(os.path.join(HERE, 'facts.md'), encoding='utf-8').read())
NEXT_TXT = open(os.path.join(HERE, 'next.md'), encoding='utf-8').read()
NEXT = sections(NEXT_TXT)

# ---------------------------------------------------------------- counts

COUNTS = {(r['example'], r['build']): r for r in tsv('counter', 'all-counts.tsv')}
EXAMPLES = sorted({e for e, _ in COUNTS}, key=lambda e: (CATS.index(cat_of(e)) if cat_of(e) in CATS else 99, e))
for e in EXAMPLES:
    if cat_of(e) not in CATS: note(f'{e}: category not in the eight')
COMMON = [e for e in EXAMPLES if all(COUNTS.get((e, b), {}).get('status') == 'ok' for b in BUILDS)]
NA_EX = sorted({e for e in EXAMPLES if e not in COMMON})


def cval(e, b, k):
    r = COUNTS.get((e, b))
    return int(r[k]) if r and r['status'] == 'ok' else None


TOT = {b: {k: sum(cval(e, b, k) for e in COMMON) for k in
           ('copies', 'copied_bytes', 'allocs', 'alloc_bytes', 'len1_numeric_allocs')} for b in BUILDS}
for b in BUILDS:  # geomean ratio to bc.opt, smoothed as counter/analyze.py
    for k, s in (('copies', 1), ('copied_bytes', 1024), ('allocs', 1), ('alloc_bytes', 1)):
        TOT[b]['g_' + k] = gmean((cval(e, b, k) + s) / (cval(e, 'bcopt', k) + s) for e in COMMON)

REPORT = rd('counter', 'report.txt')
# cross-check the totals of report.txt
for m in re.finditer(r'^(\w+) \| (\d+) \| ([\d.]+) \| (\d+) \| (\d+) \| (\d+) \| ([\d.]+) \|', REPORT, re.M):
    b = m[1]
    if b in TOT:
        check(int(m[2]) == TOT[b]['copies'] and int(m[4]) == TOT[b]['allocs'] and int(m[6]) == TOT[b]['len1_numeric_allocs']
              and abs(float(m[7]) - TOT[b]['g_copies']) < 0.0015,
              f'report.txt totals of {b} differ from all-counts.tsv')


def parse_report():
    """{section title: {label: {count, mb, share, examples, causes:[{cause, n, kb, top:[(ex, fn, shape, n)]}]}}}."""
    out, cur, cls = {}, None, None
    for l in REPORT.splitlines():
        if l.startswith('# '): cur = out.setdefault(l[2:].strip(), {}); cls = None
        elif l.startswith('## ') and cur is not None:
            m = re.match(r'## (.+?): (\d+) copies \(([\d.]+) %\), ([\d.]+) MB; examples: ?(.*)', l)
            if not m: cls = None; continue
            exs = [(x.rsplit(' ', 1)[0], int(x.rsplit(' ', 1)[1])) for x in m[5].split(', ') if x.strip()]
            cls = cur[m[1]] = {'count': int(m[2]), 'share': float(m[3]), 'mb': float(m[4]), 'examples': exs, 'causes': []}
        elif l.startswith('- ') and cls is not None:
            m = re.match(r'- (.+): (\d+) copies, (\d+) KB; top: (.*)', l)
            if not m: continue
            top = []
            for t in m[4].split('; '):
                mm = re.match(r'(\S+?)/(\S+) (\S+\[[^\]]*\]) (\d+)$', t.strip())
                if mm: top.append((mm[1], mm[2].removeprefix('v:'), mm[3], int(mm[4])))
            cls['causes'].append({'cause': m[1], 'n': int(m[2]), 'kb': int(m[3]), 'top': top})
    return out


REP = parse_report()


def rclass(section, prefix):
    s = REP.get(section, {})
    k = next((k for k in s if k.startswith(prefix)), None)
    if k is None: sys.exit(f'gen.py: report.txt: no class {prefix!r} in section {section!r}')
    return k, s[k]


CLS = {}
CLS['a'] = rclass('bc.opt vs tip', '(a)')
CLS['b'] = rclass('ce0 vs ce2', '(b)')
CLS['b2'] = rclass('ce0 vs ce2', "(b')")
CLS['c'] = rclass('bc.opt vs tip', '(c)')
CLS['d'] = rclass('bc.opt vs tip', '(d)')
CLS['l01'] = rclass('ce0 vs ce1', 'ce0 only')
CLS['l10'] = rclass('ce0 vs ce1', 'ce1 only')
check(CLS['a'][1]['count'] + CLS['d'][1]['count'] == TOT['bcopt']['copies'], '(a)+(d) is not the bc.opt copy total')
check(CLS['c'][1]['count'] + CLS['d'][1]['count'] == TOT['tip']['copies'], '(c)+(d) is not the TIP copy total')
check(CLS['b'][1]['count'] - CLS['b2'][1]['count'] == TOT['ce0']['copies'] - TOT['ce2']['copies'],
      '(b)−(b′) is not CE0−CE2 copies')
for k, (lab, c) in CLS.items():
    check(sum(x['n'] for x in c['causes']) <= c['count'], f'report.txt class {lab}: causes sum to more than the class count')

SITE_CODE = {(r['example'], r['function']): r['code'] for r in tsv('site-code.tsv')}

# ---------------------------------------------------------------- timing


def read_csv(f):
    return {r['removed']: (num(r['time']), r.get('same.as') if r.get('same.as') not in (None, '', 'NA') else None)
            for r in csv.DictReader(open(f, encoding='utf-8'))}


def load_timing():
    runs = []
    for rid, build in RUNS:
        d = os.path.join(D, 'timing', rid)
        if not os.path.exists(os.path.join(d, 'DONE')): continue
        meta = json.load(open(os.path.join(d, 'meta.json'))) if os.path.exists(os.path.join(d, 'meta.json')) else {}
        data = {}
        for f in sorted(glob.glob(os.path.join(d, 'csv', 'bench_*.csv'))):
            data[os.path.basename(f)[:-4]] = read_csv(f)
        runs.append({'id': rid, 'build': build, 'meta': meta, 'data': data})
    if not runs: return None
    exs = sorted({e for r in runs for e in r['data']})
    med = {}
    for e in exs:
        for g in GNUR:
            xs = [t for r in runs if (t := r['data'].get(e, {}).get(g, (None,))[0])]
            if len(xs) > 1: med[e, g] = statistics.median(xs)
    for r in runs:
        r['load'] = gmean(t / med[e, g] for e in r['data'] for g in GNUR
                          if (e, g) in med and (t := r['data'][e].get(g, (None,))[0])) or 1.0
        r['cell'], r['spread'] = {}, {}
        for e, rows in r['data'].items():
            a, b = rows.get(BASE, (None,))[0], rows.get(RERUN, (None,))[0]
            xs = [x for x in (a, b) if x]
            if xs: r['cell'][e] = min(xs) / r['load']
            if a and b: r['spread'][e] = max(a / b, b / a)
    bcopt = {e: statistics.median(xs) for e in exs
             if (xs := [t for r in runs if (t := r['data'].get(e, {}).get('bc.opt', (None,))[0])])}
    bt, bspread, rounds = {}, {}, {}
    for B in FIR:
        rs = [r for r in runs if r['build'] == B]
        rounds[B] = [r['id'] for r in rs]
        bt[B] = {e: gmean(r['cell'].get(e) for r in rs) for e in exs if any(r['cell'].get(e) for r in rs)}
        # noise of one example in one build: the largest spread of its runs (rerun/none, and round 2/round 1)
        sp = {}
        for e in bt[B]:
            xs = [r['spread'][e] for r in rs if e in r['spread']]
            cs = [r['cell'][e] for r in rs if e in r['cell']]
            if len(cs) == 2: xs.append(max(cs[0] / cs[1], cs[1] / cs[0]))
            sp[e] = max(xs) if xs else None
        bspread[B] = sp
    return {'runs': runs, 'exs': exs, 'bcopt': bcopt, 'bt': bt, 'bspread': bspread, 'rounds': rounds,
            'single': len(runs) < 2}


TM = load_timing()
NDONE = len(TM['runs']) if TM else 0
DONE_IDS = [r['id'] for r in TM['runs']] if TM else []


def pending(what='Pending'):
    done = ', '.join(DONE_IDS) if DONE_IDS else 'none'
    return f'<p class="pending"><strong>{what}.</strong> Timing runs done: {NDONE} of {len(RUNS)} ({esc(done)}).</p>'


def ratio_bc(B, e):
    if not TM or B not in TM['bt'] or e not in TM['bt'][B] or e not in TM['bcopt']: return None
    return TM['bt'][B][e] / TM['bcopt'][e]


def build_cmp(X, Y, members=None):
    """Time of build X / time of build Y per example; geomean, n, floor, significant extremes."""
    if not TM or not TM['rounds'][X] or not TM['rounds'][Y]: return None
    rs = {}
    for e in (members or TM['exs']):
        x, y = TM['bt'][X].get(e), TM['bt'][Y].get(e)
        if x and y: rs[e] = x / y
    if not rs: return None
    fl = {e: max(filter(None, [TM['bspread'][X].get(e), TM['bspread'][Y].get(e)]), default=None) for e in rs}
    floor = gmean(f for f in fl.values() if f)
    sig = {e: r for e, r in rs.items() if fl[e] and abs(math.log(r)) > math.log(fl[e])}
    return {'gm': gmean(rs.values()), 'n': len(rs), 'floor': floor, 'rs': rs, 'sig': sig,
            'rounds': len(TM['rounds'][X]) + len(TM['rounds'][Y])}


def variant_cmp(rid, label):
    """Time with the change (<none>) / time without it (the variant row) in run `rid`."""
    r = next((r for r in TM['runs'] if r['id'] == rid), None) if TM else None
    if not r: return None
    rs, same, failed, fl = {}, 0, [], {}
    for e, rows in r['data'].items():
        base, (t, sa) = rows.get(BASE, (None,))[0], rows.get(label, (None, None))
        if label not in rows: continue
        if not base or not t: failed.append(e); continue
        rs[e] = base / t
        if sa == BASE: same += 1
        fl[e] = r['spread'].get(e)
    if not rs: return {'gm': None, 'n': 0, 'failed': failed}
    changed = {e: x for e, x in rs.items() if r['data'][e][label][1] != BASE}
    floor = gmean(f for f in fl.values() if f)
    sig = {e: x for e, x in changed.items() if fl.get(e) and abs(math.log(x)) > math.log(fl[e])}
    return {'gm': gmean(rs.values()), 'n': len(rs), 'same': same, 'changed': changed, 'gm_changed': gmean(changed.values()),
            'floor': floor, 'sig': sig, 'failed': failed, 'rs': rs}


def tint(r, floor):
    if r is None or not floor: return 'nz'
    return 'gd' if r < 1 / floor else 'bd' if r > floor else 'nz'


def rcell(r, floor, d=3, tip=''):
    t = f' title="{esc(tip)}"' if tip else ''
    return f'<td class="n {tint(r, floor)}"{t}>{fr(r, d)}</td>'


def extremes(sig, k=3):
    if not sig: return 'none outside its noise band'
    lo = sorted(sig.items(), key=lambda x: x[1])[:k]
    hi = sorted(sig.items(), key=lambda x: -x[1])[:k]
    f = lambda xs: ', '.join(f'<code>{esc(short(e))}</code> {r:.3f}' for e, r in xs)
    parts = []
    if lo and lo[0][1] < 1: parts.append('faster: ' + f([x for x in lo if x[1] < 1]))
    if hi and hi[0][1] > 1: parts.append('slower: ' + f([x for x in hi if x[1] > 1]))
    return '; '.join(parts)


# ---------------------------------------------------------------- charts

def bar_chart(title, unit, vals, fmt):
    """Horizontal bars, one per build, from 0, one scale."""
    W, L, R, H, G = 340, 52, 64, 18, 8
    mx = max(v for _, v in vals) or 1
    h = len(vals) * (H + G) + 26
    rows = []
    for i, (lab, v) in enumerate(vals):
        y = 22 + i * (H + G)
        w = max(1.5, (W - L - R) * v / mx)
        rows.append(f'<g><title>{esc(lab)}: {esc(fmt(v))} {esc(unit)}</title>'
                    f'<text class="lab" x="{L - 6}" y="{y + 13}" text-anchor="end">{esc(lab)}</text>'
                    f'<rect class="bar{" ref" if lab == "bc.opt" else ""}" x="{L}" y="{y}" width="{w:.1f}" height="{H}" rx="3"></rect>'
                    f'<text class="val" x="{L + w + 5:.1f}" y="{y + 13}">{esc(fmt(v))}</text></g>')
    return (f'<figure class="chart"><svg viewBox="0 0 {W} {h}" role="img" aria-label="{esc(title)}">'
            f'<text class="ttl" x="0" y="12">{esc(title)} ({esc(unit)})</text>'
            f'<line class="axis" x1="{L}" y1="18" x2="{L}" y2="{h - 4}"></line>{"".join(rows)}</svg></figure>')


def dot_plot(rows, builds):
    """rows: [(label, {build: ratio})]; log x axis; a reference line at 1."""
    vals = [v for _, d in rows for v in d.values() if v]
    if not vals: return ''
    lo, hi = min(min(vals), 0.9), max(max(vals), 1.1)
    lo, hi = math.log(lo) - 0.05, math.log(hi) + 0.05
    W, L, R, SUB = 640, 92, 16, 11
    RH = SUB * len(builds) + 10
    X = lambda v: L + (W - L - R) * (math.log(v) - lo) / (hi - lo)
    top = 40
    h = top + len(rows) * RH + 30
    out = [f'<svg viewBox="0 0 {W} {h}" role="img" aria-label="Time relative to bc.opt per category and build">']
    lx = L
    for i, B in enumerate(builds):
        out.append(f'<circle class="s{i + 1}" cx="{lx + 6}" cy="12" r="5"></circle>'
                   f'<text class="lab" x="{lx + 15}" y="16">{esc(B)}</text>')
        lx += 70
    ticks = [t for t in (0.25, 0.33, 0.5, 0.67, 0.8, 1, 1.25, 1.5, 2, 3, 4) if lo <= math.log(t) <= hi]
    for t in ticks:
        x = X(t)
        out.append(f'<line class="{"ref1" if t == 1 else "grid"}" x1="{x:.1f}" y1="{top - 8}" x2="{x:.1f}" y2="{h - 24}"></line>'
                   f'<text class="tick" x="{x:.1f}" y="{h - 8}" text-anchor="middle">{t:g}</text>')
    for j, (lab, d) in enumerate(rows):
        y = top + j * RH + RH / 2
        out.append(f'<text class="lab{" strong" if j == 0 else ""}" x="{L - 8}" y="{y + 4:.1f}" text-anchor="end">{esc(lab)}</text>')
        for i, B in enumerate(builds):
            v = d.get(B)
            if not v: continue
            dy = (i - (len(builds) - 1) / 2) * SUB
            out.append(f'<circle class="s{i + 1}" cx="{X(v):.1f}" cy="{y + dy:.1f}" r="5"><title>{esc(lab)}, {esc(B)}: {v:.3f}</title></circle>')
    out.append('</svg>')
    return '<figure class="chart wide">' + ''.join(out) + \
        '<figcaption>Geometric mean of fir2c.opt time / bc.opt time; below 1 is faster than GNU-R. Log scale.</figcaption></figure>'


# ---------------------------------------------------------------- page parts

def h2(n, t, id_): return f'<h2 id="{id_}"><span class="qn">{n}</span> {esc(t)}</h2>'


TEXT_COLS = ('Top sites', 'R code', 'Largest', 'Callees', 'Main examples', 'Change', 'Comparison', 'Commit', 'Variant',
             'Build', 'State', 'C changed', 'Cause', 'Site class')


def kv_table(head, rows, cls=''):
    h = ''.join(f'<th scope="col"{" class=\"n\"" if i and not x.startswith(TEXT_COLS) else ""}>{x}</th>'
                for i, x in enumerate(head))
    return f'<div class="tw"><table class="{cls}"><thead><tr>{h}</tr></thead><tbody>{"".join(rows)}</tbody></table></div>'


def class_block(key, title, desc):
    lab, c = CLS[key]
    rows = []
    for x in c['causes']:
        tops = '; '.join(f'<code>{esc(e)}</code> <code>{esc(fn)}</code> {esc(sh)} {fi(n)}' for e, fn, sh, n in x['top'])
        code = next(((e, fn, SITE_CODE[e, fn]) for e, fn, _, _ in x['top'] if (e, fn) in SITE_CODE), None)
        codecell = (f'<span class="small muted">{esc(code[0])}, {esc(code[1])}:</span><br><code class="r">{esc(code[2])}</code>'
                    if code else '<span class="muted">base R function or no line found</span>')
        rows.append(f'<tr><td>{esc(x["cause"])}</td><td class="n">{fi(x["n"])}</td><td class="n">{fi(x["kb"])}</td>'
                    f'<td class="sites">{tops}</td><td>{codecell}</td></tr>')
    rest = c['count'] - sum(x['n'] for x in c['causes'])
    if rows and rest:
        rows.append(f'<tr><td class="muted">Smaller causes (not listed in report.txt)</td><td class="n">{fi(rest)}</td>'
                    '<td class="n">–</td><td></td><td></td></tr>')
    tbl = kv_table(['Cause', 'Copies', 'KB', 'Top sites (example, R function, type[length], copies)', 'R code of a top site'],
                   rows, 'cls') if rows else ''
    exs = ', '.join(f'<code>{esc(e)}</code> {fi(n)}' for e, n in c['examples'][:6])
    return (f'<h4>{title}</h4><p class="stat"><span>{fi(c["count"])} {"copy" if c["count"] == 1 else "copies"}</span><span>{c["mb"]:.2f} MB</span>'
            f'<span>{c["share"]:.1f} % of the copies of the pair</span></p><p>{desc}</p>'
            + (f'<p class="muted small">Examples with most: {exs}.</p>' if exs else '') + tbl)


def section1():
    out = [h2(1, 'Copies: GNU-R vs FIŘ, old vs new copy elision', 'q1')]
    out.append('<h3>Builds</h3>' + md(FACTS[sec(FACTS, 'Builds')[0]]))
    k, body = sec(FACTS, 'Counting method')
    items = bullets(body)
    out.append('<h3>Method</h3><p>A counting clone of the vendored R counts vector allocations and vector copies, with bytes, '
               'in one benchmark call after the warmup, minus an empty call. FIŘ counts come from the timed modules. '
               f'Totals use the {len(COMMON)} examples with a count in every build'
               + (f' (no count: {", ".join(f"<code>{esc(short(e))}</code>" for e in NA_EX)})' if NA_EX else '') + '.</p>'
               f'<details><summary>Counting method in detail</summary><ul>{"".join(f"<li>{mdi(x)}</li>" for x in items)}</ul>'
               '<p>The geometric mean ratios use the smoothing of <code>analyze.py</code>: copies +1, copied bytes +1024, '
               'allocations +1, allocated bytes +1, over the examples above. MB is 2<sup>20</sup> bytes.</p></details>')
    rows = []
    for b in BUILDS:
        t = TOT[b]
        rows.append(f'<tr><th scope="row">{BNAME[b]}</th><td class="n">{fi(t["copies"])}</td><td class="n">{t["copied_bytes"] / 2**20:.1f}</td>'
                    f'<td class="n">{fi(t["allocs"])}</td><td class="n">{t["alloc_bytes"] / 2**20:,.0f}</td><td class="n">{fi(t["len1_numeric_allocs"])}</td>'
                    + ''.join(f'<td class="n">{t["g_" + k]:.3f}</td>' for k in ('copies', 'copied_bytes', 'allocs', 'alloc_bytes')) + '</tr>')
    out.append('<h3>Totals per build</h3>' + kv_table(
        ['Build', 'Copies', 'Copied MB', 'Allocations', 'Allocated MB', 'Length-1 numeric allocations',
         'Geomean copies / bc.opt', 'Geomean copied bytes / bc.opt', 'Geomean allocations / bc.opt', 'Geomean allocated bytes / bc.opt'],
        rows, 'totals'))
    out.append('<div class="charts">' +
               bar_chart('Copies', 'thousands', [(BNAME[b], TOT[b]['copies'] / 1e3) for b in BUILDS], lambda v: f'{v:.0f}') +
               bar_chart('Copied data', 'MB', [(BNAME[b], TOT[b]['copied_bytes'] / 2**20) for b in BUILDS], lambda v: f'{v:.0f}') +
               '</div>')
    # classes
    e_item = next((x for x in items if x.startswith('Class (e)')), '')
    out.append('<h3>Copy classes</h3><p>The classes pair copies per example by R function, type and length bucket, then by type and '
               'length bucket. A removed and an added copy of the same shape cancel, so the “only” classes are lower bounds.</p>')
    out.append(class_block('a', '(a) GNU-R copies that FIŘ (TIP) does not make', 'Copies in <code>bc.opt</code> without a match in TIP.'))
    b2 = CLS['b2'][1]
    l01, l10 = CLS['l01'][1], CLS['l10'][1]
    out.append(class_block('b', '(b) Copies that the new copy elision removed (CE0 → CE2)',
                           f'CE2 adds {fi(b2["count"])} copies ({b2["mb"]:.2f} MB) that CE0 does not make. '
                           f'The register links (CE0 → CE1) remove {fi(l01["count"])} copies and add {fi(l10["count"])}: '
                           'all removed copies come from the uncounted builtin argument cells (CE1 → CE2).'))
    out.append(class_block('c', '(c) Copies that only FIŘ makes', 'Copies in TIP without a match in <code>bc.opt</code>.'))
    out.append(class_block('d', '(d) Copies that both make', 'Copies in <code>bc.opt</code> and TIP of the same shape.'))
    out.append(f'<h4>(e) Copies that neither makes</h4><p>A copy that a naive evaluation would make, but GNU-R and FIŘ both avoid '
               f'by an in-place write. {mdi(e_item)}</p>')
    # time
    out.append('<h3>Time relative to GNU-R</h3>')
    k, pb = sec(FACTS, 'Phase B')
    out.append(f'<details><summary>Timing method</summary><ul>{"".join(f"<li>{mdi(x)}</li>" for x in bullets(pb))}</ul>'
               '<p>On this page every time ratio is a time divided by another time: below 1 is faster. '
               'The noise band of one example is the largest spread of its runs: max(r, 1/r) with r = rerun / none, '
               'and round 2 / round 1 of a build with two rounds. A ratio inside the band is neutral. '
               'The noise floor of a mean is the geometric mean of these bands.</p></details>')
    out.append(runs_table())
    if not TM:
        out.append(pending())
    else:
        if TM['single']: out.append('<p class="pending">Preliminary: one run only, so the load factor is 1.</p>')
        have = [B for B in FIR if TM['rounds'][B]]
        rows, plot = [], []
        groups = [('All', TM['exs'])] + [(c, [e for e in TM['exs'] if cat_of(e) == c]) for c in CATS]
        for lab, mem in groups:
            d, cells = {}, []
            for B in FIR:
                xs = [r for e in mem if (r := ratio_bc(B, e))]
                d[B] = gmean(xs)
                fl = gmean(TM['bspread'][B].get(e) for e in mem if ratio_bc(B, e)) if B in have else None
                cells.append(rcell(d[B], fl, tip=f'{len(xs)} examples') if B in have else '<td class="n muted">Pending</td>')
            plot.append((lab, {B: v for B, v in d.items() if v}))
            rows.append(f'<tr><th scope="row">{esc(lab)}</th>{"".join(cells)}</tr>')
        out.append(kv_table(['Category'] + [f'{B} / bc.opt' for B in FIR], rows, 'ratios'))
        out.append(dot_plot(plot, [B for B in FIR if B in have]))
        rows = []
        for X, Y, what in (('CE1', 'CE0', 'register links'), ('CE2', 'CE1', 'uncounted builtin cells'),
                           ('TIP', 'CE2', 'other changes of the week'), ('CE2', 'CE0', 'both copy-elision changes')):
            c = build_cmp(X, Y)
            if not c:
                rows.append(f'<tr><th scope="row">{X} / {Y}</th><td>{what}</td><td class="n muted" colspan="4">Pending</td></tr>'); continue
            rows.append(f'<tr><th scope="row">{X} / {Y}</th><td>{what}</td>{rcell(c["gm"], c["floor"])}<td class="n">{fr(c["floor"])}</td>'
                        f'<td class="n">{c["n"]}</td><td>{extremes(c["sig"])}</td></tr>')
        out.append('<h3>Build against build</h3>' + kv_table(
            ['Ratio', 'Change', 'Geomean', 'Noise floor', 'Examples', 'Largest significant changes'], rows, 'ratios'))
    out.append(per_example_table())
    return ''.join(out)


def run_state(r):
    """'ok', or why the run is not complete: a nonzero exit of Maven or fewer CSVs than examples."""
    m, n = r['meta'], len(r['data'])
    if m.get('exit', 0) != 0: return f'failed (exit {m["exit"]})'
    if n < len(EXAMPLES): return f'incomplete ({n} of {len(EXAMPLES)} CSVs)'
    return 'ok'


def runs_table():
    if not TM: return ''
    rows = []
    for r in TM['runs']:
        m = r['meta']
        dur = f'{(m["end"] - m["start"]) / 60:.0f}' if 'end' in m and 'start' in m else '–'
        state = run_state(r)
        bc = gmean(t for e in r['data'] if (t := r['data'][e].get('bc.opt', (None,))[0]))
        rows.append(f'<tr{" class=\"warn\"" if state != "ok" else ""}><th scope="row">{esc(r["id"])}</th><td>{esc(state)}</td><td>{esc(r["build"])}</td>'
                    f'<td><code>{esc(m.get("commit", "–"))}</code></td><td><code>{esc(m.get("opts", "–"))}</code></td>'
                    f'<td class="n">{esc(m.get("exit", "–"))}</td><td class="n">{esc(m.get("csvs", len(r["data"])))}</td>'
                    f'<td class="n">{dur}</td><td class="n">{esc(m.get("load_start", "–"))} / {esc(m.get("load_end", "–"))}</td>'
                    f'<td class="n">{r["load"]:.3f}</td><td class="n">{f"{bc * 1e3:.2f}" if bc else "–"}</td></tr>')
    missing = [rid for rid, _ in RUNS if rid not in DONE_IDS]
    return (kv_table(['Run', 'State', 'Build', 'Commit', 'Variant', 'Exit', 'CSVs', 'Minutes', 'Load start / end', 'Load factor',
                      'Geomean bc.opt (ms)'], rows, 'runs')
            + (f'<p class="muted small">Runs not done: {esc(", ".join(missing))}.</p>' if missing else ''))


def per_example_table():
    head1 = ('<tr><th scope="col" rowspan="2" class="stick">Example</th><th scope="colgroup" colspan="6">Copies</th>'
             '<th scope="colgroup" colspan="6">Copied KB</th><th scope="colgroup" colspan="6">Allocations</th>'
             '<th scope="colgroup" colspan="5">Time / bc.opt</th></tr>')
    head2 = '<tr>' + ''.join(f'<th scope="col" class="n">{BNAME[b]}</th>' for _ in range(3) for b in BUILDS) + \
        ''.join(f'<th scope="col" class="n">{B}</th>' for B in FIR) + '</tr>'
    bodies = []
    for c in CATS:
        mem = [e for e in EXAMPLES if cat_of(e) == c]
        if not mem: continue

        def cnt(e, b, k):
            v = cval(e, b, k)
            return '<td class="n muted">NA</td>' if v is None else f'<td class="n">{fi(v / 1024 if k == "copied_bytes" else v)}</td>'

        def tm(e, B):
            r = ratio_bc(B, e)
            if r is None: return '<td class="n muted">' + ('–' if TM and TM['rounds'][B] else 'Pending') + '</td>'
            return rcell(r, TM['bspread'][B].get(e), 2)

        rows = ''.join(f'<tr class="ex" data-cat="{c}"><th scope="row" class="stick"><code>{esc(short(e).removeprefix(c + "_"))}</code></th>'
                       + ''.join(cnt(e, b, k) for k in ('copies', 'copied_bytes', 'allocs') for b in BUILDS)
                       + ''.join(tm(e, B) for B in FIR) + '</tr>' for e in mem)
        ok = [e for e in mem if e in COMMON]
        sums = ''.join(f'<td class="n">{fi(sum(cval(e, b, k) for e in ok) / (1024 if k == "copied_bytes" else 1))}</td>'
                       for k in ('copies', 'copied_bytes', 'allocs') for b in BUILDS)
        tms = ''
        for B in FIR:
            xs = [r for e in mem if (r := ratio_bc(B, e))]
            g = gmean(xs)
            tms += (rcell(g, gmean(TM['bspread'][B].get(e) for e in mem if ratio_bc(B, e)), 2) if g
                    else '<td class="n muted">' + ('–' if TM and TM['rounds'][B] else 'Pending') + '</td>')
        bodies.append(f'<tbody><tr class="cat"><th scope="row" class="stick"><button type="button" class="tog" aria-expanded="true" '
                      f'data-cat="{c}">{c} <span class="muted">({len(mem)})</span></button></th>{sums}{tms}</tr>{rows}</tbody>')
    return ('<h3>Per example</h3><p>Category rows show sums of the counts (over the examples with a count in every build) '
            'and the geometric mean of the time ratios. Select a category to show or hide its examples.</p>'
            f'<div class="tw"><table class="perex"><thead>{head1}{head2}</thead>{"".join(bodies)}</table></div>')


def section2():
    out = [h2(2, 'Speed changes of this week', 'q2')]
    k, body = sec(FACTS, 'Changes of this week')
    out.append(md(body))
    out.append('<h3>Without and with each speed change</h3><p>Each ratio is the time with the change divided by the time without it: '
               'below 1, the change makes the code faster. GNU-R times come from the same runs (load factors in section 1).</p>')
    rows = []
    for lab, X, Y in (('Uncounted builtin argument cells', 'CE2', 'CE1'),):
        c = build_cmp(X, Y)
        if c:
            rows.append(f'<tr><th scope="row">{lab}</th><td>{X} / {Y}, {c["rounds"]} runs</td>{rcell(c["gm"], c["floor"])}'
                        f'<td class="n">{fr(c["floor"])}</td><td class="n">{c["n"]}</td><td class="n">–</td><td>{extremes(c["sig"])}</td></tr>')
        else:
            rows.append(f'<tr><th scope="row">{lab}</th><td>{X} / {Y}</td><td class="n muted" colspan="5">Pending</td></tr>')
    for lab, rid, var in (('<code>bitw*</code> inlining', 'r1-TIP', 'inlineInternalWrapper'),
                          ('GVN (experiment)', 'r1-GVN', 'globalValueNumbering')):
        v = variant_cmp(rid, var)
        desc = f'<code>&lt;none&gt;</code> / <code>{var}</code> in <code>{rid}</code>'
        if not v or v['gm'] is None:
            rows.append(f'<tr><th scope="row">{lab}</th><td>{desc}</td><td class="n muted" colspan="5">Pending</td></tr>'); continue
        rows.append(f'<tr><th scope="row">{lab}</th><td>{desc}</td>{rcell(v["gm"], v["floor"])}<td class="n">{fr(v["floor"])}</td>'
                    f'<td class="n">{v["n"]}</td><td class="n">{len(v["changed"])}: {fr(v["gm_changed"])}'
                    + (f'; failed {len(v["failed"])}' if v['failed'] else '') + f'</td><td>{extremes(v["sig"])}</td></tr>')
    out.append(kv_table(['Change', 'Comparison', 'Geomean', 'Noise floor', 'Examples', 'Examples with changed C (geomean)',
                         'Largest significant changes'], rows, 'ratios'))
    if not TM: out.append(pending())
    return ''.join(out)


def gvn_data():
    rem = list(csv.reader((l for l in rd('gvn', 'gvn-removals.tsv').splitlines() if l.strip()), delimiter='\t'))
    by = {}
    for r in rem: by[r[6].strip('`')] = by.get(r[6].strip('`'), 0) + 1
    per = tsv('gvn', 'gvn-per-example.tsv')
    hg = dict(l.split('\t') for l in rd('gvn', 'gvn-hashes.tsv').splitlines() if l.strip())
    ht = dict(l.split('\t') for l in rd('warmup', 'TIP-hashes.tsv').splitlines() if l.strip())
    changed = [e for e in hg if hg[e] != ht.get(e)]
    check(sum(int(p['removed']) for p in per) == len(rem), 'gvn-per-example.tsv and gvn-removals.tsv differ in the removal count')
    return rem, by, per, changed


def section3():
    out = [h2(3, 'GVN', 'q3')]
    k, body = sec(FACTS, 'GVN facts')
    items = bullets(body)
    pick = lambda p: next((mdi(re.sub(r'^(Tests|Open question|Experiment): ', '', x)) for x in items if x.startswith(p)), '')
    rem, by, per, changed = gvn_data()
    out.append(f'<p class="lead">{pick("As merged")}</p>')
    out.append(f'<h3>The experiment</h3><p>{pick("Experiment")}</p>')
    rows = [f'<tr><td><code>{esc(c)}</code></td><td class="n">{fi(n)}</td></tr>' for c, n in sorted(by.items(), key=lambda x: -x[1])]
    rows.append(f'<tr class="sum"><td>All</td><td class="n">{fi(len(rem))}</td></tr>')
    out.append(f'<h4>Removed statements by callee</h4><p>GVN removes {fi(len(rem))} statements in {len(per)} examples '
               f'(timed <code>default</code> pipeline). {pick("It removes").split(". ", 1)[1] if ". " in pick("It removes") else ""}</p>'
               + kv_table(['Callee', 'Removed'], rows, 'narrow'))
    prow = ''.join(f'<tr><td><code>{esc(short(p["example"]))}</code></td><td class="n">{p["removed"]}</td><td>{esc(p["callees"])}</td>'
                   f'<td>{"yes" if p["example"] in changed else ""}</td></tr>' for p in per)
    out.append(f'<details><summary>Removals per example ({len(per)})</summary>'
               + kv_table(['Example', 'Removed', 'Callees', 'C changed'], [prow], 'narrow') + '</details>')
    out.append(f'<h4>Changed C</h4><p>The C of {len(changed)} examples differs from TIP (hash of the C of the timed module). '
               f'{pick("The C differs").split(". ", 1)[1] if ". " in pick("The C differs") else ""}</p>'
               f'<p class="exlist">{", ".join(f"<code>{esc(short(e))}</code>" for e in changed)}</p>')
    diffs = []
    for e in COMMON:
        a, b = cval(e, 'tip', 'copies'), cval(e, 'gvn', 'copies')
        ab, bb = cval(e, 'tip', 'copied_bytes'), cval(e, 'gvn', 'copied_bytes')
        aa, ba = cval(e, 'tip', 'allocs'), cval(e, 'gvn', 'allocs')
        if (a, ab, aa) != (b, bb, ba): diffs.append((e, a, b, ab, bb, aa, ba))
    rows = [f'<tr><td><code>{esc(short(e))}</code></td><td class="n">{fi(a)} → {fi(b)}</td><td class="n">{ab / 2**20:.1f} → {bb / 2**20:.1f}</td>'
            f'<td class="n">{fi(aa)} → {fi(ba)}</td></tr>' for e, a, b, ab, bb, aa, ba in diffs]
    out.append('<h4>Copies and allocations</h4><p>Examples whose counts differ between TIP and GVN '
               f'(total copies {fi(TOT["tip"]["copies"])} → {fi(TOT["gvn"]["copies"])}, '
               f'copied {TOT["tip"]["copied_bytes"] / 2**20:.1f} → {TOT["gvn"]["copied_bytes"] / 2**20:.1f} MB).</p>'
               + kv_table(['Example', 'Copies', 'Copied MB', 'Allocations'], rows, 'narrow'))
    v = variant_cmp('r1-GVN', 'globalValueNumbering')
    out.append('<h4>Time</h4>')
    if not v or v['gm'] is None:
        out.append(pending('Pending: run r1-GVN'))
    else:
        cg = [x for e, x in v['changed'].items() if 'bench_' + short(e) in changed or e in changed]
        out.append(f'<p>Time with GVN / time without it (<code>&lt;none&gt;</code> / <code>globalValueNumbering</code> in <code>r1-GVN</code>): '
                   f'geomean {fr(v["gm"])} over {v["n"]} examples (noise floor {fr(v["floor"])}). '
                   f'{len(v["changed"])} examples have changed C, geomean {fr(v["gm_changed"])}. '
                   f'Largest significant changes: {extremes(v["sig"])}.'
                   + (f' Failed: {len(v["failed"])}.' if v['failed'] else '') + '</p>')
        if len(v['changed']) != len(changed):
            note(f'r1-GVN: {len(v["changed"])} examples with changed C in the CSVs, {len(changed)} by the C hashes')
    out.append(f'<h4>Tests</h4><p>{pick("Tests")}</p><p>{pick("With `DEBUG=true`")}</p>')
    out.append(f'<h4>Open question</h4><p>{pick("Open question")}</p>')
    return ''.join(out)


def tsv_rows(path, cols, n=None, fmt=None):
    rs = tsv(*path)
    return rs[:n] if n else rs


def heading_num(prefix):
    """The first number with unit of the next.md section heading that starts with `prefix`."""
    k = next((k for k in NEXT if k.startswith(prefix)), '')
    return m[0] if (m := re.search(r'[\d.]+ M', k)) else '?'


def blocker_table(rs, total, label, breadth):
    rows = []
    for r in rs:
        dyn = float(r['dyn.share'])
        br = breadth.get(r['blocker'])
        rows.append(f'<tr><td>{mdi(r["blocker"])}</td><td class="n">{fi(int(r["static.sites"]))}</td>'
                    f'<td class="n">{fi(int(r["sites.in.called.versions"]))}</td><td class="n">{fk(dyn)}</td>'
                    f'<td class="n">{float(r["dyn.pct"]):.1f}</td><td class="n">{br[0] if br else ""}</td>'
                    f'<td class="small">{esc(r["top.examples"])}</td></tr>')
    return kv_table(['Blocker', 'Static sites', 'Sites in called versions', f'{label} per call', '%', 'Largest share in',
                     'Main examples'], rows, 'block')


def section4():
    out = [h2(4, 'Next candidates', 'q4')]
    intro = NEXT_TXT.split('\n## ', 1)[0].split('\n', 1)[1]
    out.append(md('\n'.join(l for l in intro.splitlines() if not l.startswith('Sources:'))))
    breadth = {}
    kind = None
    for l in rd('next', 'breadth.tsv').splitlines():
        if l.startswith('## prom'): kind = 'prom'
        elif l.startswith('## box'): kind = 'box'
        elif l.strip():
            f = l.split('\t')
            # the agent's percentages are older; use TIP / bc.opt of the timed runs where there is one
            ex = re.sub(r'(\S+) ([\d.]+)', lambda m: f'{m[1]} {100 * r:.0f}' if (r := ratio_bc('TIP', 'bench_' + m[1])) else m[0], f[2])
            breadth.setdefault(kind, {})[f[0]] = (int(f[1]), ex)
    prom = tsv('next', 'ranked-prom.tsv')
    pt = sum(float(r['dyn.share']) for r in prom)
    pc = tsv('next', 'promise-counts.tsv')
    pcopy = sum(num(r['created.copy']) or 0 for r in pc)
    popt = sum(num(r['created.opt']) or 0 for r in pc)
    pna = sum(1 for r in pc if r['created.opt'] in ('NA', ''))
    check(abs(popt - pt) / pt < 0.01, f'promises per call: ranked-prom.tsv sums to {fk(pt)}, promise-counts.tsv created.opt to {fk(popt)}; '
          f'next.md says {heading_num("Promises")}')
    out.append(f'<h3>Promises</h3><p>The weighted sites of <code>ranked-prom.tsv</code> sum to {fk(pt)} compiled promises per benchmark call. '
               f'<code>PromiseBenchmark</code> counts {fk(popt)} created with FIŘ optimizations and {fk(pcopy)} without them '
               f'({len(pc) - pna} of {len(pc)} examples with a count).</p>' + blocker_table(prom, pt, 'Promises', breadth.get('prom', {})))
    m = re.search(r'\n(`binarytrees_naive`.*?)\n', NEXT_TXT)
    if m: out.append(f'<p>{mdi(m[1])}</p>')
    box = tsv('next', 'ranked-box.tsv')
    bt = sum(float(r['dyn.share']) for r in box)
    net = TOT['tip']['len1_numeric_allocs'] - TOT['bcopt']['len1_numeric_allocs']
    pos = sum(max(0, cval(e, 'tip', 'len1_numeric_allocs') - cval(e, 'bcopt', 'len1_numeric_allocs')) for e in COMMON)
    check(abs(bt - net) / net < 0.01, f'excess length-1 allocations: ranked-box.tsv sums to {fk(bt)}, all-counts.tsv TIP − bc.opt '
          f'is {fk(net)} net ({fk(pos)} over the examples with an excess); next.md says {heading_num("Boxing")}')
    out.append(f'<h3>Boxing</h3><p>The weighted sites of <code>ranked-box.tsv</code> sum to {fk(bt)} excess length-1 numeric allocations '
               f'per call. The counter gives TIP − bc.opt = {fk(net)} net over {len(COMMON)} examples, or {fk(pos)} summed over the '
               'examples with an excess. The shares below are of the model sum.</p>'
               + blocker_table(box[:12], bt, 'Boxes', breadth.get('box', {}))
               + f'<details><summary>All {len(box)} boxing blockers</summary>'
               + blocker_table(box[12:], bt, 'Boxes', breadth.get('box', {})) + '</details>')
    bl = ''.join(f'<li><strong>{mdi(k)}</strong>: {v[0]} examples: {esc(v[1])}</li>' for kd in ('prom', 'box')
                 for k, v in breadth.get(kd, {}).items())
    crit = re.search(r'largest share \(([^)]*)\)', rd('next', 'breadth.tsv'))
    crit = crit[1].replace('>=', '≥ ').replace('%', ' %').replace(', ', ',').replace(',', ', ') if crit else ''
    out.append(f'<details><summary>Examples where each blocker has the largest share ({esc(crit)}), '
               'with the time of TIP as % of bc.opt (timed runs of this page)</summary><ul class="small">' + bl + '</ul></details>')
    k, body = next(((k, v) for k, v in NEXT.items() if k.startswith('Boxing')), (None, ''))
    ts = body.split('Top sites:', 1)
    if len(ts) == 2:
        top, rest = ts[1].split('\n\nCounts of', 1) if '\n\nCounts of' in ts[1] else (ts[1], '')
        out.append('<h3>Top sites</h3>' + md(top))
        if rest:
            out.append(proposal_counts('Counts of' + rest))
    lab, c = CLS['c']
    rows = [f'<tr><td>{esc(x["cause"])}</td><td class="n">{fi(x["n"])}</td><td class="n">{fi(x["kb"])}</td></tr>' for x in c['causes']]
    k, body = sec(NEXT, 'Copies that only')
    fd = next((x for x in c['causes'] if x['cause'].startswith('FIR deep dup')), None)
    if fd and (m := re.search(r'unconditional `Fir_dup`: ([\d,]+) copies', body)):
        check(int(m[1].replace(',', '')) == fd['n'], f'unconditional `Fir_dup` copies: next.md gives {m[1]}, report.txt {fi(fd["n"])}')
    out.append(f'<h3>Copies that only FIŘ makes</h3><p>Class (c) of section 1: {fi(c["count"])} copies, {c["mb"]:.2f} MB.</p>'
               + kv_table(['Cause', 'Copies', 'KB'], rows, 'narrow') + md(body))
    k, body = sec(NEXT, 'Candidate improvements')
    out.append('<h3>Candidate improvements</h3>' + md(body))
    rp = os.path.join(HERE, 'recommendation.md')
    rec = md(open(rp, encoding='utf-8').read()) if os.path.exists(rp) else '<p class="pending"><strong>Pending.</strong></p>'
    out.append(f'<div class="rec" id="recommendation"><h3>Recommendation of the coordinator</h3>{rec}</div>')
    return ''.join(out)


def proposal_counts(par):
    txt = rd('next', 'propcounts.txt')
    pc = {m[2].strip(): int(m[1]) for m in re.finditer(r'^\s*(\d+)\s+(.+)$', txt, re.M)}
    tot = int(re.search(r'total (\d+)', txt)[1])
    mv = {k: int(v) for k, v in re.findall(r"'([^']+)': (\d+)", re.search(r'movable: \{(.*)\}', txt)[1])}
    rows = [('Static <code>prom</code> sites', tot), ('Dynamic call of a base or package closure', pc.get('dyn: base or package closure')),
            ('Dynamic call of a module closure or unknown', pc.get('dyn: module closure or unknown')),
            ('Static call with an <code>@!</code> parameter', pc.get('static: param @!')),
            ('Static call, forced before the callee’s first branch, not <code>@!</code>', pc.get('static: forced before first branch, not @!')),
            ('Forced after a branch, nested, or passed on', pc.get('static: forced after a branch, nested, passed on, or unknown')),
            ('<code>builtins.fir</code> closure or dispatch', (pc.get('builtin call') or 0) + (pc.get('dispatch call') or 0)),
            ('Movable <code>@!</code> sites', mv.get('@!')), ('Movable non-<code>@!</code> sites', mv.get('not @!, forced first'))]
    old = re.findall(r'(\d+)(?:\s[^;()\d]*)?\s\((\d+)\)', par)
    trs = []
    for i, (lab, v) in enumerate(rows):
        o = old[i] if i < len(old) else None
        if o: check(int(o[0]) == v, f'proposal counts: next.md gives {o[0]} for “{re.sub("<[^>]+>", "", lab)}”, propcounts.txt {v}')
        trs.append(f'<tr><td>{lab}</td><td class="n">{fi(v) if v is not None else "–"}</td><td class="n">{fi(int(o[1])) if o else "–"}</td></tr>')
    gate = par.split('The document', 1)
    scope = re.search(r'updated for `TIP` \(([^;]*);', par)
    return ('<h3>Counts of the unobserved-promises proposal</h3><p>Updated for TIP'
            + (f': {mdi(scope[1])}' if scope else '') + ' (<code>propcounts.txt</code>; the values of 2026-11-23 come from <code>next.md</code>).</p>'
            + kv_table(['Site class', 'TIP', '2026-11-23'], trs, 'narrow')
            + (f'<p>{mdi("The document" + gate[1].strip())}</p>' if len(gate) == 2 else ''))


def section5():
    k, body = sec(FACTS, 'Open items')
    out = [h2(5, 'Open items', 'q5'), md(body)]
    if NOTES:
        out.append('<h3>Data notes</h3><p>Checks of <code>gen.py</code> that found a difference between the inputs:</p><ul>'
                   + ''.join(f'<li>{mdi(n)}</li>' for n in NOTES) + '</ul>')
    return ''.join(out)


def summary():
    t, b = TOT['tip'], TOT['bcopt']
    lb, l2 = CLS['b'][1], CLS['c'][1]
    rem, by, per, changed = gvn_data()
    box = tsv('next', 'ranked-box.tsv')
    prom = tsv('next', 'ranked-prom.tsv')
    tline = ''
    if TM:
        g = gmean(r for e in TM['exs'] if (r := ratio_bc('TIP', e)))
        if g: tline = f' TIP time / bc.opt: geomean {g:.3f}.'
    s1 = (f'TIP makes {fi(t["copies"])} copies against {fi(b["copies"])} for bc.opt (geomean {t["g_copies"]:.2f}×); '
          f'{fi(l2["count"])} copies ({l2["mb"]:.1f} MB) only FIŘ makes. The new copy elision removed {fi(lb["count"])} copies '
          f'({lb["mb"]:.1f} MB) and {fk(TOT["ce1"]["allocs"] - TOT["ce2"]["allocs"])} allocations; the register links changed no count.' + tline)
    c21 = build_cmp('CE2', 'CE1')
    v = variant_cmp('r1-TIP', 'inlineInternalWrapper')
    c10, c20 = build_cmp('CE1', 'CE0'), build_cmp('CE2', 'CE0')

    def big(c, k=3):  # the k largest significant speed-ups
        return ', '.join(f'<code>{esc(short(x))}</code> {r:.2f}' for x, r in sorted(c['sig'].items(), key=lambda x: x[1])[:k] if r < 1)
    if c21 and c10 and c20 and v and v['gm']:
        s2 = (f'Two speed changes, both small in the mean. Builtin cells: CE2 / CE1 {c21["gm"]:.3f}, from three examples '
              f'({big(c21)}). <code>bitw*</code> inlining: only <code>awf_mandelbrot</code> changes, {v["gm_changed"]:.2f}. '
              f'The register links (a soundness fix) cost {c10["gm"]:.3f}; all copy elision together: CE2 / CE0 {c20["gm"]:.3f}.')
    else:
        s2 = 'Speed changes: Pending.'
    vg = variant_cmp('r1-GVN', 'globalValueNumbering')
    s3 = (f'GVN as merged is not registered and changes nothing. In the experiment it removes {fi(len(rem))} statements in {len(per)} examples, '
          f'changes the C of {len(changed)}, and removes {fi(t["copies"] - TOT["gvn"]["copies"])} copies; time '
          + (f'{vg["gm"]:.3f} (floor {vg["floor"]:.3f}).' if vg and vg['gm'] else 'Pending.'))
    s4 = (f'Largest boxing blocker: {mdi(box[0]["blocker"])} ({float(box[0]["dyn.pct"]):.1f} %). Largest promise blocker: '
          f'{mdi(prom[0]["blocker"])} ({float(prom[0]["dyn.pct"]):.1f} %). Recommendation: '
          + ('see section 4.' if os.path.exists(os.path.join(HERE, 'recommendation.md')) else 'Pending.'))
    s5 = f'{len(bullets(sec(FACTS, "Open items")[1]))} questions and defects for the user.'
    st = (f'Timing: {NDONE} of {len(RUNS)} runs done' + (f' ({", ".join(DONE_IDS)})' if DONE_IDS else '') + '.')
    if TM and (bad := [f'{r["id"]} {run_state(r)}' for r in TM['runs'] if run_state(r) != 'ok']):
        st += ' Not complete: ' + '; '.join(bad) + '.'
    items = [('1 Copies', s1), ('2 Speed', s2), ('3 GVN', s3), ('4 Next', s4), ('5 Open', s5), ('State', esc(st))]
    return ('<section class="summary" aria-label="Summary"><dl>'
            + ''.join(f'<div><dt>{k}</dt><dd>{v}</dd></div>' for k, v in items) + '</dl></section>')


CSS = r'''
:root{--bg:#f3f6fa;--surface:#ffffff;--text:#1b2533;--muted:#5a6678;--rule:#d3dae4;--rule2:#e6ebf1;--accent:#0d7a7e;
--accent-bg:#e1f2f2;--good:#1a6e36;--good-bg:#d9efe0;--bad:#a4421a;--bad-bg:#f7e2d6;--nz-bg:transparent;--code-bg:#e9eef4;
--s1:#2a78d6;--s2:#eb6834;--s3:#1baf7a;--s4:#eda100;--s5:#e87ba4;--focus:#0d7a7e}
@media (prefers-color-scheme: dark){:root:not([data-theme="light"]){--bg:#10151c;--surface:#171e27;--text:#e2e8ef;--muted:#98a4b3;
--rule:#2c3745;--rule2:#222b36;--accent:#45b9bb;--accent-bg:#163536;--good:#7fd69a;--good-bg:#173823;--bad:#f39a70;--bad-bg:#45261a;
--nz-bg:transparent;--code-bg:#202a35;--s1:#3987e5;--s2:#d95926;--s3:#199e70;--s4:#c98500;--s5:#d55181;--focus:#45b9bb;color-scheme:dark}}
:root[data-theme="dark"]{--bg:#10151c;--surface:#171e27;--text:#e2e8ef;--muted:#98a4b3;--rule:#2c3745;--rule2:#222b36;--accent:#45b9bb;
--accent-bg:#163536;--good:#7fd69a;--good-bg:#173823;--bad:#f39a70;--bad-bg:#45261a;--nz-bg:transparent;--code-bg:#202a35;
--s1:#3987e5;--s2:#d95926;--s3:#199e70;--s4:#c98500;--s5:#d55181;--focus:#45b9bb;color-scheme:dark}
*{box-sizing:border-box}
body{margin:0;background:var(--bg);color:var(--text);font:15px/1.55 "IBM Plex Sans",system-ui,-apple-system,"Segoe UI",sans-serif}
.wrap{max-width:1180px;margin:0 auto;padding-block:32px 64px;padding-left:max(16px,env(safe-area-inset-left,0px));padding-right:max(16px,env(safe-area-inset-right,0px))}
.wrap>h1,.wrap>.sub,.wrap>nav{max-width:72ch}
section>*:not(.tw):not(.charts):not(.chart):not(details){max-width:72ch}
h1,h2,h3,h4{font-family:"Space Grotesk",system-ui,-apple-system,"Segoe UI",sans-serif;line-height:1.2;letter-spacing:-.01em}
h1{font-size:2rem;margin:0 0 4px}
.sub{color:var(--muted);margin:0 0 24px}
h2{font-size:1.45rem;margin:56px 0 12px;padding-top:16px;border-top:2px solid var(--rule)}
h3{font-size:1.12rem;margin:32px 0 8px}
h4{font-size:1rem;margin:24px 0 6px}
.qn{display:inline-block;min-width:1.6em;color:var(--accent)}
p{margin:0 0 12px}
a{color:var(--accent)}
code{font-family:"IBM Plex Mono",ui-monospace,SFMono-Regular,Menlo,monospace;font-size:.86em;background:var(--code-bg);padding:0 .25em;border-radius:3px;overflow-wrap:anywhere}
.muted{color:var(--muted)}.small{font-size:.86rem}
.lead{font-size:1.05rem}
nav.toc{margin:0 0 24px;font-size:.92rem}nav.toc ol{margin:0;padding-left:1.4em;columns:2 16rem}
.summary{background:var(--surface);border:1px solid var(--rule);border-left:4px solid var(--accent);border-radius:6px;padding:14px 18px;margin:0 0 8px;max-width:none!important}
.summary dl{margin:0;display:grid;gap:8px}
.summary div{display:grid;grid-template-columns:5.5rem 1fr;gap:12px}
.summary dt{font-family:"Space Grotesk",system-ui,sans-serif;font-weight:600;color:var(--accent)}
.summary dd{margin:0}
@media (max-width:520px){.summary div{grid-template-columns:1fr;gap:0}}
.stat{display:flex;flex-wrap:wrap;gap:6px 16px;font-family:"IBM Plex Mono",ui-monospace,monospace;font-size:.88rem;color:var(--muted)}
.stat span:first-child{color:var(--text);font-weight:600}
.tw{overflow-x:auto;margin:8px 0 16px;border:1px solid var(--rule);border-radius:6px;background:var(--surface);max-width:100%}
table{border-collapse:collapse;font-size:.86rem;width:100%}
.narrow{width:auto;min-width:50%}
th,td{padding:5px 9px;border-bottom:1px solid var(--rule2);text-align:left;vertical-align:top}
thead th{font-family:"Space Grotesk",system-ui,sans-serif;font-weight:600;background:var(--surface);border-bottom:1px solid var(--rule);vertical-align:bottom}
tbody th{font-weight:500}
td.n,th.n{text-align:right;font-family:"IBM Plex Mono",ui-monospace,monospace;font-variant-numeric:tabular-nums;white-space:nowrap}
td.gd{background:var(--good-bg);color:var(--good)}td.bd{background:var(--bad-bg);color:var(--bad)}td.nz{background:var(--nz-bg)}
tr.warn th,tr.warn td{color:var(--bad)}
tr.sum td{font-weight:600}
table.md td:first-child{min-width:9rem}
table.runs th,table.runs td{white-space:nowrap}
table.cls td:first-child{min-width:10rem}
table.block td:first-child{min-width:15rem}
table.ratios th[scope="row"]{white-space:nowrap}
table.cls td.sites{min-width:18rem;font-size:.82rem}
code.r{white-space:pre-wrap}
.perex{font-size:.8rem}
.perex th,.perex td{padding:3px 7px}
.perex .stick{position:sticky;left:0;background:var(--surface);z-index:1;min-width:11rem}
.perex thead th[scope="colgroup"]{text-align:center;border-left:1px solid var(--rule)}
.perex tr.cat th,.perex tr.cat td{background:var(--accent-bg);font-weight:600}
.perex tr.cat td.gd{background:var(--good-bg)}.perex tr.cat td.bd{background:var(--bad-bg)}
.perex tr.ex th code{background:none;padding:0}
.tog{font:inherit;font-weight:600;color:var(--text);background:none;border:0;padding:0;cursor:pointer;text-align:left}
.tog::before{content:"▾ ";color:var(--accent)}.tog[aria-expanded="false"]::before{content:"▸ "}
details{margin:8px 0 16px;max-width:100%}
summary{cursor:pointer;color:var(--accent);font-weight:500}
details[open]>summary{margin-bottom:8px}
.pending{color:var(--muted);border-left:3px solid var(--rule);padding-left:10px}
.exlist{font-size:.86rem}
.rec{border:1px dashed var(--accent);border-radius:6px;padding:4px 16px 8px;margin-top:24px}
.charts{display:grid;grid-template-columns:repeat(auto-fit,minmax(280px,1fr));gap:16px;margin:8px 0 16px}
.chart{margin:0;background:var(--surface);border:1px solid var(--rule);border-radius:6px;padding:12px}
.chart.wide{max-width:760px}
.chart svg{width:100%;height:auto;display:block}
.chart figcaption{font-size:.82rem;color:var(--muted);margin-top:6px}
svg text{fill:var(--muted);font-family:"IBM Plex Sans",system-ui,sans-serif;font-size:11px}
svg text.ttl{fill:var(--text);font-family:"Space Grotesk",system-ui,sans-serif;font-size:12px;font-weight:600}
svg text.val,svg text.tick{font-family:"IBM Plex Mono",ui-monospace,monospace;font-size:10.5px;fill:var(--text)}
svg text.strong{fill:var(--text);font-weight:600}
svg rect.bar{fill:var(--accent)}svg rect.bar.ref{fill:var(--muted)}
svg line.axis,svg line.grid{stroke:var(--rule);stroke-width:1}svg line.ref1{stroke:var(--muted);stroke-width:1.5;stroke-dasharray:3 3}
svg circle{stroke:var(--surface);stroke-width:2}
svg .s1{fill:var(--s1)}svg .s2{fill:var(--s2)}svg .s3{fill:var(--s3)}svg .s4{fill:var(--s4)}svg .s5{fill:var(--s5)}
:focus-visible{outline:2px solid var(--focus);outline-offset:2px;border-radius:2px}
ul,ol{padding-left:1.4em;margin:0 0 12px}li{margin:0 0 4px}
'''

JS = r'''
document.querySelectorAll('.perex .tog').forEach(function(b){
  var rows=document.querySelectorAll('.perex tr.ex[data-cat="'+b.dataset.cat+'"]');
  function set(open){b.setAttribute('aria-expanded',open?'true':'false');rows.forEach(function(r){r.hidden=!open;});}
  set(false);
  b.addEventListener('click',function(){set(b.getAttribute('aria-expanded')!=='true');});
});
'''


def main():
    body = [section1(), section2(), section3(), section4()]
    body.append(section5())  # last: it lists the data notes of the other sections
    head = ('<meta charset="utf-8">\n<title>FIŘ Copies and Speed, Week 48</title>\n<meta name="claude:viewport-fit-sides" content="cover">\n'
            '<link rel="preconnect" href="https://fonts.googleapis.com">\n'
            '<link rel="preconnect" href="https://fonts.gstatic.com" crossorigin="">\n'
            '<link rel="stylesheet" href="https://fonts.googleapis.com/css2?family=IBM+Plex+Mono:wght@400;600&amp;'
            'family=IBM+Plex+Sans:ital,wght@0,400;0,500;0,600;1,400&amp;family=Space+Grotesk:wght@500;600&amp;display=swap">\n'
            f'<style>{CSS}</style>\n')
    toc = ('<nav class="toc" aria-label="Sections"><ol><li><a href="#q1">Copies: GNU-R vs FIŘ</a></li><li><a href="#q2">Speed changes</a></li>'
           '<li><a href="#q3">GVN</a></li><li><a href="#q4">Next candidates</a></li><li><a href="#q5">Open items</a></li></ol></nav>')
    page = (head + '<main class="wrap"><h1>FIŘ Copies and Speed, Week 48</h1>'
            '<p class="sub">Report of 2026-11-23 to 2026-11-25, branch <code>lazy-closure-versions</code>. '
            'Generated by <code>gen.py</code> from <code>data/</code>, <code>facts.md</code> and <code>next.md</code>.</p>'
            + summary() + toc + ''.join(f'<section>{s}</section>' for s in body) + f'</main>\n<script>{JS}</script>\n')
    open(OUT, 'w', encoding='utf-8').write(page)
    print(f'gen.py: wrote {OUT} ({len(page.encode()) / 1024:.0f} KB), timing runs {NDONE} of {len(RUNS)}, {len(NOTES)} data notes',
          file=sys.stderr)


main()
