#? stdlib
`cov2cor` <- function (V) 
{
    p <- (d <- dim(V))[1L]
    if (!is.numeric(V) || length(d) != 2L || p != d[2L]) 
        stop("'V' is not a square numeric matrix")
    pos <- !is.na(Is <- D <- diag(V, names = FALSE)) & D > 0
    Is[pos] <- sqrt(1/D[pos])
    Is[!pos] <- NaN
    if (any(!pos) || any(!is.finite(Is))) 
        warning("diag(V) had non-positive or NA entries; the non-finite result may be dubious")
    r <- V
    r[] <- Is * V * rep(Is, each = p)
    if (p) 
        r[seq.int(from = 1L, by = p + 1L, length.out = p)] <- 1
    r
}
