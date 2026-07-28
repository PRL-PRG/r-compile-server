#? stdlib
`Find` <- function (f, x, right = FALSE, nomatch = NULL) 
{
    f <- match.fun(f)
    if ((pos <- Position(f, x, right, nomatch = 0L)) > 0L) 
        x[[pos]]
    else nomatch
}
