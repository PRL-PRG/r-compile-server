#? stdlib
`print.AsIs` <- function (x, ...) 
{
    cl <- oldClass(x)
    oldClass(x) <- cl[cl != "AsIs"]
    NextMethod("print")
    invisible(x)
}
