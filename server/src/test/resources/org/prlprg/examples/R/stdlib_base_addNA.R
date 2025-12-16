#? stdlib
`addNA` <- function (x, ifany = FALSE) 
{
    if (!is.factor(x)) 
        x <- factor(x)
    if (ifany && !anyNA(x)) 
        return(x)
    ll <- levels(x)
    if (!anyNA(ll)) 
        ll <- c(ll, NA)
    else if (!ifany && !anyNA(x)) 
        return(x)
    factor(x, levels = ll, exclude = NULL)
}
