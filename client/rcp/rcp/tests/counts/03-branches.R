source("helpers.R")

# Branches. The counter for an instruction has to be tied to the instruction
# actually reached, so the arm that is not taken must stay at zero however the
# jump got there -- a conditional branch, a short-circuit operator, a switch
# table, or a guard that fired.
#
# This file also pins down the one place where rcp's counts legitimately differ
# from what R's bytecode interpreter would count: rcp resolves jump chains at
# compile time (peephole_goto), so a GOTO that is only ever reached *by another
# jump* is never executed and never counted.

rcp_count_enable()

# --- if / else --------------------------------------------------------------

if_tail <- quote(function(a) if (a) 1 else 2)

.check_model("if.tail.true", if_tail, function(d) .model_if(d, TRUE),
             list(list(TRUE)))
.check_model("if.tail.false", if_tail, function(d) .model_if(d, FALSE),
             list(list(FALSE)))

if_nontail <- quote(function(a) { y <- if (a) 1 else 2; y + 0 })

.check_model("if.nontail.true", if_nontail, function(d) .model_if(d, TRUE),
             list(list(TRUE)))
.check_model("if.nontail.false", if_nontail, function(d) .model_if(d, FALSE),
             list(list(FALSE)))

# `if` with no else: the missing arm is an LDNULL the compiler generated.
if_noelse <- quote(function(a) { y <- 0; if (a) y <- 1; y })

.check_model("if.noelse.true", if_noelse, function(d) .model_if(d, TRUE),
             list(list(TRUE)))
.check_model("if.noelse.false", if_noelse, function(d) .model_if(d, FALSE),
             list(list(FALSE)))

# Both arms over two calls: the counts of the two paths add up, and every
# instruction of the body has then been counted at least once.
local({
  d <- .decode(eval(if_nontail))
  want <- .model_if(d, TRUE) + .model_if(d, FALSE)
  r <- .run(if_nontail, list(list(TRUE), list(FALSE)), name = "if_both")
  .expect_counts("if.both.arms", r$counts, want)
  .expect_true("if.both.arms.cover.body",
               all(r$counts[.hist(d) > 0L] > 0L))
})

# --- jump chains ------------------------------------------------------------
#
# `y <- if (a) { if (b) 1 else 2 } else 3` compiles to
#
#     1 GETVAR a / 3 BRIFNOT ->19
#     6 GETVAR b / 8 BRIFNOT ->15
#    11 LDCONST 1 / 13 GOTO ->17          <- inner join, jumps to another GOTO
#    15 LDCONST 2 / 17 GOTO ->21          <- outer join
#    19 LDCONST 3
#    21 SETVAR y / 23 POP / 24 GETVAR y / 26 RETURN
#
# With a and b both true the interpreter runs *two* GOTOs (13 then 17). rcp
# rewrites the jump at 13 to point straight at 21 (peephole_goto/unroll_goto),
# so the GOTO at 17 is never reached and its counter stays at zero: one GOTO is
# counted, not two. That is a property of the compiled code, not a lost
# counter -- the instruction genuinely does not execute.

nested_if <- quote(function(a, b) { y <- if (a) { if (b) 1 else 2 } else 3; y })

.check("goto.chain.elided", nested_if,
       .vec(GETVAR_OP = 3L, BRIFNOT_OP = 2L, LDCONST_OP = 1L, GOTO_OP = 1L,
            SETVAR_OP = 1L, POP_OP = 1L, RETURN_OP = 1L),
       list(list(TRUE, TRUE)))

# The same path reached by fallthrough instead: the GOTO at 17 does run.
.check("goto.reached.by.fallthrough", nested_if,
       .vec(GETVAR_OP = 3L, BRIFNOT_OP = 2L, LDCONST_OP = 1L, GOTO_OP = 1L,
            SETVAR_OP = 1L, POP_OP = 1L, RETURN_OP = 1L),
       list(list(TRUE, FALSE)))

# ...and the outer else, which reaches the join without any GOTO at all.
.check("goto.none", nested_if,
       .vec(GETVAR_OP = 2L, BRIFNOT_OP = 1L, LDCONST_OP = 1L,
            SETVAR_OP = 1L, POP_OP = 1L, RETURN_OP = 1L),
       list(list(FALSE, TRUE)))

# --- short-circuit operators ------------------------------------------------
#
#     1 GETVAR a / 3 LDCONST 0 / 5 GT / 7 AND1ST ->18
#    10 GETVAR b / 12 LDCONST 0 / 14 GT / 16 AND2ND
#    18 BRIFNOT ->24 / 21 LDCONST 1 / 23 RETURN / 24 LDCONST 2 / 26 RETURN

andand <- quote(function(a, b) if (a > 0 && b > 0) 1 else 2)

.check("and.both.evaluated", andand,
       .vec(GETVAR_OP = 2L, LDCONST_OP = 3L, GT_OP = 2L, AND1ST_OP = 1L,
            AND2ND_OP = 1L, BRIFNOT_OP = 1L, RETURN_OP = 1L),
       list(list(1, 1)))

# Short circuit: AND1ST jumps over the second operand, so nothing between it
# and the BRIFNOT is counted.
.check("and.short.circuit", andand,
       .vec(GETVAR_OP = 1L, LDCONST_OP = 2L, GT_OP = 1L, AND1ST_OP = 1L,
            BRIFNOT_OP = 1L, RETURN_OP = 1L),
       list(list(-1, 1)))

oror <- quote(function(a, b) if (a > 0 || b > 0) 1 else 2)

.check("or.short.circuit", oror,
       .vec(GETVAR_OP = 1L, LDCONST_OP = 2L, GT_OP = 1L, OR1ST_OP = 1L,
            BRIFNOT_OP = 1L, RETURN_OP = 1L),
       list(list(1, 1)))

.check("or.both.evaluated", oror,
       .vec(GETVAR_OP = 2L, LDCONST_OP = 3L, GT_OP = 2L, OR1ST_OP = 1L,
            OR2ND_OP = 1L, BRIFNOT_OP = 1L, RETURN_OP = 1L),
       list(list(-1, -1)))

# --- switch -----------------------------------------------------------------
#
# SWITCH is a computed jump into a table of arms (and is specialized by rcp,
# SWITCH_SPECIALIZE), so exactly one arm's instructions may be counted whichever
# way the table sends control.
#
#     1 GETVAR x / 3 SWITCH
#     8 LDNULL / 9 INVISIBLE / 10 RETURN     (no-match arm)
#    11 LDCONST 1 / 13 RETURN                ("a")
#    14 LDCONST 2 / 16 RETURN                ("b")
#    17 LDCONST 3 / 19 RETURN                (default)

switch_chr <- quote(function(x) switch(x, a = 1, b = 2, 3))
switch_arm <- .vec(GETVAR_OP = 1L, SWITCH_OP = 1L, LDCONST_OP = 1L,
                   RETURN_OP = 1L)

.check("switch.first.arm", switch_chr, switch_arm, list(list("a")))
.check("switch.second.arm", switch_chr, switch_arm, list(list("b")))
.check("switch.default.arm", switch_chr, switch_arm, list(list("zzz")))

# Integer switch: same table, selected positionally.
.check("switch.integer", quote(function(x) switch(x, 1, 2, 3)),
       .vec(GETVAR_OP = 1L, SWITCH_OP = 1L, LDCONST_OP = 1L, RETURN_OP = 1L),
       list(list(2L)))

# No arm matches and there is no default: the switch falls into the invisible
# NULL arm.
.check("switch.no.match", quote(function(x) switch(x, a = 1, b = 2)),
       .vec(GETVAR_OP = 1L, SWITCH_OP = 1L, LDNULL_OP = 1L, INVISIBLE_OP = 1L,
            RETURN_OP = 1L),
       list(list("zzz")))

# --- guards that fire -------------------------------------------------------
#
# BASEGUARD protects code the compiler inlined on the assumption that a base
# function still means the base function. Shadow it after compilation and the
# guard evaluates the call itself and jumps over the inlined instructions, which
# must therefore not be counted.
#
#     1 BASEGUARD ->8 / 4 GETVAR x / 6 SQRT / 8 RETURN

local({
  f <- rcp_cmpfun(function(x) sqrt(x),
                  options = list(name = "baseguard", optimize = 2L))
  sqrt <- function(z) 99 # shadows base::sqrt for the closure's environment
  rcp_count_reset()
  v <- f(4)
  .expect("baseguard.fires [value]", v, 99)
  .expect_counts("baseguard.fires", .snapshot(),
                 .vec(BASEGUARD_OP = 1L, RETURN_OP = 1L))
})

# The dispatch guard in front of an inlined `[`: with an object that has a
# method, STARTSUBSET_N takes the method's value and jumps over the inlined
# default path.

local({
  f <- rcp_cmpfun(function(x, i) x[i],
                  options = list(name = "dispatch", optimize = 2L))
  `[.rcpcounts` <- function(x, i) 42
  o <- structure(list(1, 2), class = "rcpcounts")
  rcp_count_reset()
  v <- f(o, 1L)
  .expect("dispatch.fires [value]", v, 42)
  .expect_counts("dispatch.fires", .snapshot(),
                 .vec(GETVAR_OP = 1L, STARTSUBSET_N_OP = 1L, RETURN_OP = 1L))
})

# --- errors -----------------------------------------------------------------
#
# An error unwinds out of the compiled code, so the instructions before the
# throw are counted and the ones after it are not.
#
#     1 LDCONST 1 / 3 SETVAR x / 5 POP
#     6 GETFUN stop / 8 PUSHCONSTARG / 10 CALL      <- does not return
#    ...  x + 1 / RETURN                            <- never reached

local({
  f <- rcp_cmpfun(function() { x <- 1; stop("boom"); x + 1 },
                  options = list(name = "err", optimize = 2L))
  rcp_count_reset()
  msg <- tryCatch(f(), error = function(e) conditionMessage(e))
  .expect("error.unwind [value]", msg, "boom")
  .expect_counts("error.unwind", .snapshot(),
                 .vec(LDCONST_OP = 1L, SETVAR_OP = 1L, POP_OP = 1L,
                      GETFUN_OP = 1L, PUSHCONSTARG_OP = 1L, CALL_OP = 1L))
})

.summary("03-branches.R")
