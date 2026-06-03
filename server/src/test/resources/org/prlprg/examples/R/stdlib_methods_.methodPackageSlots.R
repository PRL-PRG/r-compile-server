#? stdlib
`.methodPackageSlots` <- function (def, label, table, duplicatesExist, isCurrent) 
{
    sig <- def@target
    dups <- FALSE
    if (duplicatesExist) {
        def <- .fixPackageSlot(def, sig)
        for (cl in sig) {
            if (exists(cl, envir = .classTable, inherits = FALSE) && 
                is.list(get(cl, envir = .classTable))) {
                dups <- TRUE
                break
            }
        }
        if (isCurrent) {
            current <- get(label, envir = table)
            dups <- dups || !identical(current@target, sig)
        }
        if (dups) {
            if (isCurrent) {
                if (is(current, "MethodDefinition")) {
                  pkg <- attr(current@target, "package")
                  if (length(pkg) == 0) 
                    current <- .fixPackageSlot(current, current@target)
                  env <- new.env()
                  var <- .pkgMethodLabel(current)
                  if (nzchar(var)) 
                    assign(var, current, envir = env)
                }
                else if (is.environment(current)) 
                  env <- current
                else stop(gettextf("bad method object stored in method table, class %s", 
                  dQuote(class(current))), domain = NA)
            }
            else env <- new.env()
            assign(.pkgMethodLabel(def), def, envir = env)
            env
        }
        else def
    }
    else def
}
