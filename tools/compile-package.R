#! /usr/bin/env Rscript

# Compile all the functions in a package
# Report the ones that do not compile

# For yaml
# LD_PRELOAD=/usr/lib/llvm-17/lib/libLLVM-17.so ../external/R/bin/Rscript compile-package.R yaml

args <- commandArgs(trailingOnly = TRUE)


package <- if (length(args) == 0) {
    stop("At least one argument must be provided")
} else {
    args[[1]]
}

cat(
    "Compiling package ", package, " at version ",
    as.character(packageVersion(package)), "\n"
)

library(package, character.only = TRUE)

ns <- getNamespace(package)

nb_comps <- 0
not_compiled <- character(0)    

# Only compile closures
for (v in ls(ns)) {
    f <- ns[[v]]
    if (typeof(f) == "closure") {
        
        cat("Compiling ", v, "\n")
        tryCatch(
            {
                rsh::rsh_compile(f, list(tier = "native", bc_opt = 3L))
                nb_comps <<- nb_comps + 1
            },
            error = function(e) {
                cat("Error compiling ", v, ": ", e$message, "\n")
                not_compiled <<- c(not_compiled, v)
            }
        )
    } else {
        cat("Skipping ", v, " (not a closure) but", typeof(f), "\n")
    }
}


cat("Compiled ", nb_comps, " functions out of ", nb_comps + length(not_compiled), "\n")
if(length(not_compiled) > 0) {
    cat("The following functions were not compiled: ", paste(not_compiled, collapse = ", "), "\n")
}

message_sizes <- rsh:::rsh_total_size()
print(message_sizes )
cat("Cumulated size of requests: ", message_sizes[[1]], "bytes \n")
cat("Cumulated size of responses: ", message_sizes[[2]], "bytes \n")