# Driver for `org.prlprg.snapshot.bench.OptimizationBenchmarkQuery`.
#
# `bench.R` is prepended to this file, so `time`, `timeCall` and `cc` (load a compiled module, run
# the example's warmup, then time `call` in it) are already defined.

# The least time one sample may take. `system.time` resolves to about 10ms, and removing one
# optimization usually changes an example's time by much less than a whole call, so a single call
# would report a difference of 0 (or of one tick, which is noise) for most examples.
MIN_TIME <- 0.2

# Stop doubling the repetitions here: a call that still isn't measurable is dominated by `eval`
# overhead anyway, so `MIN_TIME` seconds of it wouldn't say much about the compiled code.
MAX_REPS <- 4096

# How many samples to take the fastest of.
SAMPLES <- 3

# How many times to load the module and take the fastest of. Two loads of the same shared object
# were observed to differ by up to 30% -- more than most optimizations are worth -- and every
# sample within one load is off by the same amount, so loading again is the only way past it.
LOADS <- 2

# `bench.R`'s `timeCall`, but repeats the call enough times to be measurable, and returns the time
# of a single call.
timeCall <- function(env) {
  # Calibrate: how many calls it takes to measure at least `MIN_TIME` seconds.
  reps <- 1
  repeat {
    fastest <- time(for (.rep in seq_len(reps)) eval(call, env))
    if (is.na(fastest) || fastest >= MIN_TIME || reps >= MAX_REPS) {
      break
    }
    reps <- reps * 2
  }

  # Then keep the fastest sample: interference (another process, a GC pause) only ever makes a
  # sample slower, so the fastest is the closest to what the code itself costs, and unlike the
  # mean it isn't dragged up by a single interrupted sample.
  if (!is.na(fastest)) {
    for (.sample in seq_len(SAMPLES - 1)) {
      fastest <- min(fastest, time(for (.rep in seq_len(reps)) eval(call, env)))
    }
  }

  fastest / reps
}

# Benchmark the compiled module in `path`, returning the time of one call in seconds (`NA` if it
# failed).
#
# `bench.R`'s `run` benchmarks every module in one call, but here a module compiled without some
# optimization may crash R, which would take every other result down with it. So Java calls this
# once per module, and passes the times back to `report`.
benchOne <- function(call, path) {
  call <<- substitute(call)
  fastest <- Inf
  for (.load in seq_len(LOADS)) {
    fastest <- min(fastest, as.numeric(unname(cc(path))))
  }
  fastest
}

# Like `benchOne`, but for the `ast`/`bc` reference rows: the plain interpreter or bytecode
# instead of a compiled module. `ast`/`bc` (from `bench.R`) use whatever `timeCall` is currently
# bound, which by now is the repeated-call version above, so these are still comparable to
# `benchOne`'s results. Unlike `benchOne`, there's no `LOADS` loop: that exists because loading a
# shared object is flaky, and sourcing a script or `eval`ing bytecode isn't.
benchOneAst <- function(call, path) {
  call <<- substitute(call)
  as.numeric(unname(ast(path)))
}

benchOneBc <- function(call, path) {
  call <<- substitute(call)
  as.numeric(unname(bc(path)))
}

# Log and return the table of results: one row per removed optimization, then (after the baseline
# rerun) the `ast`/`bc.default`/`bc.opt`/`fir2c.default` reference rows.
#
# `removed`, `loc` and `time` are parallel vectors, whose first element is the baseline with
# nothing removed; `loc.diff` and `slowdown` are relative to it. The last element (`fir2c.default`)
# is the baseline yet again, so how far its `slowdown` is from 1 is how far off any other row can
# be. The reference rows' `loc` is `NA`, since they're not FIŘ.
#
# `loc` is the number of lines across the best version of every function in the optimized FIŘ, so
# it measures how much code the removed optimization was responsible for, the way `time` measures
# how much speed.
#
# `pct.none` and `pct.bc.opt` are each row's time as a percentage of the `<none>` baseline's and
# of the `bc.opt` reference row's, so e.g. `pct.bc.opt` near 100 means an optimization (or its
# absence) is worth about as much as `bc`'s own optimizer.
report <- function(removed, loc, time) {
  baseline <- time[1]
  bcOptTime <- time[match("bc.opt", removed)]
  res <- data.frame(
    removed = removed,
    loc = loc,
    loc.diff = loc - loc[1],
    time = signif(time, 4),
    slowdown =
      if (is.na(baseline) || baseline == 0) NA else round(time / baseline, 3),
    pct.none =
      if (is.na(baseline) || baseline == 0) NA else round(100 * time / baseline, 1),
    pct.bc.opt =
      if (is.na(bcOptTime) || bcOptTime == 0) NA else round(100 * time / bcOptTime, 1)
  )

  # Log to console, biggest slowdown first, so the optimizations that matter most are on top
  # (`NA`s, from variants that didn't compile or crashed, sort last)
  print(res[order(-res$slowdown), ])

  # Return CSV in the order the optimizations were given in, which is stable between runs, so the
  # snapshot stays comparable
  csvConn <- textConnection("csv", "w")
  write.csv(res, file=csvConn)
  close(csvConn)
  csv
}
