#? stdlib
`all.equal.list` <- function (target, current, ..., check.attributes = TRUE, use.names = TRUE) 
{
    if (!is.logical(check.attributes)) 
        stop(gettextf("'%s' must be logical", "check.attributes"), 
            domain = NA)
    if (!is.logical(use.names)) 
        stop(gettextf("'%s' must be logical", "use.names"), domain = NA)
    msg <- if (check.attributes) 
        attr.all.equal(target, current, ...)
    target <- unclass(target)
    current <- unclass(current)
    if (!is.list(target) && !is.vector(target)) 
        return(c(msg, "target is not list-like"))
    if (!is.list(current) && !is.vector(current)) 
        return(c(msg, "current is not list-like"))
    if ((n <- length(target)) != length(current)) {
        if (!is.null(msg)) 
            msg <- msg[-grep("\\bLengths\\b", msg)]
        n <- min(n, length(current))
        msg <- c(msg, paste("Length mismatch: comparison on first", 
            n, "components"))
    }
    iseq <- seq_len(n)
    if (use.names) 
        use.names <- (length(nt <- names(target)[iseq]) == n && 
            length(nc <- names(current)[iseq]) == n)
    for (i in iseq) {
        mi <- all.equal(target[[i]], current[[i]], check.attributes = check.attributes, 
            use.names = use.names, ...)
        if (is.character(mi)) 
            msg <- c(msg, paste0("Component ", if (use.names && 
                nt[i] == nc[i]) dQuote(nt[i]) else i, ": ", mi))
    }
    if (is.null(msg)) 
        TRUE
    else msg
}
