#!/usr/bin/env python3
"""Write report.html: the fir2c.opt optimization log (list, code changes, benchmark tables).

Usage: python3 gen.py [--bench DIR] [--opt DIR] [--key DIR] [--out FILE] [--allow-empty]
"""
import argparse, base64, csv, glob, html, json, math, os, re, statistics, subprocess, sys, zlib

HERE = os.path.dirname(os.path.abspath(__file__))
REPO = subprocess.run(['git', '-C', HERE, 'rev-parse', '--show-toplevel'], capture_output=True, text=True, check=True).stdout.strip()
KINDS = ('optimization', 'fix', 'test', 'docs', 'enabler')
GNUR = ('ast', 'bc.default', 'bc.opt')
NOISE = 0.12
NOTE_KINDS = (('value:', 'invalid'), ('no time', 'missing'), ('rerun:', 'rerun'))  # notes.json prefixes
CATS = ('awf', 'shootout', 'real', 'ati', 'scalar', 'mathkernel', 'riposte', 'misc')  # bench_<category>_<name>
CAT_RE = re.compile(rf'({"|".join(CATS)})_')
BASE, RERUN = '<none>', '<none> (rerun)'  # the rows of VariantBenchmark with all optimizations
DROPPED = set()  # the examples of the run directories outside the categories


def git(*a):
    return subprocess.run(['git', '-C', REPO, *a], capture_output=True, check=True).stdout.decode('utf-8', 'replace')


esc = lambda s: html.escape(str(s), quote=True)


def mdi(s):
    """Escape text and render `code` spans."""
    return re.sub(r'`([^`]+)`', r'<code>\1</code>', esc(s))


def md(s):
    """Like mdi, and split paragraphs on blank lines."""
    paras = [p.strip() for p in re.split(r'\n\s*\n', s) if p.strip()] or ['']
    return ''.join(f'<p>{mdi(p)}</p>' for p in paras)


plain = lambda s: s.replace('`', '')


# ---------------------------------------------------------------- content

def load_content(opts, allow_empty):
    errs, out = [], {}
    def need(cond, msg):
        if not cond: errs.append(msg)
        return cond
    for o in opts:
        p = os.path.join(HERE, 'content', o['id'] + '.json')
        try:
            c = json.load(open(p, encoding='utf-8'))
        except FileNotFoundError:
            errs.append(f'{p}: file is missing'); continue
        except json.JSONDecodeError as e:
            errs.append(f'{p}: invalid JSON ({e})'); continue
        if not need(isinstance(c, dict), f'{p}: top level is not an object'): continue
        want = ('title', 'motivation', 'solution', 'commitKinds', 'files')
        errs += [f'{p}: missing key "{k}"' for k in want if k not in c]
        errs += [f'{p}: extra key "{k}"' for k in c if k not in want]
        for k in (k for k in want[:3] if k in c):
            v = c[k]
            if need(isinstance(v, str), f'{p}: "{k}" is not a string'):
                need(allow_empty or v.strip(), f'{p}: "{k}" is empty')
        for key, expected, what in (('commitKinds', [x['sha'] for x in o['commits']], 'commit'),
                                    ('files', [f['path'] for f in o['files']], 'path')):
            if key not in c: continue
            m = c[key]
            if not need(isinstance(m, dict), f'{p}: "{key}" is not an object'): continue
            errs += [f'{p}: "{key}" is missing {what} {k}' for k in expected if k not in m]
            errs += [f'{p}: "{key}" has {what} {k}, which is not in the skeleton' for k in m if k not in expected]
            for k, v in m.items():
                if not need(isinstance(v, str), f'{p}: "{key}"."{k}" is not a string'): continue
                if not v.strip():
                    need(allow_empty, f'{p}: "{key}"."{k}" is empty')
                elif key == 'commitKinds':
                    need(v in KINDS, f'{p}: "{key}"."{k}" is "{v}", not one of {"|".join(KINDS)}')
        out[o['id']] = c
    if errs:
        sys.exit('gen.py: the content is not valid (%d problems):\n  ' % len(errs) + '\n  '.join(errs)
                 + ('' if allow_empty else '\n(use --allow-empty to accept empty strings while the content is incomplete)'))
    return out


# ---------------------------------------------------------------- diffs

def split_rename(p):
    """Return (old, new) for a numstat path, which is `a => b` or `dir/{a => b}/x` for a rename."""
    if m := re.fullmatch(r'(.*)\{(.*) => (.*)\}(.*)', p):
        return tuple(re.sub('//+', '/', m[1] + x + m[4]) for x in (m[2], m[3]))
    return tuple(p.split(' => ')) if ' => ' in p else (p, p)


def file_diff(pre, post, path, numstat, old=None):
    """Return (status, segments) for one file; a segment is [tag, '\\n'-joined lines], tag e|d|i.

    `old` is the path at `pre` when it differs from `path` (a rename)."""
    old = old or path
    args = [f'{pre}:{old}', f'{post}:{path}'] if old != path else [pre, post, '--', path]
    out = git('diff', '--no-color', '--no-ext-diff', '-U100000000', *args).split('\n')
    status = 'R' if old != path else 'A' if any(l.startswith('new file mode') for l in out[:6]) else \
             'D' if any(l.startswith('deleted file mode') for l in out[:6]) else 'M'
    body = out[next((i for i, l in enumerate(out) if l.startswith('@@')), len(out) - 1) + 1:]
    if body and body[-1] == '': body.pop()
    segs = []
    for l in body:
        if l.startswith('\\'): continue  # "\ No newline at end of file"
        tag = {' ': 'e', '-': 'd', '+': 'i'}[l[:1] or ' ']
        if segs and segs[-1][0] == tag: segs[-1][1].append(l[1:])
        else: segs.append([tag, [l[1:]]])
    n = {t: sum(len(s[1]) for s in segs if s[0] == t) for t in 'edi'}
    if (n['i'], n['d']) != (numstat['added'], numstat['deleted']):
        print(f'warning: {path} {pre}..{post}: diff +{n["i"]} -{n["d"]}, numstat +{numstat["added"]} -{numstat["deleted"]}',
              file=sys.stderr)
    for rev, tags, p in ((pre, 'ed', old), (post, 'ei', path)):
        side = [x for s in segs if s[0] in tags for x in s[1]]
        try:
            real = git('show', f'{rev}:{p}').split('\n')
            if real and real[-1] == '': real.pop()
        except subprocess.CalledProcessError:
            real = []
        if side != real:
            print(f'warning: {path} at {rev}: the diff does not reproduce the file', file=sys.stderr)
    return status, [[t, '\n'.join(ls)] for t, ls in segs]


def pack(obj):
    return base64.b64encode(zlib.compress(json.dumps(obj, ensure_ascii=False, separators=(',', ':')).encode(), 9)).decode()


# ---------------------------------------------------------------- benchmarks

def gmean(xs):
    xs = list(xs)
    return math.exp(sum(map(math.log, xs)) / len(xs)) if xs else None


def num(s):
    try:
        v = float(s)
        return v if math.isfinite(v) and v > 0 else None
    except (TypeError, ValueError):
        return None


def cat_of(b):
    """The category of an example name (without `bench_`), or None if it is outside the eight."""
    return m[1] if (m := CAT_RE.match(b)) else None


def read_csv(f):
    """removed -> (time or None, same.as or None): the rows of one VariantBenchmark CSV."""
    return {r['removed']: (num(r['time']), r.get('same.as') if r.get('same.as') not in (None, '', 'NA') else None)
            for r in csv.DictReader(open(f, encoding='utf-8'))}


def example_of(f):
    """The example name of a CSV file (without `bench_`), or None (and noted in DROPPED) outside the eight categories."""
    b = os.path.basename(f)[:-len('.csv')].removeprefix('bench_')
    if cat_of(b): return b
    DROPPED.add(b)


def groups_of(benches):
    """(category, examples) for each category with an example, in the order of CATS."""
    return [(c, xs) for c in CATS if (xs := [b for b in benches if cat_of(b) == c])]


def load_bench(bdir, ids):
    """Return the table model, or exit if no state is measured."""
    states = []
    for sid in ['00-pre'] + ids + ['tip']:
        d = os.path.join(bdir, sid)
        files = sorted(glob.glob(os.path.join(d, 'csv', 'bench_*.csv')))
        if not files: continue
        data = {b: {k: t for k, (t, _) in read_csv(f).items()} for f in files if (b := example_of(f))}
        notes = {}
        if os.path.exists(os.path.join(d, 'notes.json')):
            notes = {b: v for k, v in json.load(open(os.path.join(d, 'notes.json'))).items()
                     if cat_of(b := k.removeprefix('bench_')) or DROPPED.add(b)}
        kinds = {}
        for b, v in notes.items():
            kinds[b] = next((k for p, k in NOTE_KINDS if v.startswith(p)), None)
            if not kinds[b]:
                sys.exit(f'gen.py: {d}/notes.json: the note for {b} starts with none of '
                         f'{", ".join(repr(p) for p, _ in NOTE_KINDS)}: {v!r}')
        states.append({'id': sid, 'data': data, 'notes': notes, 'kinds': kinds})
    if not states: sys.exit(f'gen.py: no state directory with csv/bench_*.csv under {bdir}')
    benches = sorted({b for s in states for b in [*s['data'], *s['notes']]})
    # The median of a GNU-R row over the states; only a row measured in two states or more is a reference.
    med = {}
    for b in benches:
        for r in GNUR:
            xs = [s['data'][b][r] for s in states if s['data'].get(b, {}).get(r)]
            if len(xs) > 1: med[b, r] = statistics.median(xs)
    for s in states:
        s['load'] = gmean(s['data'][b][r] / med[b, r] for b in s['data'] for r in GNUR
                          if (b, r) in med and s['data'][b].get(r)) or 1.0
    bcopt = {b: statistics.median(xs) if (xs := [s['data'][b]['bc.opt'] for s in states
                                                  if s['data'].get(b, {}).get('bc.opt')]) else None for b in benches}
    cells = []  # cells[col][bench] = dict or None
    for c, s in enumerate(states):
        col = {}
        for b in benches:
            row = s['data'].get(b, {})
            runs = [x for x in (row.get('<none>'), row.get('<none> (rerun)')) if x]
            if not runs: col[b] = None; continue
            disp = min(runs) / s['load']
            cell = {'raw': min(runs), 'runs': len(runs), 'disp': disp, 'inrun': row.get('bc.opt'),
                    'pct': bcopt[b] / disp * 100 if bcopt[b] else None, 'note': s['notes'].get(b),
                    'bad': s['kinds'].get(b) == 'invalid', 'sp': None, 'skip': None}
            prev = cells[c - 1].get(b) if c else None
            # A speedup that divides an invalid cell is not computed; `skip` keeps it for the remark in the list.
            if prev and (prev['bad'] or cell['bad']):
                cell['skip'] = (prev['disp'], disp, 'the earlier state' if prev['bad'] else 'this state')
            elif prev: cell['sp'] = prev['disp'] / disp
            col[b] = cell
        cells.append(col)
    stats = {}
    for c, s in enumerate(states):
        sps = {b: x['sp'] for b, x in cells[c].items() if x and x['sp']}
        st = stats[s['id']] = {'vs': states[c - 1]['id'] if c else None, 'n': len(sps), 'gm': gmean(sps.values()),
                               'skips': {b: x['skip'] for b, x in cells[c].items() if x and x['skip']}}
        for k, f in (('min', min), ('max', max)):
            b = f(sps, key=sps.get, default=None)
            st[k], st[k + 'b'] = (sps[b], b) if b else (None, None)
            # Notes on the cells this speedup divides (this state and the previous one).
            st[k + 'note'] = '\n'.join(f'{t["id"]} {b}: {t["notes"][b]}' for t in states[max(c - 1, 0):c + 1]
                                       if b and t['kinds'].get(b) == 'rerun')
    return {'states': states, 'benches': benches, 'bcopt': bcopt, 'cells': cells, 'stats': stats}


def valid(x):
    return bool(x) and not x['bad'] and x['pct'] is not None


def cat_stats(cells, c, members):
    """The geometric means of one column over `members`: percent (n examples) and speedup vs. the previous column (nsp)."""
    xs = [x for b in members if valid(x := cells[c].get(b))]
    sps = [x['sp'] for x in xs if x['sp']]
    return {'pct': gmean(x['pct'] for x in xs), 'n': len(xs), 'sp': gmean(sps), 'nsp': len(sps)}


def load_variants(d, mode):
    """A run of variants.sh (mode opt or key): None if `d` has no CSV, else
    {commit, labels, benches, ent: {(bench, label): {base, rerun, t, same}}, status: {bench: status JSON}}."""
    if not d or not os.path.isdir(d): return None
    ent, labels = {}, []
    for f in sorted(glob.glob(os.path.join(d, 'bench_*.csv') if mode == 'opt' else os.path.join(d, '*', 'bench_*.csv'))):
        if not (b := example_of(f)): continue
        rows = read_csv(f)
        base, rerun = (rows.get(k, (None,))[0] for k in (BASE, RERUN))
        for l in ([k for k in rows if k not in (BASE, RERUN, 'fir2c.default', *GNUR)] if mode == 'opt'
                  else [os.path.basename(os.path.dirname(f))]):
            t, same = rows.get(l, (None, None))
            ent[b, l] = {'base': base, 'rerun': rerun, 't': t, 'same': same}
            if l not in labels: labels.append(l)
    if not ent: return None
    status = {}
    for f in glob.glob(os.path.join(d, 'status', 'bench_*.json')):
        if b := example_of(f[:-len('.json')] + '.csv'): status[b] = json.load(open(f, encoding='utf-8'))
    commit = open(os.path.join(d, 'commit')).read().strip() if os.path.exists(os.path.join(d, 'commit')) else ''
    return {'dir': d, 'commit': commit, 'labels': labels, 'ent': ent, 'status': status,
            'benches': sorted({b for b, _ in ent} | set(status))}


def slow_stats(v, label, members):
    """The geometric mean slowdown (time without `label` / time with all) over the examples of `members` with both
    times, and its noise floor: the geometric mean of the ratio of the two runs of <none>, either way up."""
    xs = [e for b in members if (e := v['ent'].get((b, label))) and e['base'] and e['t']]
    noise = [abs(math.log(e['rerun'] / e['base'])) for e in xs if e['rerun']]
    gm = gmean(e['t'] / e['base'] for e in xs)
    floor = math.exp(sum(noise) / len(noise)) if noise else None
    return {'gm': gm, 'n': len(xs), 'floor': floor, 'sig': bool(gm and floor and abs(math.log(gm)) > math.log(floor))}


def fmt_t(t):
    """A time in seconds, with 3 significant digits in µs (below 0.1 ms), ms, or s (from 1000 ms)."""
    t = float(f'{t:.3g}')  # round first, so 0.09996 ms becomes 0.100 ms, not 100 µs
    v, unit = (t * 1e6, 'µs') if t < 1e-4 else (t * 1e3, 'ms') if t < 1 else (t, 's')
    d = max(0, 2 - math.floor(math.log10(v)))
    if d and round(v, d) >= 10 ** (3 - d): d -= 1
    return f'{v:.{d}f} {unit}'


def short(b):
    return CAT_RE.sub('', b, count=1)


def sp_pct(sp):
    p = round((sp - 1) * 100)
    return ('+' if p > 0 else '−' if p < 0 else '±') + f'{abs(p)} %'


def sp_class(sp):
    return 'up' if sp - 1 > NOISE else 'down' if sp - 1 < -NOISE else 'noise'


# ---------------------------------------------------------------- HTML parts

def is_test(path):
    return '/src/test/' in path or path.startswith(('client/rsh/tests/', 'client/rcp/tests/'))


def pair(a, d):
    return f'<span class="add">+{a}</span> <span class="del">\u2212{d}</span>'


def lines(files, both=True):
    """`+a −d (+A −D)`: the counts without test files, then with them; only the second if not `both`."""
    tot = pair(sum(f['added'] for f in files), sum(f['deleted'] for f in files))
    if not both: return tot
    src = [f for f in files if not is_test(f['path'])]
    return f'{pair(sum(f["added"] for f in src), sum(f["deleted"] for f in src))} <span class="wt">({tot})</span>'


def tree_html(files, summ):
    root = {}
    for f in files:
        *dirs, name = f['path'].split('/')
        node = root
        for d in dirs: node = node.setdefault(d + '/', {})
        node[name] = f
    def leaves(n):
        return [x for k, v in n.items() for x in (leaves(v) if k.endswith('/') else [v])]
    def counts(fs, st=''):
        # A directory shows both pairs only when it mixes test and non-test files; otherwise they say the same.
        tag = {'A': '<span class="st">new</span>', 'D': '<span class="st">deleted</span>', 'R': '<span class="st">renamed</span>'}.get(st, '')
        return f'<span class="ct">{tag}{lines(fs, len({is_test(f["path"]) for f in fs}) > 1)}</span>'
    def render(n):
        items = []
        for k in sorted(n, key=lambda k: (not k.endswith('/'), k.lower())):
            v, name = n[k], k
            if k.endswith('/'):
                while len(v) == 1 and next(iter(v)).endswith('/'):
                    (k2, v), = v.items(); name += k2
                ls = leaves(v)
                items.append(f'<li><details open><summary><span class="dn">{esc(name).replace("/", "/<wbr>")}</span>'
                             f'{counts(ls)}</summary>{render(v)}</details></li>')
            else:
                s = summ.get(v['path'], '')
                # A list summary holds [optimization id, label, sentence] entries (the All changes block).
                tip = '\n'.join(f'{lbl}: {t}' for _, lbl, t in s) if isinstance(s, list) else s
                data = f'data-sl="{esc(json.dumps(s, ensure_ascii=False))}"' if isinstance(s, list) else f'data-s="{esc(s)}"'
                items.append(f'<li><button type="button" class="f" data-p="{esc(v["path"])}" {data} data-o="{esc(v.get("old", ""))}" '
                             f'data-a="{v["added"]}" data-d="{v["deleted"]}" data-st="{v["status"]}"'
                             f' title="{esc(name + (chr(10) + plain(tip) if tip else ""))}"><span class="fn">{esc(name)}</span>'
                             f'{counts([v], v["status"])}</button></li>')
        return '<ul>' + ''.join(items) + '</ul>'
    return render(root)


def speed_html(o, bench):
    if bench is None or o['id'] not in bench['stats']:
        return '<span class="pending">Speedup: pending benchmark rerun</span>'
    st = bench['stats'][o['id']]
    if not st['n']:
        return '<span class="pending">Speedup: no earlier measured state to compare with</span>'
    def part(lbl, k):
        note = st.get(k + 'note')
        flag = f'<span class="fl" title="{esc(note)}">!</span>' if note else ''
        who = f' <span class="bn" title="{esc(st[k + "b"])}">{esc(short(st[k + "b"]))}</span>' if k != 'gm' else ''
        return f'{lbl} <b class="{sp_class(st[k])}"{f" title={chr(34)}{esc(note)}{chr(34)}" if note else ""}>{sp_pct(st[k])}</b>{flag}{who}'
    parts = ' · '.join(part(lbl, k) for lbl, k in (('geomean', 'gm'), ('min', 'min'), ('max', 'max')))
    vs = st['vs']
    gap = '' if vs == o['prev'] else f'; spans the changes since state {esc(vs)}'
    skips = ''.join(f'<span class="def excl"><span class="fl bad">!</span>{esc(short(b))} {fmt_t(a)} → {fmt_t(z)} not counted: '
                    f'{who} returned a wrong value</span>' for b, (a, z, who) in st['skips'].items())
    return (f'<a class="speed" href="#col-{esc(o["id"])}">{parts}</a>'
            f'<span class="def">fir2c.opt speedup over the previous measured state ({esc(vs)}), '
            f'{st["n"]} benchmarks{gap}</span>{skips}')


def notes_html(bench):
    """The flagged cells as a list: one item for each note text, with the benchmarks and states it applies to."""
    groups, bad = {}, set()
    for s in bench['states']:
        for b, note in s['notes'].items():
            groups.setdefault(note, {}).setdefault(b, []).append(s['id'][:3].rstrip('-'))
            if s['kinds'][b] == 'invalid': bad.add(note)
    if not groups: return ''
    items = ''.join(f'<li><span class="fl{" bad" if note in bad else ""}">!</span><span>{"; ".join(f"<b>{esc(b)}</b> in {", ".join(ss)}" for b, ss in bs.items())}: '
                    f'{esc(note)}{" (excluded from all statistics)" if note in bad else ""}</span></li>' for note, bs in groups.items())
    n = sum(len(ss) for bs in groups.values() for ss in bs.values())
    return f'<details><summary><b>Flagged cells</b> ({n}; benchmark in states)</summary><ul class="notes">{items}</ul></details>'


def dropped_html():
    return (f'<p>The report shows only the examples of the eight categories. It does not show {len(DROPPED)} examples of the '
            f'run directories: {", ".join(f"<code>{esc(b)}</code>" for b in sorted(DROPPED))}.</p>' if DROPPED else '')


def grouped_table(head, groups, foot=None, cls=''):
    """A table with one <tbody> per category. The category row is always visible; its button shows the example rows.

    head: the <th> cells; groups: (label, sub, cells, rows), rows: (name HTML, title, cells); foot: (label, sub, cells)."""
    body = ''.join(
        f'<tbody><tr class="gr"><th scope="row"><button type="button" class="tg" aria-expanded="false">{esc(lbl)}</button>'
        f'<span class="sub">{sub}</span></th>{cells}</tr>'
        + ''.join(f'<tr class="exr" hidden><th scope="row" title="{esc(t)}">{n}</th>{cs}</tr>' for n, t, cs in rows)
        + '</tbody>' for lbl, sub, cells, rows in groups)
    ft = f'<tfoot><tr><th scope="row">{foot[0]}<span class="sub">{foot[1]}</span></th>{foot[2]}</tr></tfoot>' if foot else ''
    return (f'<button type="button" class="tgall" aria-expanded="false">Show all examples</button>'
            f'<div class="tw" tabindex="0"><table class="bt {cls}"><thead><tr>{head}</tr></thead>{body}{ft}</table></div>')


def summary_html(bench):
    """For the last state (the tip): per category and over all, bc.opt time / fir2c.opt time, and the examples without a time."""
    st, cells = bench['states'], bench['cells']
    c, s = len(st) - 1, st[-1]
    name = 'the tip' if s['id'] == 'tip' else f'state {s["id"]}'
    rows = []
    for cat, members in [*((cat, [b for b in bench['benches'] if cat_of(b) == cat]) for cat in CATS), ('all', bench['benches'])]:
        ps = [x['pct'] for b in members if valid(x := cells[c].get(b))]
        miss = [(b, s['notes'].get(b) or 'no result') for b in members if not valid(cells[c].get(b))]
        g = gmean(ps)
        lst = (f'<details><summary>{len(miss)}</summary><ul>' + ''.join(f'<li><b>{esc(short(b))}</b>: {esc(r)}</li>' for b, r in miss)
               + '</ul></details>') if miss and cat != 'all' else str(len(miss))
        rows.append(f'<tr{" class=all" if cat == "all" else ""}><th scope="row">{esc(cat)}</th><td>{len(ps)} / {len(members)}</td>'
                    f'<td><b>{f"{g:.0f} %" if g else "–"}</b></td><td>{sum(p > 100 for p in ps)}</td><td>{sum(p < 100 for p in ps)}</td>'
                    f'<td class="ms">{lst}</td></tr>')
    return (f'<div class="summary"><p class="prose">The geometric mean of the bc.opt time divided by the fir2c.opt time at {name}, '
            'per category of examples. 100 % means as fast as GNU-R optimized bytecode (bc.opt); higher is faster. '
            'An example without a valid time (no time, or a wrong value) is not counted; open its count to read the reason. '
            '<a href="#table">Speedup table</a>.</p>'
            '<div class="tw"><table class="bt sm"><thead><tr><th scope="col">Category</th><th scope="col">timed</th><th scope="col">geomean</th>'
            '<th scope="col">faster</th><th scope="col">slower</th><th scope="col">no valid time</th></tr></thead>'
            f'<tbody>{"".join(rows)}</tbody></table></div></div>')


def table_html(bench, byid):
    st, cells, benches = bench['states'], bench['cells'], bench['benches']
    head = ['<th class="corner" scope="col">Benchmark<span class="sub">bc.opt time</span></th>']
    for c, s in enumerate(st):
        o = byid.get(s['id'])
        num_, key = (s['id'].split('-', 1) + [''])[:2]
        label = f'<a href="#opt-{esc(s["id"])}">{num_}</a>' if o else num_
        tip = f'{plain(o["title"])}\n' if o else 'The start of the chain\n'
        head.append(f'<th scope="col" id="col-{esc(s["id"])}" data-c="{c}" title="{esc(tip)}load factor {s["load"]:.3f}">'
                    f'{label}<span class="sub">{esc(key)}</span></th>')
    def cell(c, b):
        s, x = st[c], cells[c].get(b)
        if not x:
            note = s['notes'].get(b)
            return (f'<td data-c="{c}" class="na flag" title="{esc("flag: " + note)}"><span class="fl">!</span>–</td>'
                    if note else f'<td data-c="{c}" class="na">–</td>')
        tip = [f'raw {fmt_t(x["raw"])} (faster of {x["runs"]} run{"s" if x["runs"] > 1 else ""})',
               f'in-run bc.opt {fmt_t(x["inrun"]) if x["inrun"] else "–"}', f'load factor {s["load"]:.3f}']
        cls, mark = [], ''
        if x['sp']:
            tip.append(f'speedup vs. {st[c - 1]["id"]}: {sp_pct(x["sp"])}')
            k = sp_class(x['sp'])
            if k != 'noise': cls.append(k); mark = '<span class="mk">%s</span>' % ('▲' if k == 'up' else '▼')
        if x['skip']:
            tip.append(f'speedup vs. {st[c - 1]["id"]} not computed: {x["skip"][2]} returned a wrong value')
        if x['note']:
            cls.append('flag'); tip.append('flag: ' + x['note'] + ('\nexcluded from all statistics' if x['bad'] else ''))
            mark += f'<span class="fl{" bad" if x["bad"] else ""}">!</span>'
        pct = f'{x["pct"]:.0f}%' if x['pct'] is not None else ''
        return (f'<td data-c="{c}" class="{" ".join(cls)}" title="{esc(chr(10).join(tip))}">'
                f'{mark}{pct}<span class="tm">{fmt_t(x["disp"])}</span></td>')
    def mean_cells(members):
        out = []
        for c in range(len(st)):
            m = cat_stats(cells, c, members)
            if not m['n']: out.append(f'<td data-c="{c}" class="na">–</td>'); continue
            cls, mark, tip = '', '', [f'geomean of {m["n"]} examples']
            if m['sp']:
                tip.append(f'speedup vs. {st[c - 1]["id"]}: {sp_pct(m["sp"])} (geomean of {m["nsp"]} examples)')
                if (k := sp_class(m['sp'])) != 'noise': cls, mark = k, '<span class="mk">%s</span>' % ('▲' if k == 'up' else '▼')
            out.append(f'<td data-c="{c}" class="{cls}" title="{esc(chr(10).join(tip))}">{mark}{m["pct"]:.0f}%<span class="tm">n {m["n"]}</span></td>')
        return ''.join(out)
    def bc(b): return fmt_t(bench['bcopt'][b]) if bench['bcopt'][b] else '–'
    groups = [(cat, f'{len(xs)} example{"s" if len(xs) > 1 else ""}', mean_cells(xs),
               [(f'{esc(short(b))}<span class="sub">{bc(b)}</span>', b, ''.join(cell(c, b) for c in range(len(st)))) for b in xs])
              for cat, xs in groups_of(benches)]
    return grouped_table(''.join(head), groups, ('all', 'geomean of the percents', mean_cells(benches)), 'ch')


def slow_cell(m, cls_extra=''):
    """A cell for slow_stats: the geomean slowdown, the count, and the significance against the noise floor."""
    if not m['n']: return '<td class="na">–</td>'
    cls = ('up' if m['gm'] > 1 else 'down') if m['sig'] else 'noise'
    tip = (f'geomean slowdown of {m["n"]} examples: {m["gm"]:.3f}\nnoise floor ×{m["floor"]:.3f}' if m['floor'] else
           f'geomean slowdown of {m["n"]} examples: {m["gm"]:.3f}\nno rerun, so no noise floor') + ('' if m['sig'] else '\nnot significant')
    return f'<td class="{cls} {cls_extra}" title="{esc(tip)}">{m["gm"]:.2f}×<span class="tm">n {m["n"]}</span></td>'


def ex_cell(e, why=''):
    """A cell for one example of a variant: its slowdown, against the noise of its two runs of <none>."""
    if not (e and e['base'] and e['t']):
        return f'<td class="na" title="{esc(why or "no time")}">–</td>'
    s = e['t'] / e['base']
    r = e['rerun'] / e['base'] if e['rerun'] else None
    same = e['same'] == BASE
    sig = not same and r and abs(math.log(s)) > abs(math.log(r))
    tip = [f'{fmt_t(e["t"])} / {fmt_t(e["base"])}', f'rerun of <none>: ×{r:.3f}' if r else 'no rerun',
           'the same C as <none>' if same else f'the same C as {e["same"]}' if e['same'] else 'other C', '' if sig else 'not significant']
    return f'<td class="{("up" if s > 1 else "down") if sig else "noise"}" title="{esc(chr(10).join(t for t in tip if t))}">{s:.2f}×</td>'


SLOW_CAPTION = ('A cell is the geometric mean of the time without the optimizations divided by the time with all of them '
                '(the row <code>&lt;none&gt;</code> of the same run), over the examples with both times; <i>n</i> is their count. '
                'The noise floor of a cell is the geometric mean, over the same examples, of the ratio of the two runs of '
                '<code>&lt;none&gt;</code> (the larger divided by the smaller). A value inside its noise floor is grey and not significant. '
                'A green value is slower without the optimizations (so they make the code faster); a red value is faster without them. '
                'An example whose C does not change gets exactly 1.00, and it is in the mean. Hover a cell for the details.')


def variants_head(v, tip_commit, what):
    if v['commit'] and tip_commit and v['commit'][:9] != tip_commit[:9]:
        print(f'warning: {what} ran at {v["commit"][:9]}, the tip state at {tip_commit[:9]}', file=sys.stderr)
    fails = {b: s['reason'] for b, s in v['status'].items() if s.get('status') == 'failed'}
    loads = [s['load_start'] for s in v['status'].values() if 'load_start' in s]
    out = f'<p>Commit <code>{esc(v["commit"][:9])}</code>, {len(v["benches"])} examples'
    if loads: out += f', 1-minute load average at the start of an example {min(loads):.1f} to {max(loads):.1f}'
    out += '.'
    if fails:
        out += f' {len(fails)} examples have a failure: ' + '; '.join(f'<code>{esc(short(b))}</code> ({esc(r)})' for b, r in sorted(fails.items())) + '.'
    return out + '</p>'


def opt_html(v, tip_commit):
    if v is None:
        return '<p class="pend">Pending: the run of <code>variants.sh opt</code> at the tip.</p>'
    groups = groups_of(v['benches'])
    head = ('<th class="corner" scope="col">Removed<span class="sub">optimization</span></th><th scope="col">all</th>'
            + ''.join(f'<th scope="col">{esc(c)}</th>' for c, _ in groups)
            + '<th scope="col">C changed</th><th scope="col">no time</th><th scope="col">largest slowdowns</th>')
    rows = []
    for l in v['labels']:
        m = slow_stats(v, l, v['benches'])
        es = {b: e for b in v['benches'] if (e := v['ent'].get((b, l))) and e['base']}
        changed = sum(e['same'] != BASE for e in es.values() if e['t'])
        failed = sorted(b for b, e in es.items() if not e['t'])
        top = sorted(((e['t'] / e['base'], b) for b, e in es.items() if e['t'] and e['same'] != BASE and e['rerun']
                      and e['t'] / e['base'] > max(e['rerun'] / e['base'], e['base'] / e['rerun'])), reverse=True)[:3]
        cells = (slow_cell(m, 'all') + ''.join(slow_cell(slow_stats(v, l, xs)) for _, xs in groups)
                 + f'<td>{changed} / {len(es)}</td>'
                 + f'<td title="{esc(", ".join(failed))}">{len(failed) or ""}</td>'
                 + f'<td class="lg">{", ".join(f"{esc(short(b))} {s:.2f}×" for s, b in top)}</td>')
        rows.append((m['gm'] or 0, f'<tr><th scope="row"><code>{esc(l)}</code></th>{cells}</tr>'))
    rows.sort(key=lambda r: -r[0])
    noise = []
    for xs in [v['benches']] + [xs for _, xs in groups]:
        ns = [abs(math.log(e['rerun'] / e['base'])) for b in xs
              if (e := next((v['ent'][b, l] for l in v['labels'] if (b, l) in v['ent']), None)) and e['base'] and e['rerun']]
        noise.append(f'<td title="{len(ns)} examples">×{math.exp(sum(ns) / len(ns)):.3f}</td>' if ns else '<td class="na">–</td>')
    foot = f'<tfoot><tr><th scope="row">noise floor<span class="sub">two runs of &lt;none&gt;</span></th>{"".join(noise)}<td></td><td></td><td></td></tr></tfoot>'
    bopt = ''
    if os.path.exists(p := os.path.join(v['dir'], 'optimizations')):
        bopt = open(p).read().strip()
    return (variants_head(v, tip_commit, 'the opt run')
            + (f'<p>Removed optimizations: <code>BENCHMARK_OPTIMIZATIONS={esc(bopt)}</code>.</p>' if bopt and bopt != '.*' else '')
            + f'<div class="caption"><p>One row per removed optimization, sorted by the mean over all examples. {SLOW_CAPTION} '
            '<i>C changed</i> counts the examples whose generated C differs from the C with all optimizations. '
            '<i>No time</i> counts the examples where the variant failed (hover for the names). '
            '<i>Largest slowdowns</i> lists up to three examples with a significant slowdown.</p></div>'
            f'<div class="tw" tabindex="0"><table class="bt vt"><thead><tr>{head}</tr></thead><tbody>{"".join(r for _, r in rows)}</tbody>{foot}</table></div>')


def key_lists(commit):
    """label -> the optimizations that the key category removes, read from KeyBenchmarkQuery.java at `commit`
    (a string for a category that is not a removal set)."""
    src = lambda c: git('show', f'{commit}:server/src/test/java/org/prlprg/snapshot/bench/{c}.java')
    own = re.search(r'OWNERSHIP\s*=\s*List\.of\((.*?)\);', src('OwnershipBenchmarkQuery'), re.S)
    out = {}
    for label, body in re.findall(r'new KeyBenchmarkQuery\(\s*"(\w+)",(.*?)\);', src('KeyBenchmarkQuery'), re.S):
        body = re.sub(r'//.*', '', body)
        if m := re.search(r'defaultOptimizationsWithVersionLimit\((\d+)\)', body):
            out[label] = f'a limit of {int(m[1]) - 1} version besides the baseline for each function'
            continue
        names = re.findall(r'"(\w+)"', (own[1] if own and 'OWNERSHIP' in body else '') + body)
        if not names: sys.exit(f'gen.py: KeyBenchmarkQuery.java at {commit}: no optimizations for the key category {label}')
        out[label] = names
    return out


def key_html(v, tip_commit):
    if v is None:
        return '<p class="pend">Pending: the run of <code>variants.sh key</code> at the tip.</p>'
    lists = key_lists(v['commit'] or 'HEAD')
    if miss := [l for l in v['labels'] if l not in lists]:
        sys.exit(f'gen.py: the key run has the categories {", ".join(miss)}, which KeyBenchmarkQuery.java does not define')
    labels = [l for l in lists if l in v['labels']]
    groups = groups_of(v['benches'])
    head = ('<th class="corner" scope="col">Key category<span class="sub">removed optimizations</span></th><th scope="col">all</th>'
            + ''.join(f'<th scope="col">{esc(c)}</th>' for c, _ in groups))
    rows = ''.join(f'<tr><th scope="row" class="kc">{esc(l)}<span class="sub">'
                   + (esc(lists[l]) if isinstance(lists[l], str) else ', '.join(f'<code>{esc(x)}</code>' for x in lists[l])) + '</span></th>'
                   + slow_cell(slow_stats(v, l, v['benches']), 'all') + ''.join(slow_cell(slow_stats(v, l, xs)) for _, xs in groups) + '</tr>'
                   for l in labels)
    def why(b, l):
        s = v['status'].get(b, {})
        meth = 'benchmark' + l[0].upper() + l[1:]
        return next((f'{k}: {m}' for k, m in s.get('failures', {}).items() if meth in k), s.get('reason') or 'no time')
    ex = grouped_table('<th class="corner" scope="col">Benchmark</th>' + ''.join(f'<th scope="col">{esc(l)}</th>' for l in labels),
                       [(cat, f'{len(xs)} example{"s" if len(xs) > 1 else ""}', ''.join(slow_cell(slow_stats(v, l, xs)) for l in labels),
                         [(esc(short(b)), b, ''.join(ex_cell(v['ent'].get((b, l)), why(b, l)) for l in labels)) for b in xs])
                        for cat, xs in groups],
                       ('all', 'geomean', ''.join(slow_cell(slow_stats(v, l, v['benches'])) for l in labels)))
    return (variants_head(v, tip_commit, 'the key run')
            + f'<div class="caption"><p>One row per key category of optimizations: <code>KeyBenchmark</code> compiles each example '
            f'without the optimizations of the category. {SLOW_CAPTION}</p>'
            '<p>The row <code>contextualDispatch</code> removes no optimization: it limits each function to one version besides the baseline. '
            'So it overlaps the rows <code>scalarUnboxing</code> and <code>promiseInlining</code>: the limit also removes the versions '
            'with unboxed parameters and with strict parameters.</p></div>'
            f'<div class="tw" tabindex="0"><table class="bt vt"><thead><tr>{head}</tr></thead><tbody>{rows}</tbody></table></div>'
            '<h3>Each example</h3><p class="lede">The same slowdowns for each example, by category.</p>' + ex)


# ---------------------------------------------------------------- page

LIGHT = {'bg': '#f5f6f8', 'panel': '#ffffff', 'sunk': '#eef0f4', 'fg': '#1a1e26', 'muted': '#5a6372', 'line': '#dbe0e8',
             'accent': '#0b6870', 'accentbg': '#e1f0f1', 'add': '#1b6b30', 'addbg': '#e2f4e5', 'addln': '#c4e8cc',
             'del': '#a62222', 'delbg': '#fbe7e7', 'delln': '#f3c9c9', 'warn': '#8a5a00', 'warnbg': '#fbf0d9', 'hl': 'rgb(255 205 0 / 0.22)',
             'tk': '#7b2fb5', 'ts': '#0b5a8f', 'tn': '#a04500', 'tc': '#5f6773', 'tt': '#00687a', 'tf': '#9a2f6b', 'tm': '#6b5900'}
DARK = {'bg': '#111419', 'panel': '#181c23', 'sunk': '#1f242d', 'fg': '#e2e6ed', 'muted': '#97a1b1', 'line': '#2b323e',
            'accent': '#5ec5cc', 'accentbg': '#173336', 'add': '#7fd897', 'addbg': '#13301d', 'addln': '#1d4a2b',
            'del': '#f39a9a', 'delbg': '#3a181b', 'delln': '#5a2328', 'warn': '#e9b858', 'warnbg': '#3a2d12', 'hl': 'rgb(94 197 204 / 0.16)',
            'tk': '#d2a8ff', 'ts': '#8ec5ff', 'tn': '#f0b073', 'tc': '#98a2b0', 'tt': '#6ed3d9', 'tf': '#f0a0d0', 'tm': '#d9c46a'}


def tokens(d): return '; '.join(f'--{k}: {v}' for k, v in d.items())


CSS = r'''
/* Layout: one reading column for the list; wide work areas (file tree beside diff, scrolling table) below it. */
:root { --sans: "IBM Plex Sans", system-ui, -apple-system, "Segoe UI", sans-serif;
  --mono: "IBM Plex Mono", ui-monospace, "SF Mono", Menlo, Consolas, monospace;
  --display: "Space Grotesk", "IBM Plex Sans", system-ui, sans-serif; --navh: 44px; @@LIGHT@@ }
@media (prefers-color-scheme: dark) { :root:not([data-theme="light"]) { @@DARK@@; color-scheme: dark } }
:root[data-theme="dark"] { @@DARK@@; color-scheme: dark }
body { background: var(--bg); color: var(--fg); font: 15px/1.55 var(--sans); }
body::before { content: ""; position: fixed; inset: 0 0 auto; height: env(safe-area-inset-top, 0px); z-index: 10; background: var(--panel); }
.wrap { max-width: 1280px; margin: 0 auto; padding-left: max(16px, env(safe-area-inset-left, 0px)); padding-right: max(16px, env(safe-area-inset-right, 0px)); }
.prose { max-width: 72ch; }
h1, h2, h3 { font-family: var(--display); text-wrap: balance; line-height: 1.2; margin: 0; overflow-wrap: anywhere; }
h1 { font-size: 1.9rem; letter-spacing: -0.01em; } h2 { font-size: 1.45rem; } h3 { font-size: 1.12rem; }
a { color: var(--accent); } a:focus-visible, button:focus-visible, summary:focus-visible, .tw:focus-visible { outline: 2px solid var(--accent); outline-offset: 2px; }
code, pre, .mono { font-family: var(--mono); font-size: 0.86em; }
p code, dd code, .def code, h3 code { background: var(--sunk); padding: 0.05em 0.3em; border-radius: 3px; overflow-wrap: anywhere; }
[id] { scroll-margin-top: calc(var(--navh) + env(safe-area-inset-top, 0px) + 12px); }
nav.top { position: sticky; top: env(safe-area-inset-top, 0px); z-index: 5; background: var(--panel); border-bottom: 1px solid var(--line); }
nav.top .wrap { display: flex; gap: 20px; align-items: center; height: var(--navh); overflow-x: auto; white-space: nowrap; }
nav.top b { font-family: var(--display); font-weight: 600; margin-right: auto; }
nav.top a { text-decoration: none; font-weight: 500; font-size: 0.92rem; }
header.intro, ol.opts, .blk, dl.cs, .opt .body, ul.commits { grid-template-columns: minmax(0, 1fr); }
header.intro { padding-block: 36px 20px; display: grid; gap: 12px; }
.eyebrow { font: 500 0.78rem var(--mono); letter-spacing: 0.02em; color: var(--muted); margin: 0; overflow-wrap: anywhere; }
.totals { display: flex; flex-wrap: wrap; gap: 8px 28px; margin: 4px 0 0; padding: 0; list-style: none; }
.totals li { display: grid; } .totals b { font: 600 1.25rem var(--mono); font-variant-numeric: tabular-nums; }
.totals .lbl { font-size: 0.8rem; color: var(--muted); }
.totals a.tot { display: grid; color: var(--fg); text-decoration: none; border-bottom: 1px dashed currentColor; }
.totals a.tot:hover .lbl { color: var(--accent); }
section.part { padding-block: 28px; border-top: 1px solid var(--line); }
section.part > .wrap > h2 { margin-bottom: 6px; } .lede { color: var(--muted); margin: 0 0 18px; }
ol.opts { list-style: none; margin: 0; padding: 0; display: grid; gap: 0; }
.opt { display: grid; grid-template-columns: 3.2rem minmax(0, 1fr); gap: 4px 12px; padding-block: 20px; border-bottom: 1px solid var(--line); }
.opt .no { font: 600 1.3rem/1.2 var(--mono); color: var(--accent); }
.opt .body { display: grid; gap: 8px; min-width: 0; }
.meta { font-size: 0.85rem; color: var(--muted); display: flex; flex-wrap: wrap; gap: 4px 14px; }
dl.cs { margin: 0; display: grid; gap: 2px 0; } dl.cs dt { font: 600 0.72rem var(--mono); letter-spacing: 0.07em; text-transform: uppercase; color: var(--muted); margin-top: 6px; }
dl.cs dd { margin: 0; max-width: 78ch; } dl.cs p { margin: 0 0 6px; }
.facts { display: flex; flex-wrap: wrap; gap: 6px 22px; align-items: baseline; font-size: 0.9rem; }
.lines, .speed { text-decoration: none; font-variant-numeric: tabular-nums; border-bottom: 1px dashed currentColor; }
.lines { color: var(--fg); } .speed { color: var(--fg); }
.add { color: var(--add); } .del { color: var(--del); }
b.up { color: var(--add); } b.down { color: var(--del); } b.noise { color: var(--muted); font-weight: 400; }
.def, .pending { color: var(--muted); font-size: 0.82rem; } .pending { font-style: italic; }
.pend { color: var(--muted); font-style: italic; }
/* code changes */
.blk { padding-block: 22px 26px; border-bottom: 1px solid var(--line); display: grid; gap: 12px; }
.blk h3 a { color: inherit; text-decoration: none; } .blk h3 .no { font-family: var(--mono); color: var(--accent); margin-right: 8px; }
ul.commits { list-style: none; margin: 0; padding: 0; display: grid; gap: 2px; }
ul.commits summary { cursor: pointer; padding: 3px 0; display: flex; gap: 8px; align-items: baseline; }
ul.commits summary .s { min-width: 0; flex: 1; overflow-wrap: anywhere; }
ul.commits pre { margin: 4px 0 10px 1.2rem; padding: 10px 12px; background: var(--sunk); border-radius: 4px; white-space: pre-wrap; overflow-wrap: anywhere; font-size: 0.8rem; }
.kind { font: 600 0.68rem/1.5 var(--mono); letter-spacing: 0.04em; text-transform: uppercase; padding: 0 6px; border-radius: 3px; border: 1px solid var(--line); color: var(--muted); white-space: nowrap; }
.kind.optimization { background: var(--accentbg); color: var(--accent); border-color: transparent; }
.kind.fix { background: var(--warnbg); color: var(--warn); border-color: transparent; }
.cv { display: grid; grid-template-columns: minmax(260px, 380px) minmax(0, 1fr); gap: 12px; align-items: start; }
.tree { background: var(--panel); border: 1px solid var(--line); border-radius: 6px; padding: 6px; max-height: 75vh; overflow: auto; font-size: 0.82rem; }
.tree ul { list-style: none; margin: 0; padding: 0 0 0 12px; } .tree > ul { padding: 0; }
.tree summary { cursor: pointer; display: flex; gap: 6px; padding: 2px 4px; border-radius: 3px; }
.tree summary .dn { font-family: var(--mono); color: var(--muted); overflow-wrap: anywhere; min-width: 0; flex: 1; }
.tree .ct { margin-left: auto; flex-shrink: 0; display: flex; gap: 5px; font: 0.75rem var(--mono); white-space: nowrap; font-variant-numeric: tabular-nums; }
.tree .st { color: var(--warn); }
button.f { all: unset; box-sizing: border-box; cursor: pointer; display: flex; gap: 6px; width: 100%; padding: 2px 4px; border-radius: 3px; }
button.f .fn { font-family: var(--mono); white-space: nowrap; overflow: hidden; text-overflow: ellipsis; min-width: 0; flex: 1; }
.wt { font-size: 0.86em; opacity: 0.62; font-weight: 400; } .hc { font: 400 0.8rem var(--mono); margin-left: 10px; white-space: nowrap; }
button.f:hover, .tree summary:hover { background: var(--sunk); }
button.f[aria-current] { background: var(--accentbg); box-shadow: inset 2px 0 0 var(--accent); }
button.f:focus-visible { outline: 2px solid var(--accent); }
.dv { background: var(--panel); border: 1px solid var(--line); border-radius: 6px; min-width: 0; overflow: hidden; }
.dvh { display: grid; gap: 4px; padding: 8px 12px; border-bottom: 1px solid var(--line); background: var(--sunk); }
.dvh .row { display: flex; flex-wrap: wrap; gap: 6px 14px; align-items: baseline; }
.dvh .path { font: 600 0.82rem var(--mono); overflow-wrap: anywhere; min-width: 0; flex: 1; }
.dvh .sum { font-size: 0.86rem; margin: 0; } .dvh .sum:empty { display: none; }
.dvh .sum ul { margin: 2px 0 0; padding-left: 1.1rem; display: grid; gap: 2px; max-height: 9.5em; overflow: auto; }
.sum code { background: var(--panel); padding: 0.05em 0.3em; border-radius: 3px; overflow-wrap: anywhere; }
.modes { display: inline-flex; border: 1px solid var(--line); border-radius: 4px; overflow: hidden; }
.modes button { all: unset; cursor: pointer; padding: 1px 8px; font-size: 0.76rem; }
.modes button[aria-pressed="true"] { background: var(--accent); color: var(--panel); }
.modes button:focus-visible { outline: 2px solid var(--accent); outline-offset: -2px; }
.dvb { max-height: 75vh; overflow: auto; }
.dvb .hint { padding: 28px 16px; color: var(--muted); margin: 0; }
table.diff { border-collapse: collapse; width: 100%; table-layout: fixed; font: 0.78rem/1.45 var(--mono); }
table.diff td { padding: 0 6px; vertical-align: top; }
table.diff td.ln { width: 3.4em; text-align: right; color: var(--muted); user-select: none; font-variant-numeric: tabular-nums; }
table.diff td.sg { width: 1.1em; text-align: center; user-select: none; padding: 0; }
table.diff td.cd { white-space: pre-wrap; overflow-wrap: anywhere; tab-size: 4; }
table.diff.split td.cd + td.ln { border-left: 1px solid var(--line); }
table.diff .d { background: var(--delbg); } table.diff .d.sg, table.diff td.ln.d { background: var(--delln); color: var(--del); }
table.diff .i { background: var(--addbg); } table.diff .i.sg, table.diff td.ln.i { background: var(--addln); color: var(--add); }
table.diff .x { background: var(--sunk); }
table.diff tr.fold td { padding: 0; }
/* highlight.js token classes; the colours are 4.5:1 or more on the plain, added, and deleted rows */
.hljs-keyword { color: var(--tk); } .hljs-string, .hljs-code { color: var(--ts); }
.hljs-number, .hljs-literal, .hljs-symbol, .hljs-bullet { color: var(--tn); } .hljs-comment { color: var(--tc); font-style: italic; }
.hljs-type, .hljs-built_in { color: var(--tt); } .hljs-title.function_ { color: var(--tf); } .hljs-meta { color: var(--tm); } .hljs-strong, .hljs-section { font-weight: 600; }
table.diff tr.fold button { all: unset; box-sizing: border-box; cursor: pointer; display: block; width: 100%; padding: 3px 10px; background: var(--accentbg); color: var(--accent); font: 0.76rem var(--sans); }
table.diff tr.fold button:focus-visible { outline: 2px solid var(--accent); outline-offset: -2px; }
/* table */
button.tg, button.tgall { all: unset; cursor: pointer; } button.tg:focus-visible, button.tgall:focus-visible { outline: 2px solid var(--accent); }
button.tg::before { content: "▸"; display: inline-block; width: 1.1em; color: var(--accent); } button.tg[aria-expanded="true"]::before { content: "▾"; }
button.tgall { margin: 0 0 8px; padding: 2px 10px; border: 1px solid var(--line); border-radius: 4px; font-size: 0.8rem; background: var(--panel); }
table.bt tr.gr th, table.bt tr.gr td { background: var(--sunk); font-weight: 600; } table.bt tr.gr td.up { background: var(--addbg); } table.bt tr.gr td.down { background: var(--delbg); }
table.bt tr.exr th { font-weight: 400; padding-left: 26px; }
table.bt td.noise { color: var(--muted); } table.bt th.kc .sub { white-space: normal; max-width: 36ch; } table.bt td.lg { text-align: left; font-family: var(--sans); }
table.bt.sm th, table.bt.sm td { text-align: left; } table.bt.sm tr.all th, table.bt.sm tr.all td { background: var(--sunk); font-weight: 600; }
table.bt td.ms details ul { margin: 4px 0 0; padding-left: 1rem; white-space: normal; max-width: 60ch; font-family: var(--sans); } table.bt td.ms summary { cursor: pointer; }
.summary { display: grid; gap: 8px; } .summary .tw { max-height: none; justify-self: start; max-width: 100%; }
section.part h3 { margin: 22px 0 6px; } .caption details summary { cursor: pointer; }
.caption { max-width: 90ch; color: var(--muted); font-size: 0.86rem; margin: 0 0 14px; }
.caption p { margin: 0 0 6px; }
.notes { margin: 0; padding: 0; list-style: none; display: grid; gap: 4px; } .notes li { display: flex; gap: 8px; align-items: baseline; }
.notes .fl { flex-shrink: 0; } .fl.bad { background: var(--del); }
.excl { flex-basis: 100%; } .excl .fl { margin-right: 6px; } .bn { font: 0.82rem var(--mono); color: var(--muted); }
.tw { overflow: auto; max-height: 82vh; border: 1px solid var(--line); border-radius: 6px; background: var(--panel); }
table.bt { border-collapse: separate; border-spacing: 0; font-size: 0.8rem; font-variant-numeric: tabular-nums; }
table.bt th, table.bt td { padding: 5px 9px; border-bottom: 1px solid var(--line); white-space: nowrap; text-align: right; background: var(--panel); }
table.bt td { font-family: var(--mono); font-size: 0.76rem; line-height: 1.35; }
table.bt .tm { display: block; color: var(--muted); }
table.bt .sub { display: block; font: 400 0.7rem var(--mono); color: var(--muted); }
table.bt thead th { position: sticky; top: 0; z-index: 2; background: var(--sunk); vertical-align: bottom; font-family: var(--mono); }
table.bt thead th a { font-weight: 700; }
table.bt tbody th, table.bt tfoot th { position: sticky; left: 0; z-index: 1; text-align: left; font-weight: 600; border-right: 1px solid var(--line); }
table.bt th.corner { left: 0; z-index: 3; text-align: left; border-right: 1px solid var(--line); font-family: var(--sans); }
table.bt tfoot td, table.bt tfoot th { background: var(--sunk); font-weight: 600; border-bottom: 0; position: sticky; bottom: 0; z-index: 1; border-top: 1px solid var(--line); }
table.bt tfoot th { z-index: 2; }
table.bt td.na { color: var(--muted); text-align: center; }
table.bt td.up { background: var(--addbg); } table.bt td.down { background: var(--delbg); }
table.bt .mk { font-size: 0.65rem; margin-right: 4px; } table.bt td.up .mk { color: var(--add); } table.bt td.down .mk { color: var(--del); }
.fl { display: inline-block; margin-right: 4px; padding: 0 4px; border-radius: 2px; background: var(--warn); color: var(--panel); font-weight: 700; }
table.bt .hl { box-shadow: inset 0 0 0 999px var(--hl); } table.bt thead th.hl { box-shadow: inset 0 -3px 0 var(--accent), inset 0 0 0 999px var(--hl); }
@media (max-width: 760px) { .cv { grid-template-columns: minmax(0, 1fr); } .tree { max-height: 40vh; } .opt { grid-template-columns: minmax(0, 1fr); } h1 { font-size: 1.5rem; } }
@media (prefers-reduced-motion: no-preference) { html { scroll-behavior: smooth; } }
'''

JS = r'''
const cache = {};
let mode = (() => { try { return localStorage.getItem('diffMode'); } catch { return null; } })()
  || (matchMedia('(max-width: 760px)').matches ? 'unified' : 'split');
function block(id) {
  return cache[id] ??= (async () => {
    const b = atob(document.getElementById('z-' + id).textContent.trim());
    const bytes = Uint8Array.from(b, c => c.charCodeAt(0));
    const s = new Blob([bytes]).stream().pipeThrough(new DecompressionStream('deflate'));
    return JSON.parse(await new Response(s).text());
  })();
}
const el = (tag, cls, text) => { const e = document.createElement(tag); if (cls) e.className = cls; if (text != null) e.textContent = text; return e; };
const CTX = 3, MINFOLD = 6;
// Syntax highlighting (highlight.js, loaded async; without it the diff stays plain). LANG maps a file extension to a language.
const HLJS = 'https://cdnjs.cloudflare.com/ajax/libs/highlight.js/11.9.0/', HLMAX = 4e5;
const LANG = { java: 'java', R: 'r', r: 'r', c: 'c', h: 'c', md: 'markdown', fir: 'fir' };
const redraw = () => document.querySelectorAll('.blk').forEach(s => s.cur && draw(s));
// The grammars colour a token by its text alone, except that a name directly before `(` is a function (a keyword or type stays one).
function hlReady() {
  const fn = (k, id = '[A-Za-z_$][\\w$]*') => ({ scope: 'title.function', match: new RegExp(`\\b(?!(?:${k.keyword.replace(/ /g, '|')}|${k.type.replace(/ /g, '|')})\\b(?!\\.))${id}(?=\\()`) });
  const clike = (k, type, extra) => h => ({ keywords: k, contains: [h.C_LINE_COMMENT_MODE, h.C_BLOCK_COMMENT_MODE, ...extra, h.QUOTE_STRING_MODE, h.APOS_STRING_MODE,
    { scope: 'number', match: /\b(?:0[xX][\da-fA-F_]+|\d[\d_]*\.?\d*(?:[eE][-+]?\d+)?)[a-zA-Z]*/ }, { scope: 'type', match: type }, fn(k)] });
  hljs.registerLanguage('java', clike({ literal: 'true false null', type: 'boolean byte char short int long float double void',
    keyword: 'abstract assert break case catch class const continue default do else enum extends final finally for goto if implements import instanceof interface native new package private protected public return static strictfp super switch synchronized this throw throws transient try volatile while var record sealed permits yield when' },
    /\b[A-Z][A-Z\d_$]*[a-z][\w$]*/, [{ scope: 'string', begin: '"""', end: '"""' }, { scope: 'keyword', match: /\bnon-sealed\b/ }, { scope: 'meta', match: /@\w+/ }]));
  hljs.registerLanguage('c', clike({ literal: 'true false NULL', type: 'char short int long float double void signed unsigned bool _Bool',
    keyword: 'auto break case const continue default do else enum extern for goto if inline register restrict return sizeof static struct switch typedef union volatile while' },
    /\b(?:\w+_t|SEXP|Rboolean|Rsh_code|Fir_[A-Z][a-z]\w*)\b/, [{ scope: 'meta', match: /^[ \t]*#[ \t]*[a-z]+/ }]));
  const fk = { $pattern: /[\w.]+/, keyword: 'fun return goto if then else check deopt raise unreachable ld ldf st mkenv popenv force consume prom dup dyn clos in as noop',
    type: 'I L R S B V cls dots miss', literal: 'TRUE FALSE TRUE_LGL FALSE_LGL NA_LGL NA_INT NA_REAL NA_STR' };
  hljs.registerLanguage('fir', h => ({ keywords: fk,
    contains: [{ scope: 'symbol', begin: '`', end: '`', contains: [{ begin: /\\./ }] }, h.HASH_COMMENT_MODE, h.QUOTE_STRING_MODE, h.C_NUMBER_MODE,
      { scope: 'meta', match: /@\w+/ }, { scope: 'string', begin: /<(?!(?:cls|dots|miss)\b)[a-z]+(?=[ >])/, end: />/ },
      { scope: 'type', match: /\b(?:v1?|p\??)(?=\()/ }, fn(fk, '[A-Za-z_][\\w.]*')]
  }));
  for (const l of new Set(Object.values(LANG))) if (!hljs.getLanguage(l)) document.head.append(Object.assign(el('script'), { src: `${HLJS}languages/${l}.min.js`, onload: redraw }));
  redraw();
}
// One side of a file as HTML lines: highlight the whole text, then close the open spans at each line end and reopen them on the next line.
function hlLines(text, path) {
  const lang = LANG[path.split('.').pop()];
  if (!window.hljs || !lang || !hljs.getLanguage(lang) || text.length > HLMAX) return null;
  try {
    const out = [], open = []; let cur = '';
    for (const [t] of hljs.highlight(text, { language: lang, ignoreIllegals: true }).value.matchAll(/<span[^>]*>|<\/span>|\n|[^<\n]+/g)) {
      if (t === '\n') { out.push(cur + '</span>'.repeat(open.length)); cur = open.join(''); continue; }
      if (t === '</span>') open.pop(); else if (t[0] === '<') open.push(t);
      cur += t;
    }
    return out.concat(cur + '</span>'.repeat(open.length));
  } catch { return null; }
}
function renderDiff(segs, mode, path) {
  const split = mode === 'split', cols = split ? 6 : 4;
  const table = el('table', 'diff ' + mode), tb = el('tbody');
  table.append(tb);
  let a = 1, b = 1;
  const side = tags => segs.filter(([t]) => tags.includes(t)).map(s => s[1]).join('\n');
  const T = [side('ed'), side('ei')], H = T.map(t => hlLines(t, path)), P = T.map(t => t.split('\n'));
  const cd = (c, s, n) => { const td = el('td', c); if (H[s]) td.innerHTML = H[s][n - 1]; else td.textContent = P[s][n - 1]; return td; };
  const row = (...cells) => { const tr = el('tr'); for (const c of cells) tr.append(c instanceof Node ? c : el('td', c[0], c[1])); return tr; };
  const eqRows = (lines, a0, b0) => lines.map((_, k) => split
    ? row(['ln', a0 + k], ['sg', ''], cd('cd', 0, a0 + k), ['ln', b0 + k], ['sg', ''], cd('cd', 1, b0 + k))
    : row(['ln', a0 + k], ['ln', b0 + k], ['sg', ''], cd('cd', 1, b0 + k)));
  const out = [];
  const eq = lines => { out.push(...eqRows(lines, a, b)); a += lines.length; b += lines.length; };
  const fold = lines => {
    const a0 = a, b0 = b, tr = el('tr', 'fold'), td = el('td'), btn = el('button', null, `Show ${lines.length} unchanged lines (${a0}–${a0 + lines.length - 1})`);
    btn.type = 'button'; td.colSpan = cols; td.append(btn); tr.append(td);
    btn.onclick = () => tr.replaceWith(...eqRows(lines, a0, b0));
    out.push(tr); a += lines.length; b += lines.length;
  };
  for (let s = 0; s < segs.length; s++) {
    const [t, text] = segs[s], L = text.split('\n');
    if (t === 'e') {
      const head = s === 0 ? 0 : CTX, tail = s === segs.length - 1 ? 0 : CTX;
      if (L.length > head + tail + MINFOLD) { eq(L.slice(0, head)); fold(L.slice(head, L.length - tail)); eq(L.slice(L.length - tail)); }
      else eq(L);
      continue;
    }
    let D = [], I = [];
    if (t === 'd') { D = L; if (segs[s + 1]?.[0] === 'i') I = segs[++s][1].split('\n'); } else I = L;
    if (split) {
      for (let k = 0; k < Math.max(D.length, I.length); k++) {
        const l = k < D.length ? [['ln d', a + k], ['sg d', '−'], cd('cd d', 0, a + k)] : [['ln x', ''], ['sg x', ''], ['cd x', '']];
        const r = k < I.length ? [['ln i', b + k], ['sg i', '+'], cd('cd i', 1, b + k)] : [['ln x', ''], ['sg x', ''], ['cd x', '']];
        out.push(row(...l, ...r));
      }
    } else {
      D.forEach((_, k) => out.push(row(['ln d', a + k], ['ln d', ''], ['sg d', '−'], cd('cd d', 0, a + k))));
      I.forEach((_, k) => out.push(row(['ln i', ''], ['ln i', b + k], ['sg i', '+'], cd('cd i', 1, b + k))));
    }
    a += D.length; b += I.length;
  }
  if (split) table.prepend(colgroup(['ln', 'sg', 'cd', 'ln', 'sg', 'cd']));
  else table.prepend(colgroup(['ln', 'ln', 'sg', 'cd']));
  tb.append(...out);
  return table;
}
function colgroup(cls) {
  const g = el('colgroup');
  for (const c of cls) { const col = el('col'); col.style.width = c === 'ln' ? '3.6em' : c === 'sg' ? '1.3em' : 'auto'; g.append(col); }
  return g;
}
async function draw(sec) {
  const btn = sec.cur; if (!btn) return;
  const body = sec.querySelector('.dvb');
  try {
    const data = await block(sec.dataset.id);
    if (sec.cur !== btn) return;
    body.replaceChildren(renderDiff(data[btn.dataset.p], mode, btn.dataset.p));
  } catch (e) { body.replaceChildren(el('p', 'hint', 'The diff could not be decoded: ' + e.message)); }
}
function openFile(btn) {
  const sec = btn.closest('.blk');
  sec.querySelectorAll('button.f[aria-current]').forEach(x => x.removeAttribute('aria-current'));
  btn.setAttribute('aria-current', 'true');
  sec.cur = btn;
  const st = { A: 'added in this range (no file before)', D: 'deleted in this range (no file after)', R: 'renamed from ' + btn.dataset.o }[btn.dataset.st];
  sec.querySelector('.path').replaceChildren(...btn.dataset.p.split('/').flatMap((x, i, a) => i < a.length - 1 ? [x + '/', el('wbr')] : [x]));
  sec.querySelector('.cnt').innerHTML = `<span class="add">+${btn.dataset.a}</span> <span class="del">−${btn.dataset.d}</span>` + (st ? ` <span class="st">${st}</span>` : '');
  const code = t => t.split('`').map((x, i) => i % 2 ? el('code', null, x) : x), sum = sec.querySelector('.sum');
  if (!btn.dataset.sl) return sum.replaceChildren(...code(btn.dataset.s)), draw(sec);
  const ul = el('ul');
  for (const [id, lbl, t] of JSON.parse(btn.dataset.sl)) {
    const li = el('li'), a = el('a'); a.href = '#code-' + id; a.append(...code(lbl)); li.append(a, ': ', ...code(t)); ul.append(li);
  }
  sum.replaceChildren(ul);
  draw(sec);
}
function setMode(m) {
  mode = m;
  try { localStorage.setItem('diffMode', m); } catch {}
  document.querySelectorAll('.modes button').forEach(b => b.setAttribute('aria-pressed', String(b.dataset.m === m)));
  redraw();
}
document.addEventListener('click', e => {
  const f = e.target.closest('button.f'); if (f) return openFile(f);
  const m = e.target.closest('.modes button'); if (m) return setMode(m.dataset.m);
  const t = e.target.closest('button.tg');
  if (t) return expand(t.closest('tbody'), t.getAttribute('aria-expanded') !== 'true');
  const a = e.target.closest('button.tgall');
  if (a) {
    const x = a.getAttribute('aria-expanded') !== 'true';
    a.setAttribute('aria-expanded', x); a.textContent = x ? 'Hide all examples' : 'Show all examples';
    a.nextElementSibling.querySelectorAll('tbody').forEach(b => expand(b, x));
  }
});
function expand(tbody, x) {
  tbody.querySelector('button.tg')?.setAttribute('aria-expanded', x);
  tbody.querySelectorAll('tr.exr').forEach(r => r.hidden = !x);
}
setMode(mode);
function route() {
  document.querySelectorAll('table.ch .hl').forEach(x => x.classList.remove('hl'));
  const h = decodeURIComponent(location.hash.slice(1));
  if (!h.startsWith('col-')) return;
  const th = document.getElementById(h); if (!th) return;
  document.querySelectorAll(`table.ch [data-c="${th.dataset.c}"]`).forEach(x => x.classList.add('hl'));
  document.getElementById('table').scrollIntoView();
  const w = th.closest('.tw');
  w.scrollLeft = th.offsetLeft - w.querySelector('th.corner').offsetWidth - 40;
}
addEventListener('hashchange', route);
route();
window.hljs ? hlReady() : document.getElementById('hljs-js').addEventListener('load', hlReady);
'''

PAGE = '''<title>fir2c.opt Optimization Log</title>
<meta name="claude:viewport-fit-sides" content="cover">
<link rel="preconnect" href="https://fonts.googleapis.com"><link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
<link rel="stylesheet" href="https://fonts.googleapis.com/css2?family=IBM+Plex+Mono:wght@400;500;600;700&family=IBM+Plex+Sans:ital,wght@0,400;0,500;0,600;1,400&family=Space+Grotesk:wght@500;600&display=swap">
<style><!--@CSS@--></style>
<nav class="top" aria-label="Sections"><div class="wrap"><b>fir2c.opt log</b><a href="#list">List</a><a href="#code">Code changes</a><a href="#table">Speedup table</a><a href="#opt">Each optimization removed</a><a href="#key">Key categories removed</a></div></nav>
<main>
<header class="intro wrap"><!--@HEADER@--></header>
<section class="part" id="list"><div class="wrap"><h2>Optimizations</h2>
<p class="lede">In the order they were committed, then the tip. Line counts are without tests (with tests) and link to the code changes; the speedups link to the column in the speedup table.</p>
<ol class="opts"><!--@LIST@--></ol></div></section>
<section class="part" id="code"><div class="wrap"><h2>Code changes</h2>
<p class="lede">Commits and changed files of each optimization. Select a file to compare it before and after the range. Line counts are without tests (with tests); a directory with only test files or no test files shows one pair.</p>
<!--@CODE@--></div></section>
<!--@TABLE@-->
<section class="part" id="opt"><div class="wrap"><h2>Each optimization removed</h2>
<p class="lede">The tip, compiled without one individual optimization at a time (<code>OptimizationBenchmark</code>).</p><!--@OPT@--></div></section>
<section class="part" id="key"><div class="wrap"><h2>Key categories removed</h2>
<p class="lede">The tip, compiled without one key category of optimizations at a time (<code>KeyBenchmark</code>).</p><!--@KEY@--></div></section>
</main>
<script async id="hljs-js" src="https://cdnjs.cloudflare.com/ajax/libs/highlight.js/11.9.0/highlight.min.js"></script>
<script><!--@JS@--></script>
'''


def main():
    ap = argparse.ArgumentParser(description=__doc__.split('\n')[0])
    ap.add_argument('--bench', default=os.path.join(HERE, 'runs'), help='benchmark directory: <dir>/<state>/csv/bench_*.csv (default: runs)')
    ap.add_argument('--opt', default=os.path.join(HERE, 'runs-opt'), help='run of variants.sh opt (default: runs-opt)')
    ap.add_argument('--key', default=os.path.join(HERE, 'runs-key'), help='run of variants.sh key (default: runs-key)')
    ap.add_argument('--out', default=os.path.join(HERE, 'report.html'), help='output file (default: report.html)')
    ap.add_argument('--allow-empty', action='store_true', help='accept empty strings in content files')
    args = ap.parse_args()
    opts = json.load(open(os.path.join(HERE, 'skeleton.json'), encoding='utf-8'))
    RANGE = (opts[0]['pre'], opts[-1]['post'])  # the pins (see ranges.tsv)
    content = load_content(opts, args.allow_empty)
    tip = json.load(open(os.path.join(HERE, 'tip.json'), encoding='utf-8'))
    ids = [o['id'] for o in opts]
    if args.bench and not os.path.isdir(args.bench): sys.exit(f'gen.py: {args.bench} is not a directory')
    bench = load_bench(args.bench, ids) if args.bench else None
    tip_state = next((s for s in bench['states'] if s['id'] == 'tip'), None) if bench else None
    if tip_state and os.path.exists(p := os.path.join(args.bench, 'tip', 'commit')): tip['commit'] = open(p).read().strip()
    variants = {m: load_variants(getattr(args, m), m) for m in ('opt', 'key')}

    for i, o in enumerate(opts):
        c = content[o['id']]
        o['prev'] = '00-pre' if i == 0 else opts[i - 1]['id']
        o['title'] = c['title'] or f'(title pending) {o["id"]}'
        for cm in o['commits']:
            date, _, msg = git('log', '-1', '--format=%as%x00%B', cm['sha']).partition('\x00')
            cm.update(date=date.strip(), msg=msg.strip(), kind=c['commitKinds'].get(cm['sha'], ''))
        # The main commit: the first of kind optimization, else enabler, else fix, else the last commit.
        main_c = next((cm for k in ('optimization', 'enabler', 'fix') for cm in o['commits'] if cm['kind'] == k), o['commits'][-1])
        o['date'] = main_c['date']
        diffs = {}
        for f in o['files']:
            old, new = split_rename(f['path'])
            f['status'], diffs[f['path']] = file_diff(o['pre'], o['post'], new, f, old if old != new else None)
        o['blob'] = pack(diffs)

    # All changes: the end-to-end diff of the whole range, with summaries gathered from the optimizations.
    allf = []
    for l in git('diff', '--numstat', '-M', RANGE[0], RANGE[1]).splitlines():
        ad, dl, p = l.split('\t')
        old, new = split_rename(p)
        allf.append({'path': new, 'added': int(ad), 'deleted': int(dl), **({'old': old} if old != new else {})})
    diffs = {}
    for f in allf:
        f['status'], diffs[f['path']] = file_diff(RANGE[0], RANGE[1], f['path'], f, f.get('old'))
    allsumm = {f['path']: [[o['id'], f'{o["id"][:2]} {o["title"]}', content[o['id']]['files'][g['path']]]
                           for o in opts for g in o['files'] if g['path'] in (f['path'], f.get('old'))] for f in allf}

    def block(bid, heading, intro, files, summ, pre, post, blob):
        return (f'<section class="blk" id="code-{bid}" data-id="{bid}"><h3>{heading}<span class="hc">{lines(files)}</span></h3>{intro}'
                f'<div class="cv"><nav class="tree" aria-label="Changed files">{tree_html(files, summ)}</nav>'
                f'<div class="dv"><div class="dvh"><div class="row"><span class="path">No file selected</span><span class="cnt mono"></span>'
                f'<span class="modes" role="group" aria-label="Diff layout"><button type="button" data-m="split">Side by side</button>'
                f'<button type="button" data-m="unified">Unified</button></span></div><div class="sum"></div></div>'
                f'<div class="dvb"><p class="hint">Select a file in the tree to compare it before ({pre}) and after ({post}). '
                f'Hover a file, or select it, to read what changed in it.</p></div></div></div>'
                f'<script type="application/octet-stream" id="z-{bid}">{blob}</script></section>')

    n_commits = sum(len(o['commits']) for o in opts)
    header = (f'<p class="eyebrow">Branch lazy-closure-versions · {RANGE[0]}..{RANGE[1]} · 2026-11-09 to 2026-11-11</p>'
              '<h1>Optimizations to fir2c.opt</h1>'
              '<p class="prose">Each optimization below made the FIŘ-to-C output (<code>fir2c.opt</code>) faster or kept it correct '
              'while it got faster. For each one: why the code was slow, what changed, the full code change, '
              'and the change in benchmark time. Line counts read '
              '<span class="mono">+added −deleted</span> without test files, then in parentheses with them. '
              'The line total is the end-to-end change of the whole range.</p>'
              f'<ul class="totals"><li><b>{len(opts)}</b><span class="lbl">optimizations</span></li><li><b>{n_commits}</b><span class="lbl">commits</span></li>'
              f'<li><a class="tot" href="#code-all"><b>{lines(allf)}</b><span class="lbl">lines added and deleted, without tests (with tests)</span></a></li></ul>'
              + (summary_html(bench) if bench else ''))

    lst = []
    code = [block('all', 'All changes',
                  f'<p class="lede" style="margin:0">All {n_commits} commits and {len(opts)} optimizations, end to end: <code>{RANGE[0]}..{RANGE[1]}</code>. '
                  'A file\'s summary lists each optimization that changed it.</p>',
                  allf, allsumm, RANGE[0], RANGE[1], pack(diffs))]
    for o in opts:
        c, num_ = content[o['id']], o['id'][:2]
        ttl = mdi(o['title'])
        txt = lambda k: md(c[k]) if c[k] else '<p class="pend">Pending.</p>'
        lst.append(f'<li class="opt" id="opt-{o["id"]}"><span class="no">{num_}</span><div class="body"><h3>{ttl}</h3>'
                   f'<div class="meta"><span>{o["date"]}</span><code>{o["pre"]}..{o["post"]}</code>'
                   f'<span>{len(o["commits"])} commit{"s" if len(o["commits"]) > 1 else ""}</span></div>'
                   f'<dl class="cs"><dt>Cause for slowness</dt><dd>{txt("motivation")}</dd><dt>Solution</dt><dd>{txt("solution")}</dd></dl>'
                   f'<div class="facts"><a class="lines" href="#code-{o["id"]}">{lines(o["files"])} lines in {len(o["files"])} file{"s" if len(o["files"]) > 1 else ""}</a>'
                   f'{speed_html(o, bench)}</div></div></li>')
        commits = ''.join(
            f'<li><details><summary><code>{cm["sha"]}</code><span class="kind {esc(cm["kind"])}">{esc(cm["kind"] or "unclassified")}</span>'
            f'<span class="s">{esc(cm["subject"])}</span></summary><pre>{esc(cm["msg"])}</pre></details></li>' for cm in o['commits'])
        code.append(block(o['id'], f'<a href="#opt-{o["id"]}"><span class="no">{num_}</span>{ttl}</a>', f'<ul class="commits">{commits}</ul>',
                          o['files'], c['files'], o['pre'], o['post'], o['blob']))
    # The tip: the state after the chain that the timed runs use.
    tip_o = {'id': 'tip', 'prev': opts[-1]['id'], 'title': 'The tip'}
    lst.append(f'<li class="opt" id="opt-tip"><span class="no">tip</span><div class="body"><h3>The tip</h3>'
               f'<div class="meta">{f"<code>{esc(tip["commit"][:9])}</code>" if tip["commit"] else "<span>commit pending</span>"}</div>'
               f'<div class="prose">{md(tip["description"])}</div><div class="facts">{speed_html(tip_o, bench)}</div></div></li>')

    table = '<section class="part" id="table"><div class="wrap"><h2>Speedup table</h2><p class="pend">Pending: the run of <code>chain.sh</code>.</p></div></section>'
    if bench:
        table = ('<section class="part" id="table"><div class="wrap"><h2>Speedup table</h2><div class="caption">'
                 '<p>Each cell shows the GNU-R optimized bytecode (<code>bc.opt</code>) time divided by the '
                 '<code>fir2c.opt</code> time for one call in one state, and below it that time. Above 100% is faster than bc.opt. '
                 'An example row shows the median bc.opt time over all measured states below its name. The examples are in groups by category: '
                 'a category row shows the geometric mean over the examples with a valid time in that state, and below it their count. '
                 'Select a category to show its examples. The column <code>00</code> is the start of the chain; '
                 'every other column is the state after that optimization, and the column <code>tip</code> is the tip. '
                 'An absent column was not measured; a dash is a missing value. '
                 'Times are in \u00b5s below 0.1 ms and in s from 1000 ms.</p>'
                 f'<p>{mdi(tip["runNotes"])}</p>'
                 '<p>Load correction: for each state, the load factor is the geometric mean, over all benchmarks and the three GNU-R rows '
                 '(AST, bc.default, bc.opt), of the time in that state divided by the median time of that row over all states. '
                 'Only a row with a time in two states or more counts. '
                 'A cell shows the faster of the two fir2c.opt runs divided by the load factor. A tinted cell with ▲ or ▼ is more than 12% '
                 'faster or slower than the previous column (for a category row: the geometric mean of the speedups of its examples with a valid time in both states); '
                 '<b>!</b> marks a flagged result, and a red <b>!</b> a wrong benchmark value, which no statistic uses. Hover a cell for the raw time, '
                 'the bc.opt time of the same run, the load factor, and any flag.</p>'
                 + dropped_html() + notes_html(bench) + '</div>' + table_html(bench, {**{o['id']: o for o in opts}, 'tip': tip_o}) + '</div></section>')

    parts = {'CSS': CSS.replace('@@LIGHT@@', tokens(LIGHT)).replace('@@DARK@@', tokens(DARK)), 'JS': JS,
             'HEADER': header, 'LIST': ''.join(lst), 'CODE': ''.join(code), 'TABLE': table,
             'OPT': opt_html(variants['opt'], tip['commit']), 'KEY': key_html(variants['key'], tip['commit'])}
    if DROPPED: print(f'gen.py: not shown (outside the eight categories): {", ".join(sorted(DROPPED))}', file=sys.stderr)
    page = re.sub(r'<!--@(\w+)@-->', lambda m: parts.pop(m.group(1)), PAGE)
    assert not parts, parts
    assert '@@' not in page[:page.index('</style>')], 'unresolved CSS marker'
    with open(args.out, 'w', encoding='utf-8') as f: f.write(page)
    print(f'wrote {args.out} ({os.path.getsize(args.out) / 1e6:.2f} MB; bench: {args.bench or "none"})')


if __name__ == '__main__':
    main()
