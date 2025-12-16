#? stdlib
`isGeneric` <- function (f, where = topenv(parent.frame()), fdef = NULL, getName = FALSE) 
{
    if (is.null(fdef) && missing(where)) {
        fdef <- .getGenericFromCache(f, where)
        if (!is.null(fdef)) 
            return(if (getName) fdef@generic else TRUE)
    }
    if (is.null(fdef)) 
        fdef <- getFunction(f, where = where, mustFind = FALSE)
    if (is.null(fdef)) 
        return(FALSE)
    if (isBaseFun(fdef)) {
        if (is.character(f) && f %in% "as.double") 
            f <- "as.numeric"
        gen <- genericForBasic(f, mustFind = FALSE)
        return(is.function(gen) && length(names(.getMethodsTable(gen))) > 
            1L)
    }
    if (!is(fdef, "genericFunction")) 
        return(FALSE)
    gen <- fdef@generic
    if (missing(f) || .identC(gen, f)) {
        if (getName) 
            gen
        else TRUE
    }
    else {
        warning(gettextf("fdef appears to be a generic function, but with generic name %s instead of %s", 
            sQuote(gen), sQuote(f)), domain = NA)
        FALSE
    }
}
