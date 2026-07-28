#? stdlib
`format.hexmode` <- function (x, width = NULL, upper.case = FALSE, ...) 
{
    isna <- is.na(x)
    y <- as.integer(x[!isna])
    fmt0 <- if (upper.case) 
        "X"
    else "x"
    fmt <- if (!is.null(width)) 
        paste0("%0", width, fmt0)
    else paste0("%", fmt0)
    ans <- rep.int(NA_character_, length(x))
    ans0 <- sprintf(fmt, y)
    if (is.null(width) && length(y) > 1L) {
        nc <- max(nchar(ans0))
        ans0 <- sprintf(paste0("%0", nc, fmt0), y)
    }
    ans[!isna] <- ans0
    dim(ans) <- dim(x)
    dimnames(ans) <- dimnames(x)
    names(ans) <- names(x)
    ans
}
