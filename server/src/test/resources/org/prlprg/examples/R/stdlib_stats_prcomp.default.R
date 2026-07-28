#? stdlib
`prcomp.default` <- function (x, retx = TRUE, center = TRUE, scale. = FALSE, tol = NULL, 
    rank. = NULL, ...) 
{
    chkDots(...)
    x <- as.matrix(x)
    x <- scale(x, center = center, scale = scale.)
    cen <- attr(x, "scaled:center")
    sc <- attr(x, "scaled:scale")
    if (any(sc == 0)) 
        stop("cannot rescale a constant/zero column to unit variance")
    n <- nrow(x)
    p <- ncol(x)
    k <- if (!is.null(rank.)) {
        stopifnot(length(rank.) == 1, is.finite(rank.), as.integer(rank.) > 
            0)
        min(as.integer(rank.), n, p)
    }
    else min(n, p)
    s <- svd(x, nu = 0, nv = k)
    j <- seq_len(k)
    s$d <- s$d/sqrt(max(1, n - 1))
    if (!is.null(tol)) {
        rank <- sum(s$d > (s$d[1L] * tol))
        if (rank < k) {
            j <- seq_len(k <- rank)
            s$v <- s$v[, j, drop = FALSE]
        }
    }
    dimnames(s$v) <- list(colnames(x), paste0("PC", j))
    r <- list(sdev = s$d, rotation = s$v, center = cen %||% FALSE, 
        scale = sc %||% FALSE)
    if (retx) 
        r$x <- x %*% s$v
    class(r) <- "prcomp"
    r
}
