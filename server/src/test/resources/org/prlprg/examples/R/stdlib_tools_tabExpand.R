#? stdlib
`tabExpand` <- function (x) 
{
    srcref <- attr(x, "srcref")
    start <- if (is.null(srcref)) 
        0L
    else srcref[5L] - 1L
    .Call(C_doTabExpand, x, start)
}
