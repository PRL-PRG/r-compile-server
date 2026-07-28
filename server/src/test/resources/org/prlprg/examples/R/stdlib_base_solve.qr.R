#? stdlib
`solve.qr` <- function (a, b, ...) 
{
    if (!inherits(a, "qr")) 
        stop("this is the \"qr\" method for the generic function solve()")
    nc <- ncol(a$qr)
    nr <- nrow(a$qr)
    if (a$rank != min(nc, nr)) 
        stop("singular matrix 'a' in 'solve'")
    if (missing(b)) {
        if (nc != nr) 
            stop("only square matrices can be inverted")
        b <- diag(1, nc)
    }
    res <- qr.coef(a, b)
    res[is.na(res)] <- 0
    res
}
