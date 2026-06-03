#? stdlib
`kernapply.tskernel` <- function (x, k, ...) 
{
    if (!is.tskernel(x)) 
        stop("'x' is not a kernel")
    if (!is.tskernel(k)) 
        stop("'k' is not a kernel")
    n <- k$m
    xx <- c(rep_len(0, n), x[-x$m:x$m], rep_len(0, n))
    coef <- kernapply(xx, k, circular = TRUE)
    m <- length(coef)%/%2L
    kernel(coef[(m + 1L):length(coef)], m, paste0("Composite(", 
        attr(x, "name"), ",", attr(k, "name"), ")"))
}
