options(warn=1)

# read arguments if present
args <- commandArgs(TRUE)
if (length(args) > 0) {
  if (length(args) != 5) stop("Usage: bench <astPath> <bcPath> <optBcPath> <firPath> <call>")
  astPath <- args[1]
  bcPath <- args[2]
  optBcPath <- args[3]
  firPath <- args[4]
  call <- parse(text = args[5])[[1]]
}

benchAst <- function(path) {
  # Source file with `env`, which assigns `func` into it
  env <- new.env()
  source(path, local = env, echo = FALSE)

  # Call `func` with the benchmark arguments
  system.time(eval(call, env))[1]
}

benchBc <- function(path) {
  bc <- readRDS(path)

  # Eval bytecode with `env`, which assigns `func` into it
  env <- new.env()
  invisible(eval(bc, env))

  # Call `func` with the benchmark arguments
  system.time(eval(call, env))[1]
}

benchFir <- function(path) {
  library(rsh)

  dyn.load(paste0(path, "/code.so"))
  constantPool <- readRDS(paste0(path, "/bindings.rds"))

  # Simulate runtime init from the compile client
  invisible(.Call("Rsh_initialize_runtime"))

  # Simulate closure compile from the compile client
  invisible(.Call("Fir_fun_init_main", constantPool))

  # Call the compiled closure with env, which assigns `func` into it
  env <- new.env()
  .Call("Fir_fun_from_r_main", env, constantPool)

  # Call `func` with the benchmark arguments
  res <- system.time(eval(call, env))[1]

  # Cleanup (must be after `eval`)
  dyn.unload(paste0(path, "/code.so"))

  res
}

res <- data.frame(
  ast = benchAst(astPath),
  bc = benchBc(bcPath),
  optBc = benchBc(optBcPath),
  fir = benchFir(firPath)
)

print(res)

csvConn <- textConnection("csv", "w")
write.csv(res, file=csvConn)
close(csvConn)
csv
