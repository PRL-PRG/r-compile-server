options(rcp.cmpfun.type_recording = TRUE)
library(rcp)

# Type recording splits recorded program points into three per-opcode groups.
# rcp_export_recording() returns a named list:
#   branch   (brifnot) : bcids, taken, not_taken
#   var_call (getvar/call): bcids, counters, types
#   fun      (getfun)  : bcids, counters, consts
#   run_count : scalar integer, number of times the function was entered
#   reflection: scalar logical, TRUE if the call frame was reflectively accessed,
#               FALSE if not, NA if the compiled object was not a closure

# ---------------------------------------------------------------------------
# Test 1: exported structure -- three named groups, each a named list.
# ---------------------------------------------------------------------------
noop <- function(x) x
noop <- rcp::rcp_cmpfun(noop, list(name = "noop"))
invisible(noop(1))

rec <- rcp::rcp_export_recording(noop)
stopifnot(is.list(rec))
stopifnot(identical(names(rec), c("branch", "var_call", "fun", "run_count", "reflection")))
stopifnot(identical(names(rec$branch), c("bcids", "taken", "not_taken")))
stopifnot(identical(names(rec$var_call), c("bcids", "counters", "types")))
stopifnot(identical(names(rec$fun), c("bcids", "counters", "consts")))
# Within each group the parallel vectors have matching length.
stopifnot(length(rec$branch$bcids) == length(rec$branch$taken))
stopifnot(length(rec$branch$bcids) == length(rec$branch$not_taken))
stopifnot(length(rec$var_call$bcids) == length(rec$var_call$counters))
stopifnot(length(rec$var_call$bcids) == length(rec$var_call$types))
stopifnot(length(rec$fun$bcids) == length(rec$fun$counters))
stopifnot(length(rec$fun$bcids) == length(rec$fun$consts))
# run_count is a scalar integer; noop ran once. reflection is FALSE (no reflection).
stopifnot(identical(rec$run_count, 1L))
stopifnot(identical(rec$reflection, FALSE))
cat("Test 1 (structure): OK\n")

# ---------------------------------------------------------------------------
# Test 2: brifnot branch counting.
# `if (x > 0)` compiles to a single BRIFNOT. The jump fires when the condition
# is false (else path), so taken = else-count and not_taken = then-count.
# This function has no user-function calls, so the fun group must be empty,
# exercising the empty-group export path.
# ---------------------------------------------------------------------------
brancher <- function(x) if (x > 0) "pos" else "nonpos"
brancher <- rcp::rcp_cmpfun(brancher, list(name = "brancher"))

for (i in 1:3) brancher(5)    # condition true  -> fall through (not taken)
for (i in 1:2) brancher(-5)   # condition false -> jump         (taken)

rec <- rcp::rcp_export_recording(brancher)
stopifnot(length(rec$branch$bcids) == 1L)
stopifnot(rec$branch$not_taken == 3L)
stopifnot(rec$branch$taken == 2L)
# No getfun in this function.
stopifnot(length(rec$fun$bcids) == 0L)
cat("Test 2 (branch counting): OK\n")

# ---------------------------------------------------------------------------
# Test 3: getvar/call counters and type bitmaps.
# Straight-line body: every getvar and the call execute exactly once per call,
# so all counters equal the number of invocations. All observed values are
# double here, so every recorded type bitmap must be non-zero.
# This function has no branch, exercising the empty branch-group export path.
# ---------------------------------------------------------------------------
target <- function(z) z * 2
adder <- function(a, b) {
  s <- a + b
  target(s)
}
adder <- rcp::rcp_cmpfun(adder, list(name = "adder"))

N <- 4L
for (i in seq_len(N)) adder(1, 2)

rec <- rcp::rcp_export_recording(adder)
stopifnot(length(rec$var_call$bcids) >= 1L)
stopifnot(all(rec$var_call$counters == N))
stopifnot(all(rec$var_call$types != 0L))
# No branch in this function.
stopifnot(length(rec$branch$bcids) == 0L)
# run_count matches the number of invocations.
stopifnot(rec$run_count == N)
stopifnot(identical(rec$reflection, FALSE))
cat("Test 3 (getvar/call): OK\n")

# ---------------------------------------------------------------------------
# Test 4: getfun monomorphic constant recording.
# `target` is looked up to the same closure on every call, so the recorded
# constant must be that closure.
# ---------------------------------------------------------------------------
stopifnot(length(rec$fun$bcids) == 1L)
stopifnot(rec$fun$counters == N)
stopifnot(identical(rec$fun$consts[[1]], target))
cat("Test 4 (getfun monomorphic const): OK\n")

# ---------------------------------------------------------------------------
# Test 5: getfun ambiguous constant recording.
# The called function is reassigned between invocations, so getfun observes
# two distinct closures and the recorded constant collapses to the unbound
# sentinel. That sentinel does not surface as a normal R function, so we treat
# either "not a function" or an access error as the expected collapsed state.
# ---------------------------------------------------------------------------
dispatch <- function(z) z
caller <- function() dispatch(1)
caller <- rcp::rcp_cmpfun(caller, list(name = "caller"))

dispatch <- function(z) z + 1
invisible(caller())
dispatch <- function(z) z - 1
invisible(caller())

rec <- rcp::rcp_export_recording(caller)
stopifnot(length(rec$fun$bcids) == 1L)
stopifnot(rec$fun$counters == 2L)
collapsed <- tryCatch(!is.function(rec$fun$consts[[1]]), error = function(e) TRUE)
stopifnot(isTRUE(collapsed))
cat("Test 5 (getfun ambiguous const): OK\n")

# Helpers used by the remaining tests.
# popcount: number of set bits in an observed-type bitmap.
popcount <- function(v) sum(as.integer(intToBits(v)))
# const_collapsed: TRUE when a recorded getfun constant is the unbound sentinel
# (ambiguous or never recorded), which does not surface as a normal function.
const_collapsed <- function(lst, i) tryCatch(!is.function(lst[[i]]), error = function(e) TRUE)

# ---------------------------------------------------------------------------
# Test 6: a function with no recorded instructions at all.
# A body that only returns a constant has no brifnot/getvar/getfun/call, so all
# three groups must be empty. Exercises the fully-empty export path (every
# group count zero) and confirms export still returns the three named groups.
# ---------------------------------------------------------------------------
konst <- function() 42
konst <- rcp::rcp_cmpfun(konst, list(name = "konst"))
invisible(konst())

rec <- rcp::rcp_export_recording(konst)
stopifnot(identical(names(rec), c("branch", "var_call", "fun", "run_count", "reflection")))
stopifnot(length(rec$branch$bcids) == 0L)
stopifnot(length(rec$branch$taken) == 0L)
stopifnot(length(rec$branch$not_taken) == 0L)
stopifnot(length(rec$var_call$bcids) == 0L)
stopifnot(length(rec$var_call$counters) == 0L)
stopifnot(length(rec$var_call$types) == 0L)
stopifnot(length(rec$fun$bcids) == 0L)
stopifnot(length(rec$fun$counters) == 0L)
stopifnot(length(rec$fun$consts) == 0L)
# The scalar summaries are still present even with no recorded instructions.
stopifnot(identical(rec$run_count, 1L))
stopifnot(identical(rec$reflection, FALSE))
cat("Test 6 (no recorded instructions): OK\n")

# ---------------------------------------------------------------------------
# Test 7: recorded instructions that are never executed.
# The function is compiled but never called, so every counter stays 0, every
# type bitmap stays 0, and the getfun constant stays the unbound sentinel.
# This guards the initialization of the last getfun slot in particular.
# ---------------------------------------------------------------------------
uncalled <- function() no_such_function()
uncalled <- rcp::rcp_cmpfun(uncalled, list(name = "uncalled"))
# deliberately never called

rec <- rcp::rcp_export_recording(uncalled)
# getfun for `no_such_function`
stopifnot(length(rec$fun$bcids) == 1L)
stopifnot(rec$fun$counters == 0L)
stopifnot(const_collapsed(rec$fun$consts, 1))
# the zero-arg call is recorded in var_call but never ran
stopifnot(length(rec$var_call$bcids) >= 1L)
stopifnot(all(rec$var_call$counters == 0L))
stopifnot(all(rec$var_call$types == 0L))
# no branch
stopifnot(length(rec$branch$bcids) == 0L)
# never entered, and the return-time reflection check never ran either.
stopifnot(rec$run_count == 0L)
stopifnot(identical(rec$reflection, FALSE))
cat("Test 7 (never-executed instructions): OK\n")

# ---------------------------------------------------------------------------
# Test 8: one-sided and never-reached branches.
# Calling only with a true condition drives not_taken up and leaves taken at 0.
# A separate, never-called function leaves both branch counters at 0.
# ---------------------------------------------------------------------------
onesided <- function(x) if (x > 0) 1 else 2
onesided <- rcp::rcp_cmpfun(onesided, list(name = "onesided"))
for (i in 1:5) onesided(7)   # always true -> always fall through

rec <- rcp::rcp_export_recording(onesided)
stopifnot(length(rec$branch$bcids) == 1L)
stopifnot(rec$branch$taken == 0L)
stopifnot(rec$branch$not_taken == 5L)

unreached <- function(x) if (x > 0) 1 else 2
unreached <- rcp::rcp_cmpfun(unreached, list(name = "unreached"))
# never called
rec <- rcp::rcp_export_recording(unreached)
stopifnot(length(rec$branch$bcids) == 1L)
stopifnot(rec$branch$taken == 0L)
stopifnot(rec$branch$not_taken == 0L)
cat("Test 8 (one-sided / never-reached branch): OK\n")

# ---------------------------------------------------------------------------
# Test 9: polymorphic getvar accumulates multiple type bits.
# The single getvar of x observes an integer, a double and a string across
# calls; the bitmap ORs their type codes, so at least two bits must be set.
# ---------------------------------------------------------------------------
idf <- function(x) x
idf <- rcp::rcp_cmpfun(idf, list(name = "idf_poly"))
invisible(idf(1L))
invisible(idf(2.5))
invisible(idf("s"))

rec <- rcp::rcp_export_recording(idf)
stopifnot(length(rec$var_call$bcids) == 1L)
stopifnot(rec$var_call$counters == 3L)
stopifnot(popcount(rec$var_call$types[1]) >= 2L)
cat("Test 9 (polymorphic type bitmap): OK\n")

# ---------------------------------------------------------------------------
# Test 10: monomorphic type stays a single bit, and re-export reflects the
# live counter buffer (later calls increase the exported counts).
# ---------------------------------------------------------------------------
mono <- function(x) x
mono <- rcp::rcp_cmpfun(mono, list(name = "mono_live"))
invisible(mono(1.5))
invisible(mono(2.5))

rec1 <- rcp::rcp_export_recording(mono)
stopifnot(rec1$var_call$counters == 2L)
stopifnot(popcount(rec1$var_call$types[1]) == 1L)   # all double -> one bit
stopifnot(rec1$run_count == 2L)

invisible(mono(3.5))
invisible(mono(4.5))
rec2 <- rcp::rcp_export_recording(mono)
stopifnot(rec2$var_call$counters == 4L)             # live buffer keeps counting
stopifnot(popcount(rec2$var_call$types[1]) == 1L)
stopifnot(rec2$run_count == 4L)                     # run_count is live too
cat("Test 10 (monomorphic type / live re-export): OK\n")

# ---------------------------------------------------------------------------
# Test 11: integrated scenario touching all three groups.
# `helper` is only called on the then-branch, so its getfun runs exactly as
# often as the condition is true; the branch counters split then/else calls.
# ---------------------------------------------------------------------------
helper <- function(z) z + 1
mixed <- function(x) if (x > 0) helper(x) else x
mixed <- rcp::rcp_cmpfun(mixed, list(name = "mixed_scn"))

A <- 4L
B <- 3L
for (i in seq_len(A)) mixed(5)    # then branch -> calls helper
for (i in seq_len(B)) mixed(-5)   # else branch

rec <- rcp::rcp_export_recording(mixed)
stopifnot(length(rec$branch$bcids) == 1L)
stopifnot(rec$branch$not_taken == A)   # condition true -> fall through to then
stopifnot(rec$branch$taken == B)       # condition false -> jump to else
stopifnot(length(rec$fun$bcids) == 1L)
stopifnot(rec$fun$counters == A)       # helper looked up only on the then path
stopifnot(identical(rec$fun$consts[[1]], helper))
cat("Test 11 (integrated scenario): OK\n")

# ---------------------------------------------------------------------------
# Test 12: exporting a function compiled without recording errors out.
# ---------------------------------------------------------------------------
old_opt <- getOption("rcp.cmpfun.type_recording")
options(rcp.cmpfun.type_recording = FALSE)
norec <- rcp::rcp_cmpfun(function(x) x, list(name = "norec_fn"))
options(rcp.cmpfun.type_recording = old_opt)

erred <- tryCatch({
  rcp::rcp_export_recording(norec)
  FALSE
}, error = function(e) TRUE)
stopifnot(isTRUE(erred))
cat("Test 12 (missing recording errors): OK\n")

# ---------------------------------------------------------------------------
# Test 13: reflection flag.
# A callee that grabs its parent frame reflectively accesses the compiled
# function's own call frame; envir.c's recordReflection then binds
# Rsh_ReflectivelyAccessed in it, which the return-time check stencil observes
# and reports as reflection = TRUE. A function that never exposes its frame
# reports FALSE.
# ---------------------------------------------------------------------------
grab_parent <- function() parent.frame()
reflected_fn <- function(x) { grab_parent(); x }
reflected_fn <- rcp::rcp_cmpfun(reflected_fn, list(name = "reflected_fn"))
invisible(reflected_fn(1))

rec <- rcp::rcp_export_recording(reflected_fn)
stopifnot(isTRUE(rec$reflection))
stopifnot(rec$run_count == 1L)

plain <- function(x) x + 1
plain <- rcp::rcp_cmpfun(plain, list(name = "plain_noref"))
invisible(plain(1))
invisible(plain(2))
rec <- rcp::rcp_export_recording(plain)
stopifnot(identical(rec$reflection, FALSE))
stopifnot(rec$run_count == 2L)
cat("Test 13 (reflection flag): OK\n")

cat("All recording tests passed\n")
