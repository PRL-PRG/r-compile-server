#? stdlib
`setGenericImplicit` <- function (name, where = topenv(parent.frame()), restore = TRUE) 
{
    if (!isGeneric(name, where)) {
        warning(gettextf("%s is not currently a generic:  define it first to create a non-default implicit form", 
            sQuote(name)), domain = NA)
        return(FALSE)
    }
    generic <- getGeneric(name, where = where)
    if (restore) 
        removeMethods(name, where, TRUE)
    else removeGeneric(name, where)
    .saveToImplicitGenerics(name, generic, where)
}
