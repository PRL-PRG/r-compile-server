#? stdlib
`.setMethodsForDispatch` <- function (f, fdef, mlist) 
{
    ev <- environment(fdef)
    if (!is(fdef, "genericFunction") || !exists(".Methods", envir = ev, 
        inherits = FALSE)) 
        stop(sprintf("internal error: did not get a valid generic function object for function %s", 
            sQuote(f)), domain = NA)
    assign(".Methods", envir = ev, mlist)
}
