#? stdlib
`polym` <- function (..., degree = 1, coefs = NULL, raw = FALSE) 
{
    dots <- list(...)
    nd <- length(coefs %||% dots)
    if (nd == 0) 
        stop("must supply one or more vectors")
    z <- do.call(expand.grid, c(rep.int(list(0:degree), nd), 
        KEEP.OUT.ATTRS = FALSE))
    s <- rowSums(z)
    ind <- 0 < s & s <= degree
    z <- z[ind, , drop = FALSE]
    s <- s[ind]
    if (is.null(coefs)) {
        aPoly <- poly(dots[[1L]], degree, raw = raw, simple = raw && 
            nd > 1)
        if (nd == 1) 
            return(aPoly)
        n <- lengths(dots)
        if (any(n != n[1L])) 
            stop("arguments must have the same length")
        res <- cbind(1, aPoly)[, 1L + z[, 1], drop = FALSE]
        if (!raw) 
            coefs <- list(attr(aPoly, "coefs"))
        for (i in 2:nd) {
            aPoly <- poly(dots[[i]], degree, raw = raw, simple = raw)
            res <- res * cbind(1, aPoly)[, 1L + z[, i], drop = FALSE]
            if (!raw) 
                coefs <- c(coefs, list(attr(aPoly, "coefs")))
        }
        colnames(res) <- apply(z, 1L, function(x) paste(x, collapse = "."))
        structure(res, degree = as.vector(s), coefs = if (!raw) 
            coefs, class = c("poly", "matrix"))
    }
    else {
        newdata <- as.data.frame(dots)
        if (nd != ncol(newdata)) 
            stop("wrong number of columns in new data: ", deparse1(substitute(...)))
        res <- 1
        for (i in seq_len(nd)) res <- res * cbind(1, poly(newdata[[i]], 
            degree = degree, coefs = coefs[[i]], simple = TRUE))[, 
            1L + z[, i], drop = FALSE]
        colnames(res) <- apply(z, 1L, function(x) paste(x, collapse = "."))
        res
    }
}
