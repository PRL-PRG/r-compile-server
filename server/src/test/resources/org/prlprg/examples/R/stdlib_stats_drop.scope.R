#? stdlib
`drop.scope` <- function (terms1, terms2) 
{
    terms1 <- terms(terms1)
    f2 <- if (missing(terms2)) 
        numeric()
    else attr(terms(terms2), "factors")
    factor.scope(attr(terms1, "factors"), list(drop = f2))$drop
}
