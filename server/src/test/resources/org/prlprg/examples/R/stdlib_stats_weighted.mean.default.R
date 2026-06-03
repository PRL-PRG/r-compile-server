#? stdlib
`weighted.mean.default` <- function (x, w, ..., na.rm = FALSE) 
{
    if (missing(w)) {
        if (na.rm) 
            x <- x[!is.na(x)]
        return(sum(x)/length(x))
    }
    if (length(w) != length(x)) 
        stop("'x' and 'w' must have the same length")
    if (na.rm) {
        i <- !is.na(x)
        w <- w[i]
        x <- x[i]
    }
    sum((x * w)[w != 0])/sum(w)
}
