#? stdlib
`removeMethod` <- function (f, signature = character(), where = topenv(parent.frame())) 
{
    if (is.function(f)) {
        if (is(f, "genericFunction")) {
            fdef <- f
            f <- f@generic
        }
        else if (is.primitive(f)) {
            f <- .primname(f)
            fdef <- genericForBasic(f, mustFind = FALSE)
        }
        else stop("function supplied as argument 'f' must be a generic")
    }
    else fdef <- getGeneric(f, where = where)
    if (is.null(fdef)) {
        warning(gettextf("no generic function %s found", sQuote(f)), 
            domain = NA)
        return(FALSE)
    }
    if (is.null(getMethod(fdef, signature, optional = TRUE))) {
        warning(gettextf("no method found for function %s and signature %s", 
            sQuote(fdef@generic), paste(.dQ(signature), collapse = ", ")), 
            domain = NA)
        return(FALSE)
    }
    setMethod(f, signature, NULL, where = where)
    TRUE
}

# Examples
