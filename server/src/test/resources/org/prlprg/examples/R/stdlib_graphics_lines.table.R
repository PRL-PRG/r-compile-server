#? stdlib
`lines.table` <- function (x, y = NULL, type = "h", lwd = 2, ...) 
{
    if (is.null(y) && length(dim(x)) == 1L) {
        nx <- dimnames(x)[[1L]]
        is.num <- suppressWarnings(!any(is.na(xx <- as.numeric(nx))))
        x0 <- if (is.num) 
            xx
        else seq_along(x)
        lines(x0, unclass(x), type = type, lwd = lwd, ...)
    }
    else stop("only for 1-D table")
}
