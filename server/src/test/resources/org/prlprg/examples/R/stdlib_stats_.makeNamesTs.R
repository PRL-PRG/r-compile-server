#? stdlib
`.makeNamesTs` <- function (...) 
{
    l <- as.list(substitute(list(...)))[-1L]
    nm <- names(l)
    fixup <- if (is.null(nm)) 
        seq_along(l)
    else nm == ""
    dep <- sapply(l[fixup], function(x) deparse(x)[1L])
    if (is.null(nm)) 
        return(dep)
    if (any(fixup)) 
        nm[fixup] <- dep
    nm
}
