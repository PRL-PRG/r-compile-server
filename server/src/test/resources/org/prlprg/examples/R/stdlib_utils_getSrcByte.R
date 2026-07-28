#? stdlib
`getSrcByte` <- function (x) 
{
    srcref <- attr(x, "srcref")
    if (is.null(srcref)) 
        -1L
    else srcref[2L]
}
