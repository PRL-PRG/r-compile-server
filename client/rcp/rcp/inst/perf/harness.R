# Benchmark harness for run-perf.sh
# Sourced into its own environment to avoid polluting the global namespace.

harness <- local({

  # Source a benchmark file, handling setwd so that relative source() calls
  # (e.g. source('random.r')) resolve correctly.
  load_benchmark <- function(bench_file) {
    bench_dir <- dirname(bench_file)
    old_wd <- setwd(bench_dir)
    on.exit(setwd(old_wd))
    source(basename(bench_file), local = FALSE)
  }

  # Run execute(param) `iterations` times and return elapsed times as a vector.
  run_benchmark <- function(param, iterations) {
    times <- numeric(iterations)
    for (i in seq_len(iterations)) {
      times[i] <- system.time(execute(param))[["elapsed"]]
    }
    times
  }

  # Get the default parameter for a benchmark's execute() function.
  # Returns NA if execute() has no default (e.g. `unused`).
  get_default_param <- function() {
    f <- formals(execute)
    if (length(f) == 0) return(NA)
    # A missing default is stored as a symbol; a real default is numeric/etc.
    if (typeof(f[[1]]) == "symbol") NA else f[[1]]
  }

  # Compile all closures in the global environment using rcp_cmpfun.
  # Returns a list with counts of compiled and failed functions.
  compile_global_funs <- function() {
    env <- globalenv()
    nms <- ls(envir = env)
    compiled <- 0L
    failed <- 0L
    for (nm in nms) {
      obj <- get(nm, envir = env)
      if (is.function(obj)) {
        tryCatch({
          print(nm)
          assign(nm, rcp_cmpfun(obj, list(name = nm, optimize = 3)), envir = env)
          compiled <- compiled + 1L
        }, error = function(e) {
          failed <<- failed + 1L
        })
      }
    }
    list(compiled = compiled, failed = failed)
  }

  # Write timing results to a CSV file.
  write_times <- function(times, output_file) {
    write.csv(data.frame(time = times), output_file, row.names = FALSE)
  }

  environment()
})
