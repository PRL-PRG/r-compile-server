options(warn=1)
args <- commandArgs(TRUE)

# set working directory to first arg if provided
if (length(args) > 0) {
  setwd(args[1])
}

library(rsh)

dyn.load("code.so")
constantPool <- readRDS("bindings.rds")

# Simulate runtime init from the compile client
invisible(.Call("Rsh_initialize_runtime"))

# Simulate closure compile from the compile client
invisible(.Call("Fir_fun_init_main", constantPool))
main <- function() .Call("Fir_fun_from_r_main", environment(), constantPool)

# Call the compiled closure
res <- main()

# Get performance counters, used by some BC->C tests
pc <- .Call("Rsh_pc_get")

dyn.unload("code.so")

list(res, pc)