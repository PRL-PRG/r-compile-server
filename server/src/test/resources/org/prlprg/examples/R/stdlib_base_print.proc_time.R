#? stdlib
`print.proc_time` <- function (x, ...) 
{
    print(summary(x, ...))
    invisible(x)
}
