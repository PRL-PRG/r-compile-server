#? stdlib
`as.array.default` <- function (x, ...) 
{
    if (is.array(x)) 
        return(x)
    n <- names(x)
    dim(x) <- length(x)
    if (length(n)) 
        dimnames(x) <- list(n)
    return(x)
}
