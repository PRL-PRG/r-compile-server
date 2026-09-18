source("helpers.R")

# Non-local `break` / `next` reaching a loop context, one loop form at a time.
#
# Each case routes the jump through eval(), which is what forces the compiler
# to emit STARTLOOPCNTXT (helpers.R asserts that per case) and what makes the
# jump a findcontext()/siglongjmp rather than a resolvable branch.
#
# The minimal failing case for the original copy-and-patch bug is the very
# first one below: it segfaulted, because the siglongjmp landed in the frame of
# a helper that had already returned.

# --- break -------------------------------------------------------------------

.check_all("while.break",
  quote(function() {
    bail <- quote(break)
    s <- 0
    while (TRUE) { s <- s + 1; eval(bail) }
    s
  }),
  1)

# The one-liner from the original bug report: nothing in the body but the jump,
# and the loop is infinite if the break does not take.
.check_all("while.break.only",
  quote(function() {
    bail <- quote(break)
    while (TRUE) eval(bail)
    "escaped"
  }),
  "escaped")

.check_all("repeat.break",
  quote(function() {
    bail <- quote(break)
    s <- 0
    repeat { s <- s + 1; if (s > 3) eval(bail) }
    s
  }),
  4)

.check_all("for.break",
  quote(function() {
    bail <- quote(break)
    s <- 0
    for (i in 1:10) { if (i > 4) eval(bail); s <- s + i }
    s
  }),
  10)

# `for` over a non-trivial sequence: STARTLOOPCNTXT sits after STARTFOR, so the
# loop state is on the node stack across the jump.
.check_all("for.break.character.seq",
  quote(function() {
    bail <- quote(break)
    acc <- character(0)
    for (e in c("a", "b", "c", "d")) { if (e == "c") eval(bail); acc <- c(acc, e) }
    acc
  }),
  c("a", "b"))

# --- next --------------------------------------------------------------------

.check_all("while.next",
  quote(function() {
    nx <- quote(next)
    s <- 0; i <- 0
    while (i < 6) { i <- i + 1; if (i %% 2 == 0) eval(nx); s <- s + i }
    s
  }),
  9)

.check_all("repeat.next",
  quote(function() {
    nx <- quote(next); bail <- quote(break)
    s <- 0; i <- 0
    repeat {
      i <- i + 1
      if (i > 6) eval(bail)
      if (i %% 3 == 0) eval(nx)
      s <- s + i
    }
    s
  }),
  1 + 2 + 4 + 5)

.check_all("for.next",
  quote(function() {
    nx <- quote(next)
    s <- 0
    for (i in 1:10) { if (i %% 2 == 0) eval(nx); s <- s + i }
    s
  }),
  25)

# `next` in a while loop must re-evaluate the condition, not just jump to the
# body -- so a condition with a side effect has to fire on every iteration.
.check_all("while.next.reevaluates.condition",
  quote(function() {
    nx <- quote(next)
    i <- 0; ticks <- 0; s <- 0
    while ({ ticks <- ticks + 1; i <- i + 1; i <= 6 }) {
      if (i %% 3 == 0) eval(nx)
      s <- s + i
    }
    list(s = s, ticks = ticks)
  }),
  list(s = 1 + 2 + 4 + 5, ticks = 7))

# Many jumps through one context. Each `next` re-enters the loop through the
# same landing pad; if that re-entry is not idempotent -- e.g. it consumes
# something, or costs a frame -- this is where it shows.
.check_all("next.repeated",
  quote(function(n) {
    nx <- quote(next)
    s <- 0L; i <- 0L
    while (i < n) { i <- i + 1L; if (i %% 2L == 0L) eval(nx); s <- s + i }
    s
  }),
  250000L,
  mkargs = function() list(1000L))

# Same for re-entering the loop itself over and over.
.check_all("break.repeated",
  quote(function(n) {
    bail <- quote(break)
    s <- 0L
    for (i in seq_len(n)) { while (TRUE) eval(bail); s <- s + 1L }
    s
  }),
  1000L,
  mkargs = function() list(1000L))

# --- the jump crossing more than one frame ------------------------------------
#
# `break`/`next` only ever target a loop in the frame they are evaluated in --
# raising one inside a *callee* is "no loop for break/next", not a non-local
# jump -- so the way to put extra contexts between the jump and the loop is to
# nest eval()s in the same frame.

.check_all("break.through.nested.eval",
  quote(function() {
    inner <- quote(eval(quote(break)))
    s <- 0
    while (TRUE) { s <- s + 1; if (s > 1) eval(inner) }
    s
  }),
  2)

.check_all("next.through.nested.eval",
  quote(function() {
    inner <- quote(eval(quote(next)))
    s <- 0; i <- 0
    while (i < 6) { i <- i + 1; if (i %% 2 == 0) eval(inner); s <- s + i }
    s
  }),
  9)

# The jump comes out of a `{` block with work either side of it, so the
# expression stack is non-empty at the point the context is reached.
.check_all("break.inside.block.with.stacked.work",
  quote(function() {
    bail <- quote({ 1 + 1; break })
    acc <- numeric(0)
    for (i in 1:5) { acc <- c(acc, i + { if (i > 2) eval(bail); 0 }) }
    acc
  }),
  c(1, 2))

# evalq() rather than eval(quote(...)): a different route to the same jump.
.check_all("break.via.evalq",
  quote(function() {
    s <- 0
    while (TRUE) { s <- s + 1; if (s > 2) evalq(break) }
    s
  }),
  3)

.summary("01-break-next.R")
