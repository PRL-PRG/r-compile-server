#? stdlib
`kernapply.ts` <- function (x, k, circular = FALSE, ...) 
{
    if (!is.matrix(x)) 
        y <- kernapply.vector(as.vector(x), k, circular = circular)
    else y <- apply(x, MARGIN = 2L, FUN = kernapply, k, circular = circular)
    ts(y, end = end(x), frequency = frequency(x))
}
