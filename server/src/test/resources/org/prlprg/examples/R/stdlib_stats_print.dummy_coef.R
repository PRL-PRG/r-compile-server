#? stdlib
`print.dummy_coef` <- function (x, ..., title) 
{
    terms <- names(x)
    n <- length(x)
    isM <- attr(x, "matrix")
    nr.x <- if (isM) 
        vapply(x, NROW, 1L)
    else lengths(x)
    line <- 0L
    if (isM) {
        ansnrow <- sum(1L + nr.x)
        addcol <- max(nr.x) - 1L
        nm <- addcol + if (isM) 
            max(vapply(x, NCOL, 1L))
        else 1L
        ans <- matrix("", ansnrow, nm)
        rn <- character(ansnrow)
        for (j in seq_len(n)) {
            this <- as.matrix(x[[j]])
            nr1 <- nrow(this)
            nc1 <- ncol(this)
            dn <- dimnames(this)
            dimnames(this) <- list(dn[[1]] %||% character(nr1), 
                dn[[2]] %||% character(nc1))
            if (nc1 > 1L) {
                lin0 <- line + 2L
                line <- line + nr1 + 1L
                ans[lin0 - 1L, addcol + (1L:nc1)] <- colnames(this)
                ans[lin0:line, addcol + (1L:nc1)] <- format(this, 
                  ...)
                rn[lin0 - 1L] <- paste0(terms[j], ":   ")
            }
            else {
                lin0 <- line + 1L
                line <- line + nr1
                ans[lin0:line, addcol + 1L] <- format(this, ...)
                rn[lin0] <- paste0(terms[j], ":   ")
            }
            if (addcol > 0) 
                ans[lin0:line, addcol] <- rownames(this)
        }
    }
    else {
        nm <- max(nr.x)
        ans <- matrix("", 2L * n, nm)
        rn <- character(2L * n)
        for (j in seq_len(n)) {
            this <- x[[j]]
            n1 <- length(this)
            if (n1 > 1) {
                line <- line + 2L
                ans[line - 1L, 1L:n1] <- names(this)
                ans[line, 1L:n1] <- format(this, ...)
                rn[line - 1L] <- paste0(terms[j], ":   ")
            }
            else {
                line <- line + 1L
                ans[line, 1L:n1] <- format(this, ...)
                rn[line] <- paste0(terms[j], ":   ")
            }
        }
    }
    dimnames(ans) <- list(rn, character(nm))
    cat(if (missing(title)) 
        "Full coefficients are"
    else title, "\n")
    print(ans[1L:line, , drop = FALSE], quote = FALSE, right = TRUE)
    invisible(x)
}
