#? stdlib
`poly` <- function (x, ..., degree = 1, coefs = NULL, raw = FALSE, simple = FALSE) 
{
    dots <- list(...)
    if (nd <- length(dots)) {
        dots_deg <- nd == 1L && length(dots[[1L]]) == 1L
        if (dots_deg) 
            degree <- dots[[1L]]
        else return(polym(x, ..., degree = degree, coefs = coefs, 
            raw = raw))
    }
    if (is.matrix(x)) {
        m <- unclass(as.data.frame(if (nd && dots_deg) x else cbind(x, 
            ...)))
        return(do.call(polym, c(m, degree = degree, raw = raw, 
            list(coefs = coefs))))
    }
    if (degree < 1) 
        stop("'degree' must be at least 1")
    if (is.object(x) && mode(x) == "numeric") 
        x <- as.numeric(x)
    if (raw) {
        Z <- outer(x, 1L:degree, `^`)
        colnames(Z) <- 1L:degree
    }
    else {
        if (is.null(coefs)) {
            if (anyNA(x)) 
                stop("missing values are not allowed in 'poly'")
            if (degree >= length(unique(x))) 
                stop("'degree' must be less than number of unique points")
            xbar <- mean(x)
            x <- x - xbar
            X <- outer(x, 0L:degree, `^`)
            QR <- qr(X)
            if (QR$rank < degree) 
                stop("'degree' must be less than number of unique points")
            z <- QR$qr
            z <- z * (row(z) == col(z))
            Z <- qr.qy(QR, z)
            norm2 <- colSums(Z^2)
            alpha <- (colSums(x * Z^2)/norm2 + xbar)[1L:degree]
            norm2 <- c(1, norm2)
        }
        else {
            alpha <- coefs$alpha
            norm2 <- coefs$norm2
            Z <- matrix(1, length(x), degree + 1L)
            Z[, 2] <- x - alpha[1L]
            if (degree > 1) 
                for (i in 2:degree) Z[, i + 1] <- (x - alpha[i]) * 
                  Z[, i] - (norm2[i + 1]/norm2[i]) * Z[, i - 
                  1]
        }
        Z <- Z/rep(sqrt(norm2[-1L]), each = length(x))
        colnames(Z) <- 0L:degree
        Z <- Z[, -1, drop = FALSE]
        if (!simple) 
            attr(Z, "coefs") <- list(alpha = alpha, norm2 = norm2)
    }
    if (simple) 
        Z
    else structure(Z, degree = 1L:degree, class = c("poly", "matrix"))
}

# Examples
od <- options(digits = 3) # avoid too much visual clutter
(z <- poly(1:10, 3))
predict(z, seq(2, 4, 0.5))
zapsmall(poly(seq(4, 6, 0.5), 3, coefs = attr(z, "coefs")))

 zm <- zapsmall(polym (    1:4, c(1, 4:6),  degree = 3)) # or just poly():
(z1 <- zapsmall(poly(cbind(1:4, c(1, 4:6)), degree = 3)))
## they are the same :
stopifnot(all.equal(zm, z1, tolerance = 1e-15))

## poly(<matrix>, df) --- used to fail till July 14 (vive la France!), 2017:
m2 <- cbind(1:4, c(1, 4:6))
pm2 <- zapsmall(poly(m2, 3)) # "unnamed degree = 3"
stopifnot(all.equal(pm2, zm, tolerance = 1e-15))

options(od)

