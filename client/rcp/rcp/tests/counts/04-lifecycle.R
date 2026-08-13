source("helpers.R")

# Enable / reset / disable, and what each of them does to functions compiled
# before or after the call.
#
# Counting is decided at *compile* time -- rcp_count_enable() only makes
# subsequent rcp_cmpfun() calls insert the counter plugin -- and the counters
# live in an R vector whose address is baked into the compiled code, so the
# lifecycle has consequences that are not obvious from the API:
#
#   * a function compiled before the first enable is never counted, no matter
#     what happens afterwards;
#   * the vector rcp_get_counts() returns *is* the live buffer, not a copy;
#   * disabling releases rcp's own reference to that vector, and re-enabling
#     allocates a fresh one -- so functions compiled during an earlier enabled
#     window keep incrementing the old vector, which nothing reads any more.
#
# The last one is a footgun worth pinning down: it is the difference between
# "disable stops counting" (what the name suggests) and "disable stops
# *instrumenting*" (what happens).
#
# This file must run its pre-enable checks before anything else enables
# counting, so it is the only file that may not enable at the top.

.pristine <- is.null(rcp_get_counts())

# --- before counting is ever enabled ----------------------------------------

.expect_true("fresh.get.counts.is.null", .pristine)
.expect("fresh.reset.is.noop", rcp_count_reset(), NULL)
.expect("fresh.disable.is.noop", rcp_count_disable(), NULL)
.expect_true("fresh.get.counts.still.null", is.null(rcp_get_counts()))

# A function compiled while counting is off is never instrumented: not now,
# and not after counting is switched on later.
before <- rcp_cmpfun(function(x) x + 1,
                     options = list(name = "compiled_before", optimize = 2L))
invisible(before(1))

rcp_count_enable()

.expect_true("enable.allocates.the.vector", !is.null(rcp_get_counts()))
.expect("enable.starts.at.zero", sum(.snapshot()), 0L)

for (i in 1:10) before(1)
.expect("compiled.before.enable.not.counted", sum(.snapshot()), 0L)

# --- the vector itself ------------------------------------------------------

after <- rcp_cmpfun(function(x) x + 1,
                    options = list(name = "compiled_after", optimize = 2L))
d_after <- .decode(function(x) x + 1)

rcp_count_reset()
invisible(after(1))
.expect_counts("compiled.after.enable.is.counted", .snapshot(),
               .model_straight(d_after, 1L))

# rcp_get_counts() hands back the live buffer: it keeps changing as compiled
# code runs, and c() is what makes a stable snapshot. Both halves matter --
# aliasing is documented behaviour that callers rely on, and the suite's own
# .snapshot() depends on the copy really being a copy.
local({
  live <- rcp_get_counts()
  copy <- c(rcp_get_counts())
  n0 <- live[["ADD_OP"]]
  for (i in 1:5) after(1)
  .expect("get.counts.aliases.the.live.buffer", live[["ADD_OP"]], n0 + 5L)
  .expect("copy.is.a.snapshot", copy[["ADD_OP"]], n0)
})

# Enabling again is idempotent: it must not reallocate the vector (compiled
# code holds pointers into it) and must not clear the counts.
local({
  live <- rcp_get_counts()
  n0 <- live[["ADD_OP"]]
  rcp_count_enable()
  .expect_true("enable.is.idempotent.same.vector",
               identical(live, rcp_get_counts()))
  .expect("enable.is.idempotent.keeps.counts",
          rcp_get_counts()[["ADD_OP"]], n0)
  after(1)
  .expect("enable.is.idempotent.same.buffer", live[["ADD_OP"]], n0 + 1L)
})

# Reset zeroes the counters without disturbing the instrumentation.
local({
  after(1)
  .expect_true("reset.needs.something.to.clear", sum(.snapshot()) > 0L)
  rcp_count_reset()
  .expect("reset.zeroes", sum(.snapshot()), 0L)
  after(1)
  .expect_counts("reset.keeps.counting", .snapshot(),
                 .model_straight(d_after, 1L))
})

# The counter vector survives a gc(): rcp preserves it, and every function
# compiled against it also holds a reference through its body's protection
# list. This is the check that the pointers baked into compiled code cannot go
# stale under the collector.
local({
  rcp_count_reset()
  after(1)
  gc()
  after(1)
  .expect_counts("counts.survive.gc", .snapshot(),
                 .model_straight(d_after, 2L))
})

# --- disable ----------------------------------------------------------------

local({
  rcp_count_reset()
  after(1)
  n <- .snapshot()[["ADD_OP"]]
  rcp_count_disable()
  .expect_true("disable.drops.the.vector", is.null(rcp_get_counts()))

  # Functions compiled while counting was on are still instrumented -- the
  # plugin is part of their machine code -- and still increment the vector rcp
  # just released. Nothing may crash: the vector is kept alive by the compiled
  # body that references it, released or not.
  for (i in 1:3) after(1)
  gc()
  for (i in 1:3) after(1)
  .expect("disable.calls.still.work", after(41), 42)

  # A function compiled *after* disable is not instrumented at all.
  quiet <- rcp_cmpfun(function(x) x * 2,
                      options = list(name = "compiled_disabled", optimize = 2L))
  for (i in 1:5) quiet(1)

  # Re-enabling allocates a *fresh* vector, so it starts at zero and the
  # already-compiled `after` no longer shows up in it -- its counter pointers
  # still address the old buffer.
  rcp_count_enable()
  .expect("re-enable.starts.at.zero", sum(.snapshot()), 0L)
  for (i in 1:7) after(1)
  .expect("re-enabled.vector.misses.old.functions", sum(.snapshot()), 0L)
  for (i in 1:4) quiet(1)
  .expect("re-enabled.vector.misses.disabled.functions", sum(.snapshot()), 0L)

  # Only functions compiled in the *current* enabled window are counted.
  fresh <- rcp_cmpfun(function(x) x + 1,
                      options = list(name = "compiled_reenabled", optimize = 2L))
  fresh(1)
  .expect_counts("re-enabled.counts.new.functions", .snapshot(),
                 .model_straight(d_after, 1L))
  .note(paste("rcp_count_disable() stops instrumenting, not counting:",
              "functions compiled earlier keep writing to the released",
              "vector and become invisible after a re-enable"))
})

# --- the JIT hook -----------------------------------------------------------
#
# rcp_jit_enable() compiles functions on their first calls through R's own JIT,
# which goes through the same code path, so those are counted too.

# R's JIT only compiles closures it can reach as ordinary bindings, so this one
# is deliberately at top level rather than inside local().
jitted <- function(x) x * 3 + 1

local({
  rcp_count_reset()
  invisible(rcp_jit_enable())
  on.exit(invisible(rcp_jit_disable()), add = TRUE)

  for (i in 1:40) jitted(2)
  if (!rcp_is_compiled(jitted)) {
    .note("the JIT did not compile the case; jit counting not covered")
  } else {
    got <- .snapshot()
    .expect_true("jit.compiled.functions.are.counted", got[["MUL_OP"]] > 0L)
    # The calls before the JIT kicked in ran as bytecode and are not counted,
    # so what is pinned down here is the shape of the counted calls: one MUL
    # and one ADD each, and never more counted calls than calls made.
    .expect("jit.counts.are.consistent", got[["MUL_OP"]], got[["ADD_OP"]])
    .expect_true("jit.counts.no.more.than.calls", got[["MUL_OP"]] <= 40L)
  }
})

.summary("04-lifecycle.R")
