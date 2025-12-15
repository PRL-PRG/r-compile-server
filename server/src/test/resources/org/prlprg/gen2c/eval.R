options(warn=1)
args <- commandArgs(TRUE)

# set working directory to first arg if provided
if (length(args) > 0) {
  setwd(args[1])
}

library(rsh)

dyn.load("code.so")
cp <- readRDS("constants.RDS")
entryFun <- readLines("entrypoint.txt", n=1, warn=FALSE)

# FIXME: try global env
env <- new.env()
parent.env(env) <- globalenv()

invisible(.Call("Rsh_initialize_runtime"))
res <- .Call(entryFun, env, cp)
pc <- .Call("Rsh_pc_get")

dyn.unload("code.so")

list(res, pc)