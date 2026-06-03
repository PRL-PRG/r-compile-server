#? stdlib
`Axis.table` <- function (x, at, ..., side = 1, labels) 
{
    if (length(dim(x)) == 1) {
        nx <- dimnames(x)[[1]]
        ow <- options(warn = -1)
        is.num <- !any(is.na(xx <- as.numeric(nx)))
        options(ow)
        x0 <- if (is.num) 
            xx
        else seq.int(x)
        if (missing(at)) 
            at <- x0
        if (missing(labels)) 
            labels <- nx
        axis(side, at = at, labels = labels, ...)
    }
    else stop("only for 1-D table")
}
