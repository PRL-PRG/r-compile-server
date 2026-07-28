#? stdlib
`.assignOverBinding` <- function (what, value, where, verbose = TRUE) 
{
    if (verbose) {
        pname <- getPackageName(where)
        msg <- gettextf("assigning over the binding of symbol %s in environment/package %s", 
            sQuote(what), sQuote(pname))
        message(strwrap(msg), domain = NA)
    }
    warnOpt <- options(warn = -1)
    on.exit(options(warnOpt))
    if (is.function(value)) {
        fenv <- environment(value)
        if (is.null(fenv)) 
            fenv <- baseenv()
        if (!identical(fenv, where) && exists(what, envir = fenv, 
            inherits = FALSE) && bindingIsLocked(what, fenv)) {
            unlockBinding(what, fenv)
            assign(what, value, fenv)
            lockBinding(what, fenv)
        }
    }
    if (exists(what, envir = where, inherits = FALSE) && bindingIsLocked(what, 
        where)) {
        unlockBinding(what, where)
        assign(what, value, where)
        lockBinding(what, where)
    }
    else assign(what, value, where)
}
