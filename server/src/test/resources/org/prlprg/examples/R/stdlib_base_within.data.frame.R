#? stdlib
`within.data.frame` <- function (data, expr, ...) 
{
    parent <- parent.frame()
    e <- evalq(environment(), data, parent)
    eval(substitute(expr), e)
    l <- as.list(e, all.names = TRUE)
    l <- l[!vapply(l, is.null, NA, USE.NAMES = FALSE)]
    nl <- names(l)
    del <- setdiff(names(data), nl)
    data[nl] <- l
    data[del] <- NULL
    data
}
