#? stdlib
`print.summary.aovlist` <- function (x, ...) 
{
    nn <- names(x)
    for (i in nn) {
        cat("\n", i, "\n", sep = "")
        print(x[[i]], ...)
    }
    invisible(x)
}
