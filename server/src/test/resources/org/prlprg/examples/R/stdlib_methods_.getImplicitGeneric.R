#? stdlib
`.getImplicitGeneric` <- function (name, where, pkg = "") 
{
    value <- .getImplicitGenericFromCache(name, where, pkg)
    if (is.null(value) && !is.null(tbl <- where[[.ImplicitGenericsMetaName]])) 
        .getGenericFromCacheTable(name, where, pkg, tbl)
    else value
}
