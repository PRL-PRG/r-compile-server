#? stdlib
`getMethodsMetaData` <- function (f, where = topenv(parent.frame())) 
{
    fdef <- getGeneric(f, where = where)
    if (is.null(fdef)) 
        return(NULL)
    if (.noMlists()) {
        warning(sprintf("Methods list objects are not maintained in this version of R:  request for function %s may return incorrect information", 
            sQuote(fdef@generic)), domain = NA)
    }
    mname <- methodsPackageMetaName("M", fdef@generic, fdef@package)
    if (exists(mname, where = where, inherits = missing(where))) 
        get(mname, where)
    else if (missing(where)) 
        .makeMlistFromTable(fdef)
    else .makeMlistFromTable(fdef, where)
}
