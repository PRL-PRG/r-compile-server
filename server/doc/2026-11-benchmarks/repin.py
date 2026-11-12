#!/usr/bin/env python3
"""Usage: repin.py MAP.tsv [OLD NEW]

Apply a map of old to new commits after a rewrite of the history, then run skeleton.py.

MAP.tsv has one line per commit, and maybe a header line (a line whose first field is not a sha).
OLD and NEW are the numbers of the columns of the old and the new sha (default: 1 2).
The script replaces each commit sha (9 or 40 hex digits that name a commit) in the files of this
directory: ranges.tsv (the pins), the keys and the text of content/*.json, and every other file.
It does not change runs/ (each run records the commit it measured), skeleton.json (skeleton.py
writes it again), and the root of the fix block (`blockRoot` in fixes.json, which a rebase keeps).
It changes no file if a sha in the files is not in the map.
"""
import json, os, re, subprocess, sys

HERE = os.path.dirname(os.path.abspath(__file__))
SKIP = ('runs/', 'skeleton.json', 'repin.py')
SHA = re.compile(r'(?<![0-9a-f])[0-9a-f]{9}(?:[0-9a-f]{31})?(?![0-9a-f])')


def git(*a):
    return subprocess.run(['git', '-C', HERE, *a], capture_output=True, text=True, check=True).stdout


def full(sha):
    """The full sha of a commit, or None if `sha` names no commit."""
    r = subprocess.run(['git', '-C', HERE, 'rev-parse', '-q', '--verify', sha + '^{commit}'],
                       capture_output=True, text=True)
    return r.stdout.strip() if r.returncode == 0 else None


def main():
    if len(sys.argv) not in (2, 4): sys.exit(__doc__)
    a, b = (int(x) - 1 for x in sys.argv[2:4]) if len(sys.argv) == 4 else (0, 1)
    rows = [l.rstrip('\n').split('\t') for l in open(sys.argv[1], encoding='utf-8') if l.strip()]
    rows = [r for r in rows if re.fullmatch(r'[0-9a-f]{7,40}', r[0])]
    sub = {}
    for old, new in ((r[a], r[b]) for r in rows):
        fo, fn = full(old), full(new)
        if not (fo and fn): sys.exit(f'repin.py: {old if not fo else new} names no commit')
        sub[fo[:9]], sub[fo] = fn[:9], fn
    keep = {json.load(open(os.path.join(HERE, 'fixes.json'), encoding='utf-8'))['blockRoot']}
    keep |= {full(k) for k in keep}
    files = [f for f in git('ls-files', '--cached', '--others', '--exclude-standard', '.').splitlines()
             if not f.startswith(SKIP)]
    out, missing = {}, {}
    for f in files:
        try:
            text = open(os.path.join(HERE, f), encoding='utf-8').read()
        except (UnicodeDecodeError, FileNotFoundError):
            continue
        def one(m):
            s = m.group(0)
            if s in keep: return s
            if s in sub: return sub[s]
            if full(s): missing.setdefault(s, []).append(f)
            return s
        new = SHA.sub(one, text)
        if new != text: out[f] = new
    if missing:
        sys.exit('repin.py: commits that the map does not name (no file changed):\n'
                 + '\n'.join(f'  {s} in {", ".join(sorted(set(fs)))}' for s, fs in missing.items()))
    for f, text in out.items():
        open(os.path.join(HERE, f), 'w', encoding='utf-8').write(text)
        print('repinned', f)
    subprocess.run([sys.executable, os.path.join(HERE, 'skeleton.py')], check=True)


if __name__ == '__main__':
    main()
