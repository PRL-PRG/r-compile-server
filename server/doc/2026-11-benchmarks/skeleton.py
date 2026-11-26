#!/usr/bin/env python3
"""Write skeleton.json (ranges, commits, files with numstat) and one content stub per optimization."""
import json, os, subprocess
here = os.path.dirname(os.path.abspath(__file__))
REPO = subprocess.run(['git', '-C', here, 'rev-parse', '--show-toplevel'], capture_output=True, text=True, check=True).stdout.strip()
def git(*a): return subprocess.run(['git', '-C', REPO, *a], capture_output=True, text=True, check=True).stdout
# The pins: the first and last commit of ranges.tsv. State 00-pre is the parent of the first.
rows = [l.rstrip('\n').split('\t') for l in open(os.path.join(here, 'ranges.tsv'))]
chain = git('rev-list', '--reverse', f'{rows[0][2]}^..{rows[-1][3]}').split()
short = lambda s: s[:9]
pos = {short(s): i for i, s in enumerate(chain)}
opts, nxt = [], 0
for num, key, first, last, label, src in rows:
    assert pos[first] == nxt, (key, 'range does not start where the previous one ended')
    commits = chain[pos[first]:pos[last] + 1]; nxt = pos[last] + 1
    pre = short(git('rev-parse', first + '^').strip())
    files = []
    for l in git('diff', '--numstat', '-M', pre, last).splitlines():
        a, d, p = l.split('\t')
        files.append({'path': p, 'added': int(a), 'deleted': int(d)})
    opts.append({'id': f'{num}-{key}', 'campaignLabel': None if label == '-' else label, 'source': src,
                 'pre': pre, 'post': last,
                 'commits': [{'sha': short(c), 'subject': git('log', '-1', '--format=%s', c).strip()} for c in commits],
                 'files': files})
    stub = os.path.join(here, 'content', f'{num}-{key}.json')
    if not os.path.exists(stub):
        json.dump({'title': '', 'motivation': '', 'solution': '',
                   'commitKinds': {short(c): '' for c in commits},
                   'files': {f['path']: '' for f in files}}, open(stub, 'w'), indent=1, ensure_ascii=False)
assert nxt == len(chain), 'ranges do not cover the chain'
json.dump(opts, open(os.path.join(here, 'skeleton.json'), 'w'), indent=1, ensure_ascii=False)
for o in opts:
    print(o['id'], o['pre'], o['post'], len(o['commits']), 'commits', len(o['files']), 'files',
          '+%d -%d' % (sum(f['added'] for f in o['files']), sum(f['deleted'] for f in o['files'])))
