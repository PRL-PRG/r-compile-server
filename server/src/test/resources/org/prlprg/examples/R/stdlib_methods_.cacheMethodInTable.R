#? stdlib
`.cacheMethodInTable` <- function (fdef, sig, def, table = get(".AllMTable", envir = fenv)) 
{
    fenv <- environment(fdef)
    if (missing(table) && !exists(".AllMTable", envir = fenv, 
        inherits = FALSE)) 
        .setupMethodsTables(fdef)
    sig <- .matchSigLength(sig, fdef, fenv, TRUE)
    label <- .sigLabel(sig)
    isCurrent <- exists(label, envir = table, inherits = FALSE)
    if (is.null(def)) {
        if (isCurrent) 
            remove(list = label, envir = table)
    }
    else {
        dupl <- .duplicateClassesExist()
        def <- .methodPackageSlots(def, label, table, dupl, isCurrent)
        assign(label, def, envir = table)
    }
}
