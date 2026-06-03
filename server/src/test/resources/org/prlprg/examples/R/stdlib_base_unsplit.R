#? stdlib
`unsplit` <- function (value, f, drop = FALSE) 
{
    len <- length(if (is.list(f)) f[[1L]] else f)
    if (is.data.frame(value[[1L]])) {
        x <- value[[1L]][rep(NA_integer_, len), , drop = FALSE]
        rownames(x) <- unsplit(lapply(value, rownames), f, drop = drop)
    }
    else x <- value[[1L]][rep(NA_integer_, len)]
    split(x, f, drop = drop) <- value
    x
}
