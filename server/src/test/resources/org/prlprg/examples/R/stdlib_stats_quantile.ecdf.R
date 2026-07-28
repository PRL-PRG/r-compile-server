#? stdlib
`quantile.ecdf` <- function (x, ...) 
quantile(evalq(rep.int(x, diff(c(0, round(nobs * y)))), environment(x)), 
    ...)
