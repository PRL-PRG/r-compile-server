#! /usr/bin/env Rscript

# Compile all the functions in a package
# Report the ones that do not compile

args = commandArgs(trailingOnly=TRUE)


package <- if(length(args) == 0) {
    stop("At least one argument must be provided")
} else {
    args[[1]]
}

library(package, character.only=TRUE)

ns <- getNamespace(package)

# Only compile closures
for(v in ls(ns)) {
    if(typeof(ns[[v]]) == "closure") {
        f <- ns[[v]]
        cat("Compiling ", v, "\n")
        rsh::rsh_compile(f, list(tier = "bytecode", bc_opt = 3L))
    }
}