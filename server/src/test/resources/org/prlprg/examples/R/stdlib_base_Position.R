#? stdlib
`Position` <- function (f, x, right = FALSE, nomatch = NA_integer_) 
{
    f <- match.fun(f)
    ind <- if (right) 
        rev(seq_along(x))
    else seq_along(x)
    for (i in ind) if (f(x[[i]])) 
        return(i)
    nomatch
}
