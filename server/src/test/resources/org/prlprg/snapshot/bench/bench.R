options(warn=1)

call <- quote(stop("unset"))

time <- function(expr) {
  tryCatch(system.time(expr)[1], error = function(e) { warning(e); NA })
}

# AST (normal evaluation)
ast <- function(path) {
  # Source file with `env`, which assigns `func` into it
  env <- new.env()
  source(path, local = env, echo = FALSE)

  # Call `func` with the benchmark arguments
  time(eval(call, env))
}

# Bytecode
bc <- function(path) {
  bc <- readRDS(path)

  # Eval bytecode with `env`, which assigns `func` into it
  env <- new.env()
  invisible(eval(bc, env))

  # Call `func` with the benchmark arguments
  time(eval(call, env))
}

# Compiled code (bc2c and fir2c, both have the same API)
cc <- function(path) {
  library(rsh)

  dyn.load(paste0(path, "/code.so"))
  constantPool <- readRDS(paste0(path, "/bindings.rds"))

  # Simulate runtime init from the compile client (suppress if FIŘ->C)
  invisible(try(.Call("Rsh_initialize_runtime"), silent=TRUE))

  # Simulate closure compile from the compile client
  invisible(.Call("Fir_fun_init_main", constantPool))

  # Call the compiled closure with env, which assigns `func` into it
  env <- new.env()
  tryCatch(.Call("Fir_fun_from_r_main", env, constantPool), error = function(e) { warning("In warmup"); warning(e) })

  # Call `func` with the benchmark arguments
  res <- time(eval(call, env))

  # Cleanup (must be after `eval`)
  dyn.unload(paste0(path, "/code.so"))

  res
}

# Log and return benchmark results.
# Each test is specified in `...`, which returns the user execution time.
run <- function(call, ...) {
  call <<- substitute(call)

  res <- data.frame(...)

  # Log to console
  print(res)

  # Return CSV
  csvConn <- textConnection("csv", "w")
  write.csv(res, file=csvConn)
  close(csvConn)
  csv
}

