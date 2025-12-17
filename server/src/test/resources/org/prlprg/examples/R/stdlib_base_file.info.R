#? stdlib
`file.info` <- function (..., extra_cols = TRUE) 
{
    res <- .Internal(file.info(fn <- c(...), extra_cols))
    res$mtime <- .POSIXct(res$mtime)
    res$ctime <- .POSIXct(res$ctime)
    res$atime <- .POSIXct(res$atime)
    class(res) <- "data.frame"
    attr(res, "row.names") <- fn
    res
}
