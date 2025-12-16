#? stdlib
`.assignActions` <- function (actions, anames, where) 
{
    for (i in seq_along(actions)) {
        f <- actions[[i]]
        fname <- anames[[i]]
        if (!is.function(f)) 
            stop(gettextf("non-function action: %s", sQuote(fname)), 
                domain = NA)
        if (length(formals(f)) == 0) 
            stop(gettextf("action function %s has no arguments, should have at least 1", 
                sQuote(fname)), domain = NA)
    }
    for (i in seq_along(actions)) assign(.actionMetaName(anames[[i]]), 
        actions[[i]], envir = where)
}
