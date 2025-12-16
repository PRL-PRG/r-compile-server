#? stdlib
`rowSums` <- function (x, na.rm = FALSE, dims = 1L) 
{
    if (is.data.frame(x)) 
        x <- as.matrix(x)
    if (!is.array(x) || length(dn <- dim(x)) < 2L) 
        stop("'x' must be an array of at least two dimensions")
    if (dims < 1L || dims > length(dn) - 1L) 
        stop("invalid 'dims'")
    p <- prod(dn[-(id <- seq_len(dims))])
    dn <- dn[id]
    z <- if (is.complex(x)) 
        .Internal(rowSums(Re(x), prod(dn), p, na.rm)) + (0+1i) * 
            .Internal(rowSums(Im(x), prod(dn), p, na.rm))
    else .Internal(rowSums(x, prod(dn), p, na.rm))
    if (length(dn) > 1L) {
        dim(z) <- dn
        dimnames(z) <- dimnames(x)[id]
    }
    else names(z) <- dimnames(x)[[1L]]
    z
}
