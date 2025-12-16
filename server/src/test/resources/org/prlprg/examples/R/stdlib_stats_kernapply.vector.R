#? stdlib
`kernapply.vector` <- function (x, k, circular = FALSE, ...) 
{
    if (!is.vector(x)) 
        stop("'x' is not a vector")
    if (!is.tskernel(k)) 
        stop("'k' is not a kernel")
    m <- k$m
    if (length(x) <= 2L * m) 
        stop("'x' is shorter than kernel 'k'")
    if (m == 0L) 
        return(x)
    else {
        n <- length(x)
        w <- c(k[0L:m], rep_len(0, n - 2L * m - 1L), k[-m:-1L])
        y <- fft(fft(x) * fft(w), inverse = TRUE)/n
        if (is.numeric(x)) 
            y <- Re(y)
        if (circular) 
            return(y)
        else return(y[(1L + m):(n - m)])
    }
}
