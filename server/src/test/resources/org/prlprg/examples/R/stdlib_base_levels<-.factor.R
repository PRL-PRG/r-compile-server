#? stdlib
`levels<-.factor` <- function (x, value) 
{
    xlevs <- levels(x)
    if (is.list(value)) {
        nlevs <- rep.int(names(value), lapply(value, length))
        value <- unlist(value)
        m <- match(value, xlevs, nomatch = 0L)
        xlevs[m] <- nlevs[m > 0L]
    }
    else {
        if (length(xlevs) > length(value)) 
            stop("number of levels differs")
        nlevs <- xlevs <- as.character(value)
        nlevs <- nlevs[!is.na(nlevs)]
    }
    nlevs <- unique(nlevs)
    at <- attributes(x)
    at$levels <- nlevs
    y <- match(xlevs, nlevs)[x]
    attributes(y) <- at
    y
}
