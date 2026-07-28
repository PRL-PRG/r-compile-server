#? stdlib
`as.matrix.dist` <- function (x, ...) 
{
    size <- attr(x, "Size")
    df <- matrix(0, size, size)
    if (size > 1L) {
        n..1 <- (size - 1L):1L
        s.1 <- size + 1L
        up <- sequence.default(n..1, from = seq.int(s.1, length(df), 
            s.1), by = size)
        lo <- sequence.default(n..1, from = seq.int(2L, length(df) + 
            1L, s.1))
        df[up] <- df[lo] <- x
    }
    labels <- attr(x, "Labels") %||% seq_len(size)
    dimnames(df) <- list(labels, labels)
    df
}
