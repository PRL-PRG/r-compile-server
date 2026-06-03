#? stdlib
`all.equal.factor` <- function (target, current, ..., check.attributes = TRUE) 
{
    if (!inherits(current, "factor")) 
        return("'current' is not a factor")
    msg <- if (check.attributes) 
        attr.all.equal(target, current, ...)
    class(target) <- class(current) <- NULL
    nax <- is.na(target)
    nay <- is.na(current)
    n <- sum(nax != nay)
    if (n > 1L) 
        msg <- c(msg, paste(n, "NA mismatches"))
    else if (n == 1L) 
        msg <- c(msg, paste("1, NA mismatch"))
    else {
        target <- levels(target)[target[!nax]]
        current <- levels(current)[current[!nay]]
        n <- all.equal(target, current, check.attributes = check.attributes, 
            ...)
        if (is.character(n)) 
            msg <- c(msg, n)
    }
    if (is.null(msg)) 
        TRUE
    else msg
}
