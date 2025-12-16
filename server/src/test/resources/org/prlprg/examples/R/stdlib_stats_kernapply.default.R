#? stdlib
`kernapply.default` <- function (x, k, circular = FALSE, ...) 
{
    if (is.vector(x)) 
        return(kernapply.vector(x, k, circular = circular))
    else if (is.matrix(x)) 
        return(apply(x, MARGIN = 2, FUN = kernapply, k, circular = circular))
    else stop("'kernapply' is not available for object 'x'")
}
