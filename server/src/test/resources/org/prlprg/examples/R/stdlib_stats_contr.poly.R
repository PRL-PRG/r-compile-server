#? stdlib
`contr.poly` <- function (n, scores = 1:n, contrasts = TRUE, sparse = FALSE) 
{
    make.poly <- function(n, scores) {
        y <- scores - mean(scores)
        X <- outer(y, seq_len(n) - 1, `^`)
        QR <- qr(X)
        z <- QR$qr
        z <- z * (row(z) == col(z))
        raw <- qr.qy(QR, z)
        Z <- sweep(raw, 2L, apply(raw, 2L, function(x) sqrt(sum(x^2))), 
            `/`, check.margin = FALSE)
        colnames(Z) <- paste0("^", 1L:n - 1L)
        Z
    }
    if (is.numeric(n) && length(n) == 1L) 
        levs <- seq_len(n)
    else {
        levs <- n
        n <- length(levs)
    }
    if (n < 2) 
        stop(gettextf("contrasts not defined for %d degrees of freedom", 
            n - 1), domain = NA)
    if (n > 95) 
        stop(gettextf("orthogonal polynomials cannot be represented accurately enough for %d degrees of freedom", 
            n - 1), domain = NA)
    if (length(scores) != n) 
        stop("'scores' argument is of the wrong length")
    if (!is.numeric(scores) || anyDuplicated(scores)) 
        stop("'scores' must all be different numbers")
    contr <- make.poly(n, scores)
    if (sparse) 
        contr <- .asSparse(contr)
    if (contrasts) {
        dn <- colnames(contr)
        dn[2:min(4, n)] <- c(".L", ".Q", ".C")[1:min(3, n - 1)]
        colnames(contr) <- dn
        contr[, -1, drop = FALSE]
    }
    else {
        contr[, 1] <- 1
        contr
    }
}
