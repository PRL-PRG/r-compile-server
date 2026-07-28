#? stdlib
`.getMethodsTableMetaData` <- function (generic, where, optional = FALSE) 
{
    what <- .TableMetaName(generic@generic, generic@package)
    get0(what, envir = where, inherits = FALSE) %||% if (optional) 
        NULL
    else stop(gettextf("no methods table for generic %s from package %s in package %s", 
        sQuote(generic@generic), sQuote(generic@package), sQuote(getPackageName(where))), 
        domain = NA)
}
