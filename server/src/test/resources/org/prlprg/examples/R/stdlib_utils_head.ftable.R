#? stdlib
`head.ftable` <- function (x, n = 6L, ...) 
{
    r <- format(x)
    dimnames(r) <- list(rep.int("", nrow(r)), rep.int("", ncol(r)))
    noquote(head.matrix(r, n = n + nrow(r) - nrow(x), ...))
}
