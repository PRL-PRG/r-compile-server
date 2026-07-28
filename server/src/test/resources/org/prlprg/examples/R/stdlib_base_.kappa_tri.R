#? stdlib
`.kappa_tri` <- function (z, exact = FALSE, LINPACK = TRUE, norm = NULL, uplo = "U", 
    ...) 
{
    if (!all(dim(z))) 
        return(0)
    if (exact) {
        if (is.null(norm) || identical("2", norm)) {
            s <- svd(z, nu = 0L, nv = 0L)$d
            max(s)/min(s[s > 0])
        }
        else norm(z, type = norm) * norm(solve(z), type = norm)
    }
    else {
        p <- as.integer(nrow(z))
        if (is.na(p)) 
            stop("invalid nrow(z)")
        if (p != ncol(z)) 
            stop("triangular matrix should be square")
        if (is.null(norm)) 
            norm <- "1"
        else if (norm == "2") {
            warning("using 1-norm approximation for approximate 2-norm")
            norm <- "1"
        }
        else if (!match(toupper(norm), c("1", "O", "I"), 0L)) {
            warning(gettextf("norm=\"%s\" not available here; using norm=\"1\"", 
                norm), domain = NA)
            norm <- "1"
        }
        if (is.complex(z)) 
            1/.Internal(La_ztrcon3(z, norm, uplo))
        else if (LINPACK) {
            if (norm == "I") 
                z <- t(z)
            storage.mode(z) <- "double"
            1/.Fortran(.F_dtrco, z, p, p, k = double(1), double(p), 
                if (uplo == "U") 1L else 0L)$k
        }
        else 1/.Internal(La_dtrcon3(z, norm, uplo))
    }
}
