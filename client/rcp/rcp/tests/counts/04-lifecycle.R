source("helpers.R")

# Enable / reset / disable, and what each of them does to functions compiled
# before or after the call.
#
# Counting is decided at *compile* time -- rcp_count_enable() only makes
# subsequent rcp_cmpfun() calls insert the counter plugin -- and the counters
# live in a buffer rcp maps itself, referenced from the compiled code by a
# baked-in offset, so the lifecycle has consequences that are not obvious from
# the API:
#
#   * a function compiled before the first enable is never counted, no matter
#     what happens afterwards;
#   * rcp_get_counts() returns a fresh snapshot each call -- the live counters
#     are 64-bit and have to be converted to double on the way out -- so a
#     vector fetched earlier does not move when counted code runs;
#   * disabling only makes rcp forget the counter buffer -- it is never
#     unmapped, because instrumented code still writes to it -- and re-enabling
#     maps a fresh one, so functions compiled during an earlier enabled window
#     keep incrementing a buffer nothing reads any more.
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
.expect("enable.starts.at.zero", sum(.snapshot()), 0)

for (i in 1:10) before(1)
.expect("compiled.before.enable.not.counted", sum(.snapshot()), 0)

# --- the vector itself ------------------------------------------------------

after <- rcp_cmpfun(function(x) x + 1,
                    options = list(name = "compiled_after", optimize = 2L))
d_after <- .decode(function(x) x + 1)

rcp_count_reset()
invisible(after(1))
.expect_counts("compiled.after.enable.is.counted", .snapshot(),
               .model_straight(d_after, 1L))

# rcp_get_counts() converts the live 64-bit counters into a new numeric vector
# on every call, so what it returns is already a snapshot: it does not move when
# counted code runs afterwards, and only a later call sees the new counts. Both
# halves matter -- callers rely on the value they hold staying put, and the
# suite's own .snapshot() relies on fetching afresh.
local({
  taken <- rcp_get_counts()
  n0 <- taken[["ADD_OP"]]
  for (i in 1:5) after(1)
  .expect("get.counts.is.a.snapshot", taken[["ADD_OP"]], n0)
  .expect("get.counts.refetches.the.live.counters",
          rcp_get_counts()[["ADD_OP"]], n0 + 5)
})

# Enabling again is idempotent: it must not reallocate the counter buffer
# (compiled code holds pointers into it) and must not clear the counts. The
# buffer is internal, so both are checked through what it does -- the counts
# survive, and an already-compiled function still increments the counters that
# rcp_get_counts() reports (a reallocation would leave it writing to the old
# buffer, exactly as the re-enable case further down shows).
local({
  n0 <- rcp_get_counts()[["ADD_OP"]]
  rcp_count_enable()
  .expect("enable.is.idempotent.keeps.counts",
          rcp_get_counts()[["ADD_OP"]], n0)
  after(1)
  .expect("enable.is.idempotent.same.buffer",
          rcp_get_counts()[["ADD_OP"]], n0 + 1)
})

# Reset zeroes the counters without disturbing the instrumentation.
local({
  after(1)
  .expect_true("reset.needs.something.to.clear", sum(.snapshot()) > 0L)
  rcp_count_reset()
  .expect("reset.zeroes", sum(.snapshot()), 0)
  after(1)
  .expect_counts("reset.keeps.counting", .snapshot(),
                 .model_straight(d_after, 1L))
})

# The counters survive a gc(): the buffer is rcp's own mapping, outside the R
# heap entirely, so the collector has nothing to move or free. This is the check
# that the references baked into compiled code cannot go stale under it.
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
  # plugin is part of their machine code -- and still increment the buffer rcp
  # just forgot. Nothing may crash: that buffer stays mapped for the life of the
  # process precisely so those writes stay legal.
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
  .expect("re-enable.starts.at.zero", sum(.snapshot()), 0)
  for (i in 1:7) after(1)
  .expect("re-enabled.vector.misses.old.functions", sum(.snapshot()), 0)
  for (i in 1:4) quiet(1)
  .expect("re-enabled.vector.misses.disabled.functions", sum(.snapshot()), 0)

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
