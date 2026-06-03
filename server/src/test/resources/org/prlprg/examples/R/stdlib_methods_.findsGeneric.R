#? stdlib
`.findsGeneric` <- function (what, ns) 
{
    if (is(get(what, mode = "function", envir = ns), "genericFunction")) 
        1L
    else if (!is.null(.getGenericFromCache(what, ns))) 
        2L
    else 0L
}
