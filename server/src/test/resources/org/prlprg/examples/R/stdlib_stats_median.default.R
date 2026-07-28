#? stdlib
`median.default` <- function (x, na.rm = FALSE, ...) 
{
    if (is.factor(x) || is.data.frame(x)) 
        stop("need numeric data")
    if (length(names(x))) 
        names(x) <- NULL
    if (na.rm) 
        x <- x[!is.na(x)]
    else if (any(is.na(x))) 
        return(x[NA_integer_])
    n <- length(x)
    if (n == 0L) 
        return(x[NA_integer_])
    half <- (n + 1L)%/%2L
    if (n%%2L == 1L) 
        sort(x, partial = half)[half]
    else mean(sort(x, partial = half + 0L:1L)[half + 0L:1L])
}
