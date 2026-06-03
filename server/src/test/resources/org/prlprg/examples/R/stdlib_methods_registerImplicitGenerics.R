#? stdlib
`registerImplicitGenerics` <- function (what = .ImplicitGenericsTable(where), where = topenv(parent.frame())) 
{
    if (!is.environment(what)) 
        stop(gettextf("must provide an environment table; got class %s", 
            dQuote(class(what))), domain = NA)
    objs <- as.list(what, all.names = TRUE)
    mapply(.cacheImplicitGeneric, names(objs), objs)
    NULL
}
