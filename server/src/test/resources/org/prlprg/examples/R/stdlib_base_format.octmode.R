#? stdlib
`format.octmode` <- function (x, width = NULL, ...) 
{
    isna <- is.na(x)
    y <- as.integer(x[!isna])
    fmt <- if (!is.null(width)) 
        paste0("%0", width, "o")
    else "%o"
    ans <- rep.int(NA_character_, length(x))
    ans0 <- sprintf(fmt, y)
    if (is.null(width) && length(y) > 1L) {
        nc <- max(nchar(ans0))
        ans0 <- sprintf(paste0("%0", nc, "o"), y)
    }
    ans[!isna] <- ans0
    dim(ans) <- dim(x)
    dimnames(ans) <- dimnames(x)
    names(ans) <- names(x)
    ans
}
