# Report of the week 2026-11-23 (week 48)

This folder holds the page "FIŘ Copies and Speed, Week 48": copies and allocations of GNU-R and FIŘ, the speed changes of the week, the GVN experiment, the next candidates, and the open items. `facts.md` and `next.md` give the text. `data/` holds copies of the measurement files (counter, GVN, blocker rankings, timing runs). `data/site-code.tsv` is hand-written: one R line for each top copy site. `gen.py` writes `index.html` from these files only.

To regenerate, run `./copy-data.sh && python3 gen.py`. `copy-data.sh` copies the files from the scratch folder (override it with `S=<dir>`); it copies a timing run only when its `DONE` file exists, and it keeps `data/site-code.tsv`. A timing cell without data shows "Pending". `gen.py` prints each difference that it finds between the inputs to stderr and lists it under "Data notes" on the page. A file `recommendation.md` in this folder, if it exists, fills the recommendation of section 4.
