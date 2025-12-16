#? stdlib
`print.xtabs` <- function (x, na.print = "", ...) 
{
    ox <- x
    attr(x, "call") <- NULL
    print.table(x, na.print = na.print, ...)
    invisible(ox)
}
