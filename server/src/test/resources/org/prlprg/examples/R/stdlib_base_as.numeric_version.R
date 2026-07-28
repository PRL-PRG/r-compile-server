#? stdlib
`as.numeric_version` <- function (x) 
{
    if (is.numeric_version(x)) 
        x
    else if (is.package_version(x)) {
        structure(x, class = c(class(x), "numeric_version"))
    }
    else if (is.list(x) && all(vapply(x, is.integer, NA))) {
        bad <- vapply(x, function(e) anyNA(e) || any(e < 0L), 
            NA)
        if (any(bad)) {
            x[bad] <- rep.int(list(integer()), sum(bad))
        }
        class(x) <- "numeric_version"
        x
    }
    else numeric_version(x)
}
