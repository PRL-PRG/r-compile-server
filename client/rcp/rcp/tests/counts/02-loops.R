source("helpers.R")

# Loops -- where the counters are both most useful and easiest to lose.
#
# Three things make a loop different from straight-line code for the counter
# plugin:
#
#   1. the body is entered by a *jump* (the STEPFOR->body edge, the while
#      back-edge), so the plugin has to sit at the instruction's entry point
#      rather than merely somewhere before its body;
#   2. STEPFOR's body is not written by its own position but by the matching
#      STARTFOR, which copies a specialized variant into the reserved slot
#      (compile.c, STEPFOR_SPECIALIZE) -- the plugin has to end up in front of
#      that slot, and the position still has to be walked so the plugins of
#      every *later* position are emitted too;
#   3. that variant is self-modifying: the first step installs the variant for
#      the sequence's type over the slot, so a counter placed inside the slot
#      would be overwritten at run time and one placed in front of it must
#      survive the rewrite.
#
# Trip counts of 0 and 1 are here because the loop edges differ there: at 0 the
# body never runs but STEPFOR still steps once and finds the sequence empty.

rcp_count_enable()

# `trips` gives the trip count of every loop in the bytecode, in bytecode order
# (outer loop first). For a case called more than once, pass a list with one
# such vector per call; the expectations add up.
for_case <- function(label, fexpr, trips, args = list(list())) {
  if (!is.list(trips)) trips <- list(trips)
  stopifnot(length(trips) == length(args))
  .check_model(label, fexpr,
               function(d) Reduce(`+`, lapply(trips, function(t) .model_loops(d, t))),
               args, env = parent.frame())
}

# --- for over an integer sequence -------------------------------------------

sum_for <- quote(function(n) { s <- 0; for (i in 1:n) s <- s + i; s })

for_case("for.n10", sum_for, 10L, list(list(10L)))
for_case("for.n1", sum_for, 1L, list(list(1L)))
for_case("for.n100", sum_for, 100L, list(list(100L)))

# Empty sequence: STARTFOR jumps straight to STEPFOR, which finds nothing and
# falls into ENDFOR. The body's counters must stay at zero and the epilogue's
# must not.
for_case("for.empty", quote(function(v) { s <- 0; for (i in v) s <- s + i; s }),
         0L, list(list(integer(0))))

# Two calls of the same compiled function: counts are additive.
for_case("for.two.calls", sum_for, list(3L, 4L), list(list(3L), list(4L)))

# --- sequence types ---------------------------------------------------------
#
# STEPFOR is specialized per sequence type and installs itself on the first
# step, so each of these takes a different variant through the same slot. The
# instruction stream is identical, so the counts must be too.

seq_for <- quote(function(v) { s <- 0; for (x in v) s <- s + 1; s })

for_case("for.altrep.compact", seq_for, 5L, list(list(1:5)))
for_case("for.int.materialized", seq_for, 5L, list(list(c(1L, 2L, 3L, 4L, 5L))))
for_case("for.double", seq_for, 5L, list(list(as.numeric(1:5))))
for_case("for.character", seq_for, 5L, list(list(letters[1:5])))
for_case("for.list", seq_for, 5L, list(list(as.list(1:5))))
for_case("for.logical", seq_for, 5L, list(list(rep(TRUE, 5L))))

# The same compiled function driven over two different sequence types: the
# second call re-installs a different specialized variant over the slot the
# first one wrote. If the counter lived inside that slot it would be destroyed
# by the rewrite; in front of it, both calls count identically.
for_case("for.variant.switch", seq_for, list(4L, 4L, 4L),
         list(list(1:4), list(as.numeric(1:4)), list(letters[1:4])))

# --- nested for -------------------------------------------------------------
#
# Trip counts are given in bytecode order, i.e. outer loop first. The inner
# loop's STARTFOR/STEPFOR run once per outer iteration.

for_case("for.nested.3x3",
         quote(function(n) { s <- 0; for (i in 1:n) for (j in 1:n) s <- s + 1; s }),
         c(3L, 3L), list(list(3L)))

for_case("for.nested.uneven",
         quote(function(n, m) { s <- 0; for (i in 1:n) for (j in 1:m) s <- s + 1; s }),
         c(2L, 5L), list(list(2L, 5L)))

# Inner loop that never runs: its STARTFOR and STEPFOR still execute once per
# outer iteration.
for_case("for.nested.empty.inner",
         quote(function(n, v) { s <- 0; for (i in 1:n) for (j in v) s <- s + 1; s }),
         c(3L, 0L), list(list(3L, integer(0))))

# --- while ------------------------------------------------------------------
#
# The condition runs once more than the body, and the back-edge GOTO runs once
# per iteration.

count_while <- quote(function(n) { i <- 0; while (i < n) i <- i + 1; i })

for_case("while.n3", count_while, 3L, list(list(3L)))
for_case("while.n0", count_while, 0L, list(list(0L)))
for_case("while.n50", count_while, 50L, list(list(50L)))

# while around a for and vice versa: the models compose.
for_case("while.around.for",
         quote(function(n, m) {
           k <- 0
           while (k < n) { for (i in 1:m) k <- k + 0; k <- k + 1 }
           k
         }),
         c(2L, 3L), list(list(2L, 3L)))

for_case("for.around.while",
         quote(function(n, m) {
           s <- 0
           for (i in 1:n) { j <- 0; while (j < m) { j <- j + 1; s <- s + 1 } }
           s
         }),
         c(2L, 3L), list(list(2L, 3L)))

# --- repeat + break ---------------------------------------------------------
#
# Not one of the modelled shapes, so the expectation is written out. The
# disassembly (optimize = 2) is
#
#     1 LDCONST 0 / 3 SETVAR s / 5 POP                     prologue, once
#     6 GETVAR s / 8 LDCONST 1 / 10 ADD / 12 SETVAR s /
#    14 POP / 15 GETVAR s / 17 LDCONST 3 / 19 GT /
#    21 BRIFNOT ->28                                       body+test, 4 times
#    28 LDNULL / 29 POP / 30 GOTO ->6                      loop back, 3 times
#    24 GOTO ->32 / 32 LDNULL / 33 POP /
#    34 GETVAR s / 36 RETURN                               break out, once
#
# with s reaching 4, so the body runs 4 times and the back-edge 3.  (26 GOTO is
# the `if`'s no-else arm and is unreachable here -- it must stay at zero.)

.check("repeat.break",
       quote(function() { s <- 0; repeat { s <- s + 1; if (s > 3) break }; s }),
       .vec(LDCONST_OP = 9L, SETVAR_OP = 5L, POP_OP = 9L, GETVAR_OP = 9L,
            ADD_OP = 4L, GT_OP = 4L, BRIFNOT_OP = 4L, LDNULL_OP = 4L,
            GOTO_OP = 4L, RETURN_OP = 1L))

# The same loop with a trip count that varies: one extra iteration costs
# exactly one pass through body, test and back-edge.
.check_delta("repeat.break.delta",
             quote(function(n) { s <- 0; repeat { s <- s + 1; if (s > n) break }; s }),
             4L, 9L,
             .vec(GETVAR_OP = 3L, LDCONST_OP = 1L, ADD_OP = 1L, SETVAR_OP = 1L,
                  POP_OP = 2L, GT_OP = 1L, BRIFNOT_OP = 1L, LDNULL_OP = 1L,
                  GOTO_OP = 1L),
             function(n) list(n))

# --- next -------------------------------------------------------------------
#
# One iteration of `for (i in 1:n) { if (i == 2) next; s <- s + i }` that does
# *not* take the `next`: the test, the `if`'s NULL value, the body, and the
# STEPFOR that starts the following iteration.

.check_delta("for.next.delta",
             quote(function(n) {
               s <- 0
               for (i in 1:n) { if (i == 2) next; s <- s + i }
               s
             }),
             5L, 12L,
             .vec(GETVAR_OP = 3L, LDCONST_OP = 1L, EQ_OP = 1L, BRIFNOT_OP = 1L,
                  LDNULL_OP = 1L, POP_OP = 2L, ADD_OP = 1L, SETVAR_OP = 1L,
                  STEPFOR_OP = 1L),
             function(n) list(n))

# `break` out of a for loop: the iterations before the break cost the same as a
# plain iteration, so raising the break threshold is linear in the same way.
.check_delta("for.break.delta",
             quote(function(n) {
               s <- 0
               for (i in 1:100) { if (i > n) break; s <- s + i }
               s
             }),
             5L, 15L,
             # GETVAR four times: `i` and `n` in the test, `s` and `i` in the body.
             .vec(GETVAR_OP = 4L, GT_OP = 1L, BRIFNOT_OP = 1L,
                  LDNULL_OP = 1L, POP_OP = 2L, ADD_OP = 1L, SETVAR_OP = 1L,
                  STEPFOR_OP = 1L),
             function(n) list(n))

# --- loops with a context ---------------------------------------------------
#
# A loop whose body can be left non-locally gets an RCNTXT, and rcp runs it
# through the Rsh_RunLoopCntxt trampoline in src/stencils-runtime.c rather than
# as a straight sequence of stencils. The counters have to survive that: the
# body's instructions are reached from inside the trampoline, and the
# siglongjmp that ends the loop re-enters the code at ENDLOOPCNTXT.

.check_delta("while.loopcntxt.delta",
             quote(function(n) {
               bail <- quote(break)
               s <- 0
               while (TRUE) { s <- s + 1; if (s > n) eval(bail) }
               s
             }),
             3L, 8L,
             # One iteration that does not bail: the `while (TRUE)` test, the
             # body, the `if` test, the `if`'s NULL value, and the back-edge.
             .vec(LDTRUE_OP = 1L, BRIFNOT_OP = 2L, GETVAR_OP = 3L,
                  LDCONST_OP = 1L, ADD_OP = 1L, SETVAR_OP = 1L, POP_OP = 2L,
                  GT_OP = 1L, LDNULL_OP = 1L, GOTO_OP = 1L),
             function(n) list(n))

.check_delta("for.loopcntxt.delta",
             quote(function(n) {
               bail <- quote(next)
               s <- 0
               for (i in 1:n) { s <- s + i; eval(bail) }
               s
             }),
             4L, 10L,
             # Each iteration ends in a non-local `next`: the CALL to eval()
             # never returns, so the POP behind it never runs, and the
             # siglongjmp lands on the loop context's entry GOTO, which does.
             #
             #   29 GETVAR s / 31 GETVAR i / 33 ADD / 35 SETVAR s / 37 POP
             #   38 GETFUN eval / 40 MAKEPROM / 42 CALL      -- longjmps
             #   27 GOTO ->45 / 45 STEPFOR                   -- resumed here
             .vec(GETVAR_OP = 2L, ADD_OP = 1L, SETVAR_OP = 1L, POP_OP = 1L,
                  GETFUN_OP = 1L, MAKEPROM_OP = 1L, CALL_OP = 1L,
                  GOTO_OP = 1L, STEPFOR_OP = 1L),
             function(n) list(n))

.summary("02-loops.R")
