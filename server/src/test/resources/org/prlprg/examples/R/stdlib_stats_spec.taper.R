#? stdlib
`spec.taper` <- function (x, p = 0.1) 
{
    if (any(p < 0) || any(p > 0.5)) 
        stop("'p' must be between 0 and 0.5")
    a <- attributes(x)
    x <- as.matrix(x)
    nc <- ncol(x)
    if (length(p) == 1L) 
        p <- rep(p, nc)
    else if (length(p) != nc) 
        stop("length of 'p' must be 1 or equal the number of columns of 'x'")
    nr <- nrow(x)
    for (i in 1L:nc) {
        m <- floor(nr * p[i])
        if (m == 0) 
            next
        w <- 0.5 * (1 - cos(pi * seq.int(1, 2 * m - 1, by = 2)/(2 * 
            m)))
        x[, i] <- c(w, rep_len(1, nr - 2 * m), rev(w)) * x[, 
            i]
    }
    attributes(x) <- a
    x
}

# Examples
