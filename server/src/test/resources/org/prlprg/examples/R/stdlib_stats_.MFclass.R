#? stdlib
`.MFclass` <- function (x) 
{
    if (is.logical(x)) 
        return("logical")
    if (is.ordered(x)) 
        return("ordered")
    if (is.factor(x)) 
        return("factor")
    if (is.character(x)) 
        return("character")
    if (is.matrix(x) && is.numeric(x)) 
        return(paste0("nmatrix.", ncol(x)))
    if (is.numeric(x)) 
        return("numeric")
    return("other")
}
