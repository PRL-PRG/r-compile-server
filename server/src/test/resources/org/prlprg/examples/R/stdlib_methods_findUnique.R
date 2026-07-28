#? stdlib
`findUnique` <- function (what, message, where = topenv(parent.frame())) 
{
    where <- .findAll(what, where = where)
    if (length(where) > 1L) {
        if (missing(message)) 
            message <- sQuote(what)
        if (is.list(where)) 
            where <- unlist(where)
        if (is.numeric(where)) 
            where <- search()[where]
        warning(message, sprintf(" found on: %s; using the first one", 
            paste(sQuote(where), collapse = ", ")), domain = NA)
        where <- where[1L]
    }
    where
}
