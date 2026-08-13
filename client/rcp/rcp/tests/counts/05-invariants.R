source("helpers.R")

# Properties that must hold of the counter vector itself, and of the compiled
# code that writes to it, regardless of which case produced the counts.

rcp_count_enable()

# --- the vector -------------------------------------------------------------
#
# The counters live directly in this R vector and the compiled code writes into
# its data through pointers baked in at compile time (compile.c,
# rcp_ensure_counts), so its shape is part of the contract: one integer slot per
# opcode, in opcode order, named.

counts <- rcp_get_counts()

.expect("vector.is.integer", typeof(counts), "integer")
.expect("vector.has.one.slot.per.opcode", length(counts), length(.OPNAMES))
.expect_true("vector.is.named", !is.null(names(counts)))

# The names are rcp's own opcode table (src/shared/opcodes.c). It has to agree,
# opcode for opcode and in order, with the table R's compiler emits from --
# every count in this suite is attributed by *index*, so a table that drifted
# by one would silently blame the neighbouring opcode for everything.
.expect("opcode.table.matches.R", names(counts), .OPNAMES)
.expect_true("opcode.names.are.unique", !anyDuplicated(names(counts)))

.expect_true("counts.have.no.NA", !anyNA(counts))

# --- attribution ------------------------------------------------------------
#
# Every case elsewhere compares the whole vector, which pins attribution down
# exactly. This is the direct version: a handful of bodies chosen so that each
# contains a distinctive opcode, and the set of opcodes that moved must be
# exactly the set the bytecode contains.

attribution <- list(
  add = quote(function(x) x + 1),
  mul = quote(function(x) x * 2),
  div = quote(function(x) x / 2),
  expt = quote(function(x) x^2),
  cmp = quote(function(x) x > 1),
  not = quote(function(x) !x),
  colon = quote(function(n) 1:n),
  call = quote(function(x) length(x))
)

for (nm in names(attribution)) {
  d <- .decode(eval(attribution[[nm]]))
  r <- .run(attribution[[nm]], list(list(2)), name = paste0("attr_", nm))
  .expect(paste0("attribution.", nm),
          names(r$counts)[r$counts > 0L], names(which(.hist(d) > 0L)))
  .expect_true(paste0("attribution.", nm, ".no.strays"),
               all(r$counts[.hist(d) == 0L] == 0L))
}

# Opcodes that cannot occur in valid bytecode never move.
.expect("bcmismatch.never.counted", rcp_get_counts()[["BCMISMATCH_OP"]], 0L)

# --- recursion --------------------------------------------------------------
#
# A self-recursive function is the same compiled body running many times, and
# the recursive call goes through the compiled code rather than back into the
# interpreter. `fact` is a single tail-position `if`, so of the 12 calls the 11
# with n > 1 take the else-arm (condition false) and the last takes the then-arm.

local({
  d <- .decode(function(n) if (n <= 1) 1 else n * fact(n - 1))
  fact <- rcp_cmpfun(function(n) if (n <= 1) 1 else n * fact(n - 1),
                     options = list(name = "fact", optimize = 2L))
  rcp_count_reset()
  v <- fact(12)
  .expect("recursion [value]", v, 479001600)
  .expect_counts("recursion", .snapshot(),
                 .times(.model_if(d, FALSE), 11L) + .model_if(d, TRUE))
})

# --- counting does not change what the code computes ------------------------
#
# The counter plugin is code inserted in front of every instruction, so it moves
# every stencil in the function and reserves slots that the self-modifying
# stencils write around. If any of that were wrong, the compiled function would
# compute the wrong answer (or crash) rather than merely miscount -- so run a
# spread of shapes both ways and compare against the interpreter.

shapes <- list(
  arith = list(quote(function(x, y) (x + y) * (x - y) / 2), list(7, 3)),
  loop = list(quote(function(n) { s <- 0; for (i in 1:n) s <- s + i; s }),
              list(50L)),
  loop_dbl = list(quote(function(v) { s <- 0; for (x in v) s <- s + x; s }),
                  list(as.numeric(1:20))),
  loop_chr = list(quote(function(v) paste0(v, collapse = "")), list(letters)),
  nested = list(quote(function(n) {
    s <- 0
    for (i in 1:n) for (j in 1:n) s <- s + i * j
    s
  }), list(8L)),
  whileloop = list(quote(function(n) { i <- 0; while (i < n) i <- i + 2; i }),
                   list(9L)),
  branches = list(quote(function(x) if (x > 0) "pos" else if (x < 0) "neg" else "zero"),
                  list(-1)),
  switcher = list(quote(function(x) switch(x, a = "A", b = "B", "other")),
                  list("b")),
  recurse = list(quote(function(n) if (n < 2) n else Recall(n - 1) + Recall(n - 2)),
                 list(12L)),
  closure = list(quote(function(n) { g <- function(y) y^2; sum(vapply(1:n, g, 0)) }),
                 list(6L)),
  promises = list(quote(function(x) { f <- function(a, b) if (x) a else b; f(stop("no"), 7) }),
                  list(FALSE)),
  dotcall = list(quote(function(v) sum(v, na.rm = TRUE)), list(c(1, NA, 3))),
  subset = list(quote(function(v) { v[2] <- 99; v[[3]] <- 7; v }), list(1:5)),
  loopcntxt = list(quote(function(n) {
    bail <- quote(break)
    s <- 0
    for (i in 1:n) { s <- s + i; if (s > 10) eval(bail) }
    s
  }), list(20L)),
  strings = list(quote(function(s) toupper(paste(s, s))), list("ab")),
  environment = list(quote(function(x) { e <- new.env(); assign("v", x, e); get("v", e) }),
                     list(3))
)

local({
  old <- compiler::enableJIT(0)
  on.exit(compiler::enableJIT(old), add = TRUE)
  for (nm in names(shapes)) {
    fexpr <- shapes[[nm]][[1L]]
    args <- shapes[[nm]][[2L]]
    ref <- do.call(eval(fexpr), args)
    got <- do.call(rcp_cmpfun(eval(fexpr),
                              options = list(name = paste0("shape_", nm),
                                             optimize = 2L)),
                   args)
    .expect(paste0("counted.code.computes.", nm), got, ref)
  }
})

# The same functions must also count *something* -- a case that silently fell
# back to the interpreter would compute the right answer while testing nothing.
.expect_true("shapes.were.counted", sum(.snapshot()) > 0L)

# --- limits -----------------------------------------------------------------
#
# The counters are C `int`s (compile.c: an INTSXP, incremented in place by the
# _RCP_CUSTOM_COUNTER_ABS64 stencil), so an opcode executed more than 2^31 times
# wraps rather than saturating or widening. That is a real limit for long
# benchmark runs -- a hot GETVAR reaches it in a couple of minutes -- and it is
# not visible in the API, so it is documented here and checked on demand:
#
#     RCP_COUNTS_SLOW=1 make -C tests/counts test
#
# If the counters are ever widened, this check fails and should be replaced by
# the exact count.

if (nzchar(Sys.getenv("RCP_COUNTS_SLOW"))) {
  local({
    spin <- rcp_cmpfun(function(n) { i <- 0; while (i < n) i <- i + 1; i },
                       options = list(name = "spin", optimize = 2L))
    rcp_count_reset()
    spin(8e8) # 3 GETVARs per iteration: 2.4e9 > 2^31
    got <- .snapshot()[["GETVAR_OP"]]
    .expect_true("counter.wraps.at.2^31", got < 0L)
    .note(sprintf("GETVAR_OP counter wrapped to %d after 2.4e9 executions", got))
  })
} else {
  .note("counter overflow check skipped (set RCP_COUNTS_SLOW=1 to run it)")
}

.summary("05-invariants.R")
