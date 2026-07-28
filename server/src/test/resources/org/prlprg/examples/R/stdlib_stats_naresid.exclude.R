#? stdlib
`naresid.exclude` <- function (omit, x, ...) 
{
    if (length(omit) == 0 || !is.numeric(omit)) 
        stop("invalid argument 'omit'")
    if (is.null(x)) 
        return(x)
    n <- NROW(x)
    keep <- rep.int(NA, n + length(omit))
    keep[-omit] <- 1L:n
    if (is.matrix(x)) {
        x <- x[keep, , drop = FALSE]
        temp <- rownames(x)
        if (length(temp)) {
            temp[omit] <- names(omit)
            rownames(x) <- temp
        }
    }
    else if (is.array(x) && length(d <- dim(x)) > 2L) {
        x <- x[keep, , , drop = FALSE]
        temp <- (dn <- dimnames(x))[[1L]]
        if (!is.null(temp)) {
            temp[omit] <- names(omit)
            dimnames(x)[[1L]] <- temp
        }
    }
    else {
        x <- x[keep]
        temp <- names(x)
        if (length(temp)) {
            temp[omit] <- names(omit)
            names(x) <- temp
        }
    }
    x
}
