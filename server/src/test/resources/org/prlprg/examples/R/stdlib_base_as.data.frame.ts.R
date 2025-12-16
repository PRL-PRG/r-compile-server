#? stdlib
`as.data.frame.ts` <- function (x, ...) 
{
    if (is.matrix(x)) 
        as.data.frame.matrix(x, ...)
    else as.data.frame.vector(x, ...)
}
