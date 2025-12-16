#? stdlib
`print.prcomp` <- function (x, print.x = FALSE, ...) 
{
    cat(sprintf("Standard deviations (1, .., p=%d):\n", length(x$sdev)))
    print(x$sdev, ...)
    d <- dim(x$rotation)
    cat(sprintf("\nRotation (n x k) = (%d x %d):\n", d[1], d[2]))
    print(x$rotation, ...)
    if (print.x && length(x$x)) {
        cat("\nRotated variables:\n")
        print(x$x, ...)
    }
    invisible(x)
}
