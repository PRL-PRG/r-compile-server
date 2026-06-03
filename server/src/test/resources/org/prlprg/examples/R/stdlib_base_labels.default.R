#? stdlib
`labels.default` <- function (object, ...) 
{
    if (length(d <- dim(object))) {
        nt <- dimnames(object)
        if (is.null(nt)) 
            nt <- vector("list", length(d))
        for (i in seq_along(d)) if (!length(nt[[i]])) 
            nt[[i]] <- as.character(seq_len(d[i]))
    }
    else {
        nt <- names(object)
        if (!length(nt)) 
            nt <- as.character(seq_along(object))
    }
    nt
}
