#? stdlib
`print.getAnywhere` <- function (x, ...) 
{
    n <- sum(!x$dups)
    if (n == 0L) {
        cat("no object named", sQuote(x$name), "was found\n")
    }
    else if (n == 1L) {
        cat("A single object matching", sQuote(x$name), "was found\n")
        cat("It was found in the following places\n")
        cat(paste0("  ", x$where), sep = "\n")
        cat("with value\n\n")
        print(x$objs[[1L]])
    }
    else {
        cat(n, "differing objects matching", sQuote(x$name), 
            "were found\n")
        cat("in the following places\n")
        cat(paste0("  ", x$where), sep = "\n")
        cat("Use [] to view one of them\n")
    }
    invisible(x)
}
