#! /usr/bin/env Rscript

# LD_PRELOAD=/usr/lib/llvm-17/lib/libLLVM-17.so ../external/R/bin/Rscript messages-sizes.R


source("compile-package.R")

packages <- c("yaml", "magrittr", "R6", "glue", "jsonlite", "curl")

results <- list()

rsh::init_client()

for(p in packages) {
    results[[p]] <- compile_package(p)
}

# output a csv file
write.csv(
    data.frame(
        package = names(results),
        request_sizes = sapply(results, function(x) x$sizes[["request"]]),
        response_sizes = sapply(results, function(x) x$sizes[["response"]]),
        nb_comps = sapply(results, function(x) x$nb_comps),
        nb_fails = sapply(results, function(x) x$nb_fails)
    ),
    file = "message-sizes.csv",
    row.names = FALSE
)