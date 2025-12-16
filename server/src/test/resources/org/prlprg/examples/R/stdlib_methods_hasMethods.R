#? stdlib
`hasMethods` <- function (f, where, package = "") 
{
    fdef <- NULL
    nowhere <- missing(where)
    if (is(f, "genericFunction")) {
        fdef <- f
        f <- fdef@generic
        if (missing(package)) 
            package <- fdef@package
    }
    else if (!.isSingleString(f)) 
        stop(gettextf("argument 'f' must be a generic function or %s", 
            .notSingleString(f)), domain = NA)
    else if (missing(package)) {
        package <- packageSlot(f)
        if (is.null(package)) {
            if (missing(where)) 
                fdef <- getGeneric(f)
            else {
                fdef <- getGeneric(f, where = where)
                if (is.null(fdef)) 
                  fdef <- getGeneric(f)
            }
            if (is(fdef, "genericFunction")) 
                package <- fdef@package
            else stop(gettextf("'%s' is not a known generic function {and 'package' not specified}", 
                f), domain = NA)
        }
    }
    what <- .TableMetaName(f, package)
    testEv <- function(ev) exists(what, envir = ev, inherits = FALSE) && 
        length(names(get(what, envir = ev))) > 0L
    if (nowhere) {
        for (i in seq_along(search())) {
            if (testEv(as.environment(i))) 
                return(TRUE)
        }
        return(FALSE)
    }
    else testEv(as.environment(where))
}
