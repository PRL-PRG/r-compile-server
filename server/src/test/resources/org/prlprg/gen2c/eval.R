options(warn=1)
args <- commandArgs(TRUE)

# set working directory to first arg if provided
if (length(args) > 0) {
  setwd(args[1])
}

library(rsh)

dyn.load("code.so")
env <- readRDS("bindings.RDS")

sapply(ls(env), function(x) get(x, envir = env))

parent.env(env) <- globalenv()

invisible(.Call("Rsh_initialize_runtime"))
res <- env$main()
pc <- .Call("Rsh_pc_get")

dyn.unload("code.so")

list(res, pc)