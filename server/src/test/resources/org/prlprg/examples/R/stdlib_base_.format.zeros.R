#? stdlib
`.format.zeros` <- function (x, zero.print, nx = suppressWarnings(as.numeric(x)), 
    replace = FALSE, warn.non.fitting = TRUE) 
{
    if (!is.null(zero.print) && any(i0 <- nx == 0 & !is.na(nx))) {
        if (length(zero.print) > 1L) 
            stop("'zero.print' has length > 1")
        if (is.logical(zero.print)) 
            zero.print <- if (zero.print) 
                "0"
            else " "
        if (!is.character(zero.print)) 
            stop("'zero.print' must be character, logical or NULL")
        nz <- nchar(zero.print, "c")
        nc <- nchar(x[i0], "c")
        ind0 <- as.vector(regexpr("0", x[i0], fixed = TRUE))
        if (replace) {
            x[i0] <- zero.print
        }
        else {
            if (any(nc < nz) && warn.non.fitting) 
                warning("'zero.print' is truncated to fit into formatted zeros; consider 'replace=TRUE'")
            i2 <- pmin(nc, nz - 1L + ind0)
            i1 <- pmax(1L, i2 - nz + 1L)
            substr(x[i0], i1, i2) <- zero.print
            if (any(P <- nc > i2)) 
                substr(x[i0][P], i2[P] + 1L, nc[P]) <- strrep(" ", 
                  (nc - i2)[P])
        }
    }
    x
}
