#? stdlib
`format.AsIs` <- function (x, width = 12, ...) 
{
    if (is.character(x) || (is.atomic(x) && is.matrix(x))) 
        return(format.default(x, ...))
    if (is.null(width)) 
        width <- 12L
    rvec <- vapply(x, function(y) {
        cl <- oldClass(y)
        if (m <- match("AsIs", cl, 0L)) 
            oldClass(y) <- cl[-m]
        toString(y, width = width, ...)
    }, "")
    dim(rvec) <- dim(x)
    dimnames(rvec) <- dimnames(x)
    format.default(rvec, justify = "right")
}
