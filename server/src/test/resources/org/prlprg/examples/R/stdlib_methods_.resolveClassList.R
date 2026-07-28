#? stdlib
`.resolveClassList` <- function (value, where, package, resolve.confl = "first", resolve.msg = TRUE) 
{
    if (is.null(package)) 
        package <- if (is.character(where)) 
            where
        else getPackageName(where, FALSE)
    pkgs <- names(value)
    i <- match(package, pkgs, 0L)
    if (i == 0L && package != "methods") 
        i <- match("methods", pkgs, 0L)
    if (i > 0L) 
        value[[i]]
    else {
        switch(resolve.confl, none = NULL, first = {
            if (resolve.msg) {
                message(gettextf("Found more than one class \"%s\" in cache; using the first, from namespace '%s'", 
                  value[[1]]@className, pkgs[1]), domain = NA)
                message("Also defined by ", paste(sQuote(pkgs[-1]), 
                  collapse = " "))
            }
            value[[1]]
        }, all = value)
    }
}
