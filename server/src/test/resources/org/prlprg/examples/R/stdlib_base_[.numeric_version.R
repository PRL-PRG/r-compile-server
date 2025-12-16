#? stdlib
`[.numeric_version` <- function (x, i, j) 
{
    y <- if (missing(j)) 
        unclass(x)[i]
    else lapply(unclass(x)[i], `[`, j)
    bad <- vapply(y, function(t) is.null(t) || anyNA(t), NA)
    if (any(bad)) 
        y[bad] <- rep.int(list(integer()), sum(bad))
    class(y) <- class(x)
    y
}
