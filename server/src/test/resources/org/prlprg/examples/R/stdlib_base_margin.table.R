#? stdlib
`margin.table` <- function (x, margin = NULL) 
{
    if (!is.array(x)) 
        if (is.numeric(x)) 
            dim(x) <- length(x)
        else stop("'x' is not an array")
    if (length(margin)) {
        z <- apply(x, margin, sum)
        if (!is.array(z)) {
            if (is.character(margin)) 
                margin <- match(margin, names(dimnames(x)))
            dim(z) <- dim(x)[margin]
            dimnames(z) <- dimnames(x)[margin]
        }
        class(z) <- oldClass(x)
        z
    }
    else sum(x)
}
