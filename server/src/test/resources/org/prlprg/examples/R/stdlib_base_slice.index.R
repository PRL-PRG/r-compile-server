#? stdlib
`slice.index` <- function (x, MARGIN) 
{
    d <- dim(x)
    if (is.null(d)) 
        d <- length(x)
    n <- length(d)
    if (is.character(MARGIN)) {
        dn <- dimnames(x)
        if (is.null(dnn <- names(dn))) 
            stop("'x' must have named dimnames")
        MARGIN <- match(MARGIN, dnn)
        if (anyNA(MARGIN)) 
            stop("not all elements of 'MARGIN' are names of dimensions")
    }
    if (!length(MARGIN) || any(MARGIN < 1L) || any(MARGIN > n)) 
        stop("incorrect value for 'MARGIN'")
    if (any(d == 0L)) 
        return(array(integer(), d))
    m <- MARGIN[1L]
    y <- rep.int(rep.int(1L:d[m], prod(d[seq_len(m - 1L)]) * 
        rep.int(1L, d[m])), prod(d[seq.int(from = m + 1L, length.out = n - 
        m)]))
    if (length(MARGIN) > 1L) {
        p <- d[m]
        for (m in MARGIN[-1L]) {
            y <- y + p * rep.int(rep.int(seq.int(0L, d[m] - 1L), 
                prod(d[seq_len(m - 1L)]) * rep.int(1L, d[m])), 
                prod(d[seq.int(from = m + 1L, length.out = n - 
                  m)]))
            p <- p * d[m]
        }
    }
    dim(y) <- d
    y
}

# Examples
x <- array(1 : 24, c(2, 3, 4))
slice.index(x, 2)
slice.index(x, c(1, 3))
## When slicing by dimensions 1 and 3, slice index 5 is obtained for
## dimension 1 has value 1 and dimension 3 has value 3 (see above):
which(slice.index(x, c(1, 3)) == 5, arr.ind = TRUE)

