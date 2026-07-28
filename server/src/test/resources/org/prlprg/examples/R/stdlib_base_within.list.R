#? stdlib
`within.list` <- function (data, expr, keepAttrs = TRUE, ...) 
{
    parent <- parent.frame()
    e <- evalq(environment(), data, parent)
    eval(substitute(expr), e)
    if (keepAttrs) {
        l <- as.list(e, all.names = TRUE)
        nl <- names(l)
        del <- setdiff(names(data), nl)
        data[nl] <- l
        data[del] <- NULL
        data
    }
    else {
        as.list(e, all.names = TRUE)
    }
}
