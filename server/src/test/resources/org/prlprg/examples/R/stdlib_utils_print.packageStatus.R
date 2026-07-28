#? stdlib
`print.packageStatus` <- function (x, ...) 
{
    cat("Number of installed packages:\n")
    print(table(x$inst$LibPath, x$inst$Status), ...)
    cat("\nNumber of available packages (each package counted only once):\n")
    if (nlevels(x$avail$Repository)) 
        print(table(x$avail$Repository, x$avail$Status), ...)
    else cat("(no repositories)\n")
    invisible(x)
}
