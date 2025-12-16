#? stdlib
`print.activeConcordance` <- function (x, ...) 
{
    cat("lastSrcref:")
    print(x$lastSrcref)
    cat("lastText:")
    print(x$lastText)
    print(x$finish())
    invisible(x)
}
