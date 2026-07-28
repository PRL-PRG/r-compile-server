#? stdlib
`model.offset` <- function (x) 
{
    offsets <- attr(attr(x, "terms"), "offset")
    if (length(offsets)) {
        ans <- .subset2(x, "(offset)") %||% 0
        for (i in offsets) ans <- ans + x[[i]]
    }
    else ans <- .subset2(x, "(offset)")
    if (!is.null(ans) && !is.numeric(ans)) 
        stop("'offset' must be numeric")
    ans
}
