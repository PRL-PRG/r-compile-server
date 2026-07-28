#? stdlib
`as.data.frame.array` <- function (x, row.names = NULL, optional = FALSE, ...) 
{
    d <- dim(x)
    if (length(d) == 1L) {
        value <- as.data.frame.vector(c(x), row.names, optional, 
            ...)
        if (!optional) 
            names(value) <- deparse(substitute(x))[[1L]]
        value
    }
    else if (length(d) == 2L) {
        as.data.frame.matrix(x, row.names, optional, ...)
    }
    else {
        dn <- dimnames(x)
        dim(x) <- c(d[1L], prod(d[-1L]))
        if (!is.null(dn)) {
            if (length(dn[[1L]])) 
                rownames(x) <- dn[[1L]]
            for (i in 2L:length(d)) if (is.null(dn[[i]])) 
                dn[[i]] <- seq_len(d[i])
            colnames(x) <- interaction(expand.grid(dn[-1L]))
        }
        as.data.frame.matrix(x, row.names, optional, ...)
    }
}
