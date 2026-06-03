#? stdlib
`.removePreviousCoerce` <- function (from, to, where, prevIs) 
{
    sig <- c(from, to)
    cdef <- getGeneric("coerce", where = where)
    if (is.null(cdef)) 
        return(FALSE)
    prevCoerce <- !is.null(selectMethod("coerce", sig, TRUE, 
        FALSE, fdef = cdef))
    rdef <- getGeneric("coerce<-", where = where)
    if (is.null(rdef)) 
        return(FALSE)
    prevRepl <- !is.null(selectMethod("coerce<-", sig, TRUE, 
        FALSE, fdef = rdef))
    if (prevCoerce || prevRepl) {
        if (!prevIs) 
            warning(gettextf("methods currently exist for coercing from %s to %s; they will be replaced.", 
                dQuote(from), dQuote(to)), domain = NA)
        if (prevCoerce) 
            setMethod(cdef, sig, NULL, where = where)
        if (prevRepl) 
            setMethod(rdef, sig, NULL, where = where)
        TRUE
    }
    else FALSE
}
