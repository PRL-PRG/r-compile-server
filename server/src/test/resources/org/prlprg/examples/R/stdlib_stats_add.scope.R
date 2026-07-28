#? stdlib
`add.scope` <- function (terms1, terms2) 
{
    terms1 <- terms(terms1)
    terms2 <- terms(terms2)
    factor.scope(attr(terms1, "factors"), list(add = attr(terms2, 
        "factors")))$add
}
