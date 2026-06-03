#? stdlib
`head.array` <- function (x, n = 6L, ...) 
{
    .checkHT(n, d <- dim(x))
    args <- rep(alist(x, , drop = FALSE), c(1L, length(d), 1L))
    ii <- which(!is.na(n[seq_along(d)]))
    args[1L + ii] <- lapply(ii, function(i) seq_len(if ((ni <- n[i]) < 
        0L) max(d[i] + ni, 0L) else min(ni, d[i])))
    do.call(`[`, args)
}
