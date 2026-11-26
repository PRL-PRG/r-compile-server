options(warn=1)

# read arguments if present
args <- commandArgs(TRUE)
if (length(args) > 0) {
  if (length(args) != 1) stop("Usage: eval <path>")
  path <- args[1]
}
# What `EvalQuery` defines before this (see it): the prefix of the module's C names, the port of
# the compile server its stubs ask for their versions (`NULL` for a standalone module), how many
# times to call `main`, the package of a `#? stdlib` example (`NULL` for other examples), the RNG
# seed of a `#? seed(<int>)` example (`NULL` for other examples), and optionally how many calls a
# stub runs before it requests its version, and a benchmark's call (see below).
if (!exists("prefix")) prefix <- ""
if (!exists("fir_port")) fir_port <- NULL
if (!exists("runs")) runs <- 1L
if (!exists("stdlib_pkg")) stdlib_pkg <- NULL
if (!exists("seed")) seed <- NULL
if (!exists("gc_torture")) gc_torture <- FALSE

# A module with stubs needs the `rsh` package: the runtime (which the module doesn't bring, unlike
# a standalone one, so that there's one copy) and the connection to the compile server (see
# `server/doc/lazy-versions.md`). Deterministic, so that a version's first `threshold` calls run
# the stub's fallback and every later one the compiled version, however long compiling takes.
if (!exists("threshold")) threshold <- 1L
if (!is.null(fir_port)) {
  loadNamespace("rsh")
  rsh::rsh_fir_connect("127.0.0.1", fir_port, deterministic=TRUE, threshold=threshold)
}

# Global (not local) if it has stubs: the code the server sends to replace them refers to the
# module's symbols.
dyn.load(paste0(path, "/code.so"), local=is.null(fir_port))
constantPool <- readRDS(paste0(path, "/bindings.rds"))

# Simulate runtime init from the compile client (suppress if FIŘ->C)
invisible(try(.Call("Rsh_initialize_runtime"), silent=TRUE))

# Simulate closure compile from the compile client
# (BC->C tests name the compiled function `Fir_...`)
invisible(.Call(paste0("Fir_", prefix, "fun_init_main"), constantPool))
# Define `main` in `globalenv()` so it doesn't capture the sourcing environment. A `#? stdlib`
# example's copy of a package function refers to the package's internals, so define its `main` in
# a child of the package's namespace instead. `topenv()` stops at the child, because of its name,
# so `setClass()` and the like write to it. The methods package records the classes it defines
# there as ".GlobalEnv"'s.
main_env <- globalenv()
if (!is.null(stdlib_pkg)) {
  main_env <- new.env(parent = asNamespace(stdlib_pkg))
  attr(main_env, "name") <- paste0("package:stdlib-", stdlib_pkg)
  assign(".packageName", ".GlobalEnv", main_env)
}
main <-
  eval(
    bquote(function() .Call(.(paste0("Fir_", prefix, "fun_from_r_main")), environment(), .(constantPool))),
    main_env)

# Run `f()` with a GC at each allocation if `gc_torture`. The R session is shared between
# examples, so switch the torture off also on an error.
tortured <- function(f) {
  if (!gc_torture) return(f())
  gctorture2(1)
  tryCatch(f(), finally = gctorture(FALSE))
}

# Call the compiled closure
# A seeded example gets the same random numbers in every run, so the baseline run and the compiled
# runs compute the same values. The kinds reset an `RNGkind` that an earlier example changed.
reseed <- function() {
  if (!is.null(seed)) {
    set.seed(seed, kind = "default", normal.kind = "default", sample.kind = "default")
  }
}
# A benchmark (`VersionBenchmarkQuery`, and `EvalQuery` for a `#? benchmark:` example) sets
# `bench_call` to the example's quoted `#? benchmark:` call. Then the module's main (the example's
# warmup) runs `threshold + 1` times, each in an environment that keeps what it defines, like
# `bench.R`'s `cc`. The last run is compiled, so the closures it defines are the module's functions
# (the earlier runs run main's stub, whose fallback runs the bytecode, which defines GNU-R
# closures). The call runs `runs` times in its environment.
if (!exists("bench_call")) bench_call <- NULL
bench <- NULL
if (is.null(bench_call)) {
  for (i in seq_len(runs)) {
    reseed()
    res <- tortured(main)
  }
} else {
  for (i in seq_len(threshold + 1L)) {
    reseed()
    bench_env <- new.env(parent = main_env)
    invisible(tortured(\() .Call(paste0("Fir_", prefix, "fun_from_r_main"), bench_env, constantPool)))
  }
  # Each run's wall time and CPU time (user), the module's version call counters
  # (`Fir_stats_versions_get`, `NULL` without `rsh`) before the first run and after each, and the
  # last run's value.
  bench <- list(times = numeric(runs), calls = vector("list", runs + 1L), cpu = numeric(runs))
  calls <- function() {
    all <- tryCatch(.Call("Fir_stats_versions_get"), error = \(e) NULL)
    if (is.null(all)) NULL else all[startsWith(names(all), prefix)]
  }
  bench$calls[1L] <- list(calls())
  for (i in seq_len(runs)) {
    reseed()
    time <- system.time(value <- eval(bench_call, bench_env))
    bench$times[[i]] <- time[["elapsed"]]
    bench$cpu[[i]] <- time[["user.self"]]
    bench$calls[i + 1L] <- list(calls())
  }
  bench["value"] <- list(value)
  res <- NULL
}

# Get performance counters, used by some BC->C tests (suppress if FIŘ->C)
pc <- tryCatch(.Call("Rsh_pc_get"), error = \(e) NULL)

# Get serialized feedback of all compiled closures (suppress if BC->C)
feedback <- tryCatch(.Call("Fir_serialized_feedback", constantPool), error = \(e) NULL)

# Everything the stubs asked for has to be answered before the module goes away (and before
# `EvalQuery` looks at what the server made of the module).
if (!is.null(fir_port)) {
  rsh::rsh_fir_drain()
}

dyn.unload(paste0(path, "/code.so"))

list(res, pc, feedback, bench)
