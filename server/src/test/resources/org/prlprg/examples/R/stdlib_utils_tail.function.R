#? stdlib
`tail.function` <- function (x, n = 6L, ...) 
{
    .checkHT(n, dim(x))
    lines <- as.matrix(deparse(x))
    dimnames(lines) <- list(seq_along(lines), "")
    noquote(tail(lines, n = n))
}
