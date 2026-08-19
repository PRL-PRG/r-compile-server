# Shared helpers for the per-instruction counter suite. Sourced by every NN-*.R
# file; excluded from the Makefile's test list.
#
# What is under test. `rcp_count_enable()` makes every *subsequent*
# `rcp_cmpfun()` insert the _RCP_CUSTOM_COUNTER_ABS64 plugin stencil in front of
# each instruction's stencil body, pointing at that opcode's slot in the R
# integer vector `rcp_get_counts()` hands back (compile.c: count_instructions).
# So a count is only right if
#
#   * the plugin is emitted at *every* bytecode position, including positions
#     whose body is written by some other position (STEPFOR, filled in by its
#     STARTFOR) and positions after them;
#   * it is emitted *at* inst_start, i.e. in front of the body, so an
#     instruction reached by a jump (loop back-edge, branch target, the
#     STEPFOR->body edge) runs the counter too, not just one reached by
#     fallthrough;
#   * it lands in the slot the size pass reserved for it, so it neither
#     overwrites the instruction body nor gets overwritten by it;
#   * and it points at the slot of the opcode it precedes.
#
# Those are four different ways to be wrong and only the last one shows up as a
# count landing on the wrong opcode -- the other three show up as counts that
# are silently *missing*, which is invisible without an oracle. Hence this
# suite: every case states the exact expected count of all 129 opcodes, and the
# expectation is derived from the bytecode rather than from a previous run.
#
# The oracle. R's own compiler exposes its opcode table
# (`compiler:::Opcodes.names`, `compiler:::Opcodes.argc`), which is enough to
# decode the very bytecode rcp compiles and to model its execution:
#
#   straight-line   every instruction runs exactly once per call, so the
#                   expected vector is the static opcode histogram times the
#                   number of calls (.model_straight)
#   for / while     structured loops, modelled by walking the bytecode with a
#                   known trip count per loop, nesting included (.model_loops)
#   if / else       one arm runs, the other does not (.model_if)
#
# Anything with a shape those three do not cover (repeat/break, non-local
# break, switch, ...) gets an expectation written out by hand, with the
# derivation from the disassembly in a comment above it.
#
# Every case also checks the *value* the compiled function returns against the
# interpreter's, because the counter plugin changes code layout: the way this
# suite's first regression actually broke things was a plugin slot and an
# instruction body claiming the same bytes.

library(rcp)

# Compile promise bodies or not? Every model in this file derives its expected
# vector from the disassembly of the function under test, whose bytecode does
# not contain the promise bodies it creates -- those are separate bytecode
# objects hanging off the constant pool. So whether rcp compiles them (and
# hence counts them) changes every expectation in the suite for any case that
# passes an argument to a closure.
#
# The build default is not a constant: common.mk turns RCP_COMPILE_PROMISES on
# under DEBUG=1 and off for release. Pin it, so the suite tests the same thing
# either way rather than passing on one build and failing on the other. Cases
# that want the other setting turn it on locally and add .prom_hist() to their
# model; tests/promises/helpers.R pins the same option the other way for the
# same reason.
options(rcp.cmpfun.compile_promises = FALSE)

.results <- new.env(parent = emptyenv())
.results$pass <- 0L
.results$fail <- 0L
.results$notes <- character(0)

.fmt <- function(x) paste(deparse(x, width.cutoff = 500L), collapse = " ")

.ok <- function(label) {
  .results$pass <- .results$pass + 1L
  invisible(TRUE)
}

.bad <- function(label, msg) {
  .results$fail <- .results$fail + 1L
  cat(sprintf("FAIL [%s]\n%s\n", label, msg))
  invisible(FALSE)
}

.note <- function(msg) {
  .results$notes <- c(.results$notes, msg)
  cat("NOTE:", msg, "\n")
}

.expect <- function(label, got, expected) {
  if (identical(got, expected)) {
    .ok(label)
  } else {
    .bad(label, sprintf("  expected: %s\n  actual:   %s",
                        .fmt(expected), .fmt(got)))
  }
}

.expect_true <- function(label, x) .expect(label, isTRUE(x), TRUE)

# ---------------------------------------------------------------------------
# Opcode tables
#
# R's compiler names opcodes `GETVAR.OP`, rcp names the same opcode `GETVAR_OP`
# (src/shared/opcodes.c) and both tables are in opcode order, so the whole
# mapping is the separator. 05-invariants.R asserts that against the names rcp
# actually returns -- if the two tables ever drift apart, every count in this
# suite would be attributed to the wrong opcode, so it is checked rather than
# assumed.
# ---------------------------------------------------------------------------

.compiler_ns <- asNamespace("compiler")
.R_OPNAMES <- get("Opcodes.names", .compiler_ns)
.R_ARGC <- unlist(get("Opcodes.argc", .compiler_ns))
.OPNAMES <- sub("\\.OP$", "_OP", .R_OPNAMES)
.ARGC <- setNames(.R_ARGC, .OPNAMES)

# An all-zero count vector shaped exactly like rcp_get_counts().
.zeros <- function() {
  v <- integer(length(.OPNAMES))
  names(v) <- .OPNAMES
  v
}

# Opcodes that jump: their presence invalidates "every instruction runs exactly
# once per call".
.JUMP_OPS <- c(
  "GOTO_OP", "BRIFNOT_OP", "RETURN_OP",
  "STARTFOR_OP", "STEPFOR_OP",
  "STARTLOOPCNTXT_OP", "DOLOOPNEXT_OP", "DOLOOPBREAK_OP",
  "AND1ST_OP", "AND2ND_OP", "OR1ST_OP", "OR2ND_OP",
  "SWITCH_OP"
)

# Deliberately not in that list: the guards. BASEGUARD and the
# STARTSUBSET/STARTSUBASSIGN/STARTC family also carry a label, but they only
# take it on the *slow* path -- when the base function they inlined has been
# shadowed, or when the object dispatched to an S3 method. On the fast path they
# fall through and skip nothing, so a body containing them is still straight-line
# as long as no case shadows a base function or passes an object with a method.
# 03-branches.R covers the other side, where the guard fires and the
# instructions behind it are (correctly) never counted.

# ---------------------------------------------------------------------------
# Decoding the bytecode rcp is going to compile
#
# rcp byte-compiles with the compiler's own defaults (compile.c leaves
# BC_DEFAULT_OPTIMIZE_LEVEL undefined), so `cmpfun(f, options=list(optimize=2))`
# on this side sees the same instruction stream. Positions are 0-based indices
# into the decoded code vector *including* the leading version word, which is
# the numbering the label immediates use.
#
# The level is a global rather than an argument so a test file can switch both
# sides (the oracle's disassembly and rcp's own bytecode compilation) at once by
# assigning to `.OPTIMIZE`; level 3 is worth testing because it drops the
# BASEGUARDs, which changes the instruction stream around every inlined base
# call.
# ---------------------------------------------------------------------------

.OPTIMIZE <- 2L


# Walk one `list(.Code, code, consts)` -- what disassemble() returns, and what
# it leaves in place of every bytecode constant (a promise or closure body), so
# the same walk serves the top-level body and the bodies nested inside it.
.decode_dis <- function(dis) {
  code <- dis[[2L]]

  pos <- integer(0)
  op <- character(0)
  i <- 2L # 1-based; element 1 is the bytecode version
  while (i <= length(code)) {
    e <- code[[i]]
    if (!is.name(e))
      stop("bytecode walk desynchronised at element ", i,
           " -- Opcodes.argc disagrees with the code stream")
    nm <- as.character(e)
    pos <- c(pos, i - 1L)
    op <- c(op, nm)
    i <- i + 1L + .R_ARGC[[nm]]
  }
  list(code = code,
       consts = dis[[3L]],
       pos = pos,
       op = sub("\\.OP$", "_OP", op),
       start = pos[[1L]], # 1: element 0 of the code vector is the version word
       end = length(code)) # exclusive end of the position range
}

.decode <- function(f) {
  bc <- compiler::cmpfun(f, options = list(optimize = .OPTIMIZE))
  if (typeof(.Internal(bodyCode(bc))) != "bytecode")
    stop("the case is not byte-compilable, so rcp will not compile it either")
  # disassemble() prints its result as a side effect as well as returning it.
  d <- NULL
  invisible(utils::capture.output(d <- compiler::disassemble(bc)))
  .decode_dis(d)
}

.op_at <- function(d, p) {
  k <- match(p, d$pos)
  if (is.na(k)) stop("position ", p, " is not an instruction boundary")
  d$op[[k]]
}

# Position just past the instruction at `p` (its opcode plus immediates).
.end_at <- function(d, p) p + 1L + .ARGC[[.op_at(d, p)]]

# Immediate `k` (1-based) of the instruction at `p`.
.arg <- function(d, p, k) d$code[[p + 1L + k]]

# Static opcode histogram of the positions in [from, to).
.hist <- function(d, from = 0L, to = d$end) {
  v <- .zeros()
  sel <- d$op[d$pos >= from & d$pos < to]
  for (nm in sel) v[[nm]] <- v[[nm]] + 1L
  v
}

# Static histogram of the promise bodies the MAKEPROM_OPs in `d` create, nested
# promises included. Only meaningful with `rcp.cmpfun.compile_promises = TRUE`:
# a promise body is its own bytecode object, so unless rcp compiled it too,
# forcing it runs in bcEval and is not counted at all. The suite pins that
# option off (see the top of this file) and this helper is what a case that
# turns it back on adds to its model.
#
# Two bodies are skipped, because rcp does not compile them either:
#
#   trivial     `GETVAR x; RETURN` -- compile.c (DECOMPILE_TRIVIAL_PROMISES)
#               replaces the whole promise with the symbol rather than
#               compiling it;
#   unbytecoded a constant that disassemble() left alone (an NSE promise, whose
#               body the compiler stores as the raw LANGSXP/SYMSXP) -- compile.c
#               leaves those to the AST interpreter.
#
# The count is per *forcing*, so this is the right addend only for a case where
# every promise created is forced exactly once.
.prom_hist <- function(d, ncalls = 1L) {
  v <- .zeros()
  for (p in d$pos[d$op == "MAKEPROM_OP"]) {
    cst <- d$consts[[.arg(d, p, 1L) + 1L]] # immediates are 0-based const indices
    if (!(is.list(cst) && length(cst) > 0L &&
          identical(cst[[1L]], as.name(".Code"))))
      next
    pd <- .decode_dis(cst)
    if (identical(pd$op, c("GETVAR_OP", "RETURN_OP")))
      next
    v <- v + .hist(pd) + .prom_hist(pd)
  }
  v * as.integer(ncalls)
}

# ---------------------------------------------------------------------------
# Models: the expected count vector, derived from the bytecode
# ---------------------------------------------------------------------------

# Branch-free body: one execution of every instruction per call.
.model_straight <- function(d, ncalls = 1L) {
  branchy <- intersect(d$op, setdiff(.JUMP_OPS, "RETURN_OP"))
  if (length(branchy))
    stop("case is no longer branch-free (", paste(branchy, collapse = ", "),
         ") -- it needs a control-flow model, not .model_straight")
  if (sum(d$op == "RETURN_OP") != 1L)
    stop("case has ", sum(d$op == "RETURN_OP"), " RETURN_OPs -- more than one ",
         "means the body branches")
  .hist(d) * as.integer(ncalls)
}

# Structured loops with known trip counts.
#
# Walks [from, to) and accounts for
#
#   for    STARTFOR runs once and jumps to its STEPFOR; STEPFOR runs once per
#          iteration plus once more for the step that finds the sequence
#          exhausted; the body -- everything between STARTFOR and STEPFOR --
#          runs `n` times. Nested loops fall out of the recursion.
#   while  the back-edge GOTO identifies the loop: the condition (up to and
#          including the BRIFNOT that leaves the loop) runs n+1 times, the body
#          and the back-edge GOTO run n times.
#
# `trips` gives the trip count of each loop, in the order the loops appear in
# the bytecode. Bodies containing `break`/`next` or an `if` are not modelled --
# they get a hand-derived expectation instead.
.model_loops <- function(d, trips, ncalls = 1L) {
  trips <- as.integer(trips)
  st <- new.env(parent = emptyenv())
  st$i <- 0L
  take <- function() {
    st$i <- st$i + 1L
    if (st$i > length(trips))
      stop("more loops in the bytecode than trip counts given")
    trips[[st$i]]
  }

  # Back edges: a GOTO to an earlier position. Keyed by target, which is where
  # the loop starts.
  goto_pos <- d$pos[d$op == "GOTO_OP"]
  back <- list()
  for (g in goto_pos) {
    tgt <- .arg(d, g, 1L)
    if (tgt <= g) back[[as.character(tgt)]] <- g
  }

  # `skip` is the loop header currently being expanded: walking the condition of
  # a while starts at the back edge's target again, and without this the walker
  # would take that as a fresh loop.
  walk <- function(from, to, skip = -1L) {
    v <- .zeros()
    p <- from
    while (p < to) {
      op <- .op_at(d, p)
      g <- if (p == skip) NULL else back[[as.character(p)]]
      if (!is.null(g)) {
        # while loop starting here, back edge at `g`
        n <- take()
        gend <- .end_at(d, g)
        brif <- d$pos[d$op == "BRIFNOT_OP" & d$pos >= p & d$pos < g]
        brif <- brif[vapply(brif, function(b) .arg(d, b, 2L) == gend, logical(1))]
        if (length(brif) != 1L)
          stop("expected exactly one loop-exit BRIFNOT_OP in the while at ", p)
        cond_end <- .end_at(d, brif)
        v <- v + (n + 1L) * walk(p, cond_end, skip = p)
        v <- v + n * walk(cond_end, gend)
        p <- gend
      } else if (op == "STARTFOR_OP") {
        n <- take()
        s <- .arg(d, p, 3L)
        if (.op_at(d, s) != "STEPFOR_OP")
          stop("STARTFOR_OP at ", p, " does not point at a STEPFOR_OP")
        v[["STARTFOR_OP"]] <- v[["STARTFOR_OP"]] + 1L
        v <- v + n * walk(.end_at(d, p), s)
        v[["STEPFOR_OP"]] <- v[["STEPFOR_OP"]] + n + 1L
        p <- .end_at(d, s)
      } else {
        v[[op]] <- v[[op]] + 1L
        p <- .end_at(d, p)
      }
    }
    v
  }

  got <- walk(d$start, d$end)
  if (st$i != length(trips))
    stop("more trip counts given (", length(trips), ") than loops in the ",
         "bytecode (", st$i, ")")
  got * as.integer(ncalls)
}

# A single non-nested `if`: everything up to and including the BRIFNOT runs,
# then one arm, then the join. `taken` is the value of the condition.
#
# In tail position the compiler gives each arm its own RETURN and there is no
# join; otherwise the then-arm ends with a GOTO over the else-arm.
.model_if <- function(d, taken, ncalls = 1L) {
  brif <- d$pos[d$op == "BRIFNOT_OP"]
  if (length(brif) != 1L)
    stop("expected exactly one BRIFNOT_OP, found ", length(brif))
  els <- .arg(d, brif, 2L) # the else-arm, where BRIFNOT jumps on FALSE
  then_start <- .end_at(d, brif)
  v <- .hist(d, 0L, then_start)
  if (taken) {
    v <- v + .hist(d, then_start, els)
    # the last instruction of the then-arm is a GOTO over the else-arm iff the
    # `if` is not in tail position
    last <- max(d$pos[d$pos < els])
    if (.op_at(d, last) == "GOTO_OP")
      v <- v + .hist(d, .arg(d, last, 1L), d$end)
  } else {
    v <- v + .hist(d, els, d$end)
  }
  v * as.integer(ncalls)
}

.times <- function(v, k) v * as.integer(k)

# A hand-written expectation: .vec(GETVAR_OP = 3, POP_OP = 2) is the full
# 129-opcode vector with those two entries set and everything else zero.
.vec <- function(...) {
  v <- .zeros()
  x <- c(...)
  unknown <- setdiff(names(x), names(v))
  if (length(unknown)) stop("no such opcode: ", paste(unknown, collapse = ", "))
  v[names(x)] <- as.integer(x)
  v
}

# ---------------------------------------------------------------------------
# Running a case
# ---------------------------------------------------------------------------

# The live counter vector, copied so later execution cannot move it under us.
.snapshot <- function() {
  v <- rcp::rcp_get_counts()
  if (is.null(v)) stop("counting is not enabled")
  c(v)
}

# Compile `fexpr` (a *quoted* `function(...)`, re-evaluated here so no engine
# sees a body another engine compiled), zero the counters, then call it once per
# element of `args`. Returns the counts and the values.
#
# rcp_count_enable() must already have been called: counting is decided at
# compile time, so a function compiled before it is not instrumented at all.
.run <- function(fexpr, args = list(list()), name = "case", env = parent.frame()) {
  if (is.null(rcp::rcp_get_counts()))
    stop("rcp_count_enable() must be called before compiling the case")
  f <- rcp::rcp_cmpfun(eval(fexpr, env),
                       options = list(name = name, optimize = .OPTIMIZE))
  if (!rcp::rcp_is_compiled(f))
    stop("rcp declined to compile the case, so it counts nothing")
  rcp::rcp_count_reset()
  values <- lapply(args, function(a) do.call(f, a))
  list(counts = .snapshot(), values = values)
}

# Report a count mismatch as the opcodes that differ, not as two 129-element
# vectors.
.diff_report <- function(got, want) {
  bad <- which(got != want)
  lines <- sprintf("  %-20s expected %10d   actual %10d",
                   names(want)[bad], want[bad], got[bad])
  paste(c(sprintf("  %d of %d opcodes differ:", length(bad), length(want)),
          lines), collapse = "\n")
}

.expect_counts <- function(label, got, want) {
  if (identical(unname(got), unname(as.integer(want))) &&
      identical(names(got), names(want))) {
    .ok(label)
  } else if (!identical(names(got), names(want))) {
    .bad(label, "  count vector names do not match the opcode table")
  } else {
    .bad(label, .diff_report(got, want))
  }
}

# The full check: counts against the model, and the value against the
# interpreter (the case is evaluated as plain AST, with R's JIT off, so the
# comparison is against an engine that shares no code with rcp).
.check <- function(label, fexpr, want, args = list(list()), env = parent.frame()) {
  r <- .run(fexpr, args, name = gsub("[^A-Za-z0-9_]", "_", label), env = env)
  .expect_counts(label, r$counts, want)

  old <- compiler::enableJIT(0)
  on.exit(compiler::enableJIT(old), add = TRUE)
  ref <- eval(fexpr, env)
  expected <- lapply(args, function(a) do.call(ref, a))
  if (!identical(r$values, expected))
    .bad(paste0(label, " [value]"),
         sprintf("  expected: %s\n  actual:   %s",
                 .fmt(expected), .fmt(r$values)))
  else
    .ok(paste0(label, " [value]"))
  invisible(r)
}

# The same, with the expectation built by a model from the case's own bytecode.
.check_model <- function(label, fexpr, model, args = list(list()),
                         env = parent.frame()) {
  d <- .decode(eval(fexpr, env))
  .check(label, fexpr, model(d), args, env = env)
}

# For loop shapes the models above do not cover (`break`/`next`, non-local
# jumps): run the case at two trip counts and require the difference to be
# exactly the given per-iteration histogram times the extra iterations. This
# pins down the loop body -- the part a lost counter would silently eat -- and
# cancels the prologue/epilogue, which the other models already cover.
.check_delta <- function(label, fexpr, n1, n2, per_iter, mkargs,
                         env = parent.frame()) {
  stopifnot(n2 > n1)
  a <- .run(fexpr, list(mkargs(n1)), name = paste0(label, "_lo"), env = env)
  b <- .run(fexpr, list(mkargs(n2)), name = paste0(label, "_hi"), env = env)
  .expect_counts(label, b$counts - a$counts, .times(per_iter, n2 - n1))

  old <- compiler::enableJIT(0)
  on.exit(compiler::enableJIT(old), add = TRUE)
  ref <- eval(fexpr, env)
  .expect(paste0(label, " [value]"),
          list(a$values[[1L]], b$values[[1L]]),
          list(do.call(ref, mkargs(n1)), do.call(ref, mkargs(n2))))
  invisible(NULL)
}

.summary <- function(file) {
  cat(sprintf("\n%s: %d passed, %d failed\n", file, .results$pass, .results$fail))
  if (length(.results$notes))
    cat(sprintf("  %d note(s)\n", length(.results$notes)))
  if (.results$fail > 0L) stop(sprintf("%s: %d check(s) failed", file, .results$fail))
  invisible(TRUE)
}

# ---------------------------------------------------------------------------
# Self-check: the harness has to be able to fail, the decoder has to agree with
# the code stream, and the models have to be sensitive to the counts they
# model. Without this, a broken helper turns every case below into a tautology.
# ---------------------------------------------------------------------------

local({
  old <- compiler::enableJIT(0)
  on.exit(compiler::enableJIT(old), add = TRUE)

  # The decoder covers the code stream exactly: the last instruction ends at the
  # end of the vector, and every position is an instruction boundary.
  d <- .decode(function(x) { s <- 0; for (i in 1:x) s <- s + i; s })
  if (.end_at(d, max(d$pos)) != d$end)
    stop("harness broken: decoded instructions do not cover the code vector")
  if (sum(.hist(d)) != length(d$pos))
    stop("harness broken: histogram does not count every instruction")
  if (.op_at(d, .arg(d, d$pos[d$op == "STARTFOR_OP"], 3L)) != "STEPFOR_OP")
    stop("harness broken: label immediates are not 0-based code indices")

  # The straight-line model must refuse anything that branches...
  if (!inherits(try(.model_straight(d), silent = TRUE), "try-error"))
    stop("harness broken: .model_straight accepted a loop")
  # ...and the loop model must refuse a wrong number of trip counts.
  if (!inherits(try(.model_loops(d, c(1L, 1L)), silent = TRUE), "try-error"))
    stop("harness broken: .model_loops accepted too many trip counts")

  # The models must be sensitive to the trip count, or a lost counter inside a
  # loop body would still match.
  if (identical(.model_loops(d, 3L), .model_loops(d, 4L)))
    stop("harness broken: .model_loops ignores the trip count")

  # .expect_counts must fail on a one-opcode difference.
  n <- .results$fail
  v <- .zeros()
  w <- v
  w[["ADD_OP"]] <- 1L
  suppressWarnings(capture.output(.expect_counts("self-check", v, w)))
  if (.results$fail != n + 1L)
    stop("harness broken: .expect_counts does not fail on a difference")
  .results$fail <- n
})
