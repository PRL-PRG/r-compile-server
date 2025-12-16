#? stdlib
`formula.data.frame` <- function (x, ...) 
{
    if (length(tx <- attr(x, "terms")) && length(ff <- formula.terms(tx))) 
        ff
    else DF2formula(x, parent.frame())
}
