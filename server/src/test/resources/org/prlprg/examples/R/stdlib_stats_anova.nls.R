#? stdlib
`anova.nls` <- function (object, ...) 
{
    if (length(list(object, ...)) > 1L) 
        return(anovalist.nls(object, ...))
    stop("anova is only defined for sequences of \"nls\" objects")
}
