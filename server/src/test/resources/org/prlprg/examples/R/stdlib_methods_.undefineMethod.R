#? stdlib
`.undefineMethod` <- function (f, signature = character(), where = topenv(parent.frame())) 
{
    fdef <- getGeneric(f, where = where)
    if (is.null(fdef)) {
        warning(gettextf("no generic function %s found", sQuote(f)), 
            domain = NA)
        return(FALSE)
    }
    if (!is.null(getMethod(fdef, signature, optional = TRUE))) 
        setMethod(f, signature, NULL, where = where)
}
