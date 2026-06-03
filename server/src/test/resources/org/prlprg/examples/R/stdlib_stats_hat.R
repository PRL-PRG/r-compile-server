#? stdlib
`hat` <- function (x, intercept = TRUE) 
{
    if (is.qr(x)) 
        n <- nrow(x$qr)
    else {
        if (intercept) 
            x <- cbind(1, x)
        n <- nrow(x)
        x <- qr(x)
    }
    rowSums(qr.qy(x, diag(1, nrow = n, ncol = x$rank))^2)
}
