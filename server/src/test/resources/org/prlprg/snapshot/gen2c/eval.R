options(warn=1)

# read arguments if present
args <- commandArgs(TRUE)
if (length(args) > 0) {
  if (length(args) != 1) stop("Usage: eval <path>")
  path <- args[1]
}

library(rsh)

dyn.load(paste0(path, "/code.so"))
constantPool <- readRDS(paste0(path, "/bindings.rds"))

# Simulate runtime init from the compile client
invisible(.Call("Rsh_initialize_runtime"))

# Simulate closure compile from the compile client
invisible(.Call("Fir_fun_init_main", constantPool))
main <- function() .Call("Fir_fun_from_r_main", environment(), constantPool)

# Call the compiled closure
res <- main()

# Get performance counters, used by some BC->C tests
pc <- .Call("Rsh_pc_get")

dyn.unload(paste0(path, "/code.so"))

list(res, pc)