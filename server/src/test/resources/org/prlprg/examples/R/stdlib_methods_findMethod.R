#? stdlib
`findMethod` <- function (f, signature, where = topenv(parent.frame())) 
{
    if (is(f, "genericFunction")) {
        fdef <- f
        f <- fdef@generic
    }
    else fdef <- getGeneric(f, where = where)
    if (is.null(fdef)) {
        warning(gettextf("no generic function %s found", sQuote(f)), 
            domain = NA)
        return(character())
    }
    fM <- .TableMetaName(fdef@generic, fdef@package)
    where <- .findAll(fM, where)
    found <- logical(length(where))
    for (i in seq_along(where)) {
        wherei <- where[[i]]
        table <- get(fM, wherei, inherits = FALSE)
        mi <- .findMethodForFdef(signature, table, fdef)
        found[i] <- !is.null(mi)
    }
    value <- where[found]
    what <- vapply(value, class, "", USE.NAMES = FALSE)
    if (identical(what, "numeric") || identical(what, "character")) 
        unlist(value)
    else value
}
