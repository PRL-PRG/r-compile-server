message("Starting benchmark...\n")

options("rcp.cmpfun.force_bc_recomp" = TRUE)
# options("rcp.cmpfun.use_original_cmpfun" = TRUE)
library(rcp)

total_start_time <- Sys.time()
rcp:::rcp_cmppkg("compiler")
rcp:::rcp_cmppkg("base")
rcp:::rcp_cmppkg("utils")
total_end_time <- Sys.time()

total_elapsed_ms <- as.numeric(difftime(total_end_time, total_start_time, units = "secs")) * 1000
message(sprintf("Total time: %.2f ms", total_elapsed_ms))
