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

# Simulate runtime init from the compile client (suppress if FIŘ->C)
invisible(try(.Call("Rsh_initialize_runtime"), silent=TRUE))

# Simulate closure compile from the compile client
# (BC->C tests name the compiled function `Fir_...`)
invisible(.Call("Fir_fun_init_main", constantPool))
main <- function() .Call("Fir_fun_from_r_main", environment(), constantPool)

# Call the compiled closure
res <- main()

# Get performance counters, used by some BC->C tests (suppress if FIŘ->C)
pc <- tryCatch(.Call("Rsh_pc_get"), error = \(e) NULL)

# Get serialized feedback of all compiled closures (suppress if BC->C)
feedback <- tryCatch(.Call("Fir_serialized_feedback", constantPool), error = \(e) NULL)

dyn.unload(paste0(path, "/code.so"))

list(res, pc, feedback)