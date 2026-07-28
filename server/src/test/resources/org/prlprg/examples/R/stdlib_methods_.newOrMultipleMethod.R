#? stdlib
`.newOrMultipleMethod` <- function (obj, what, table) 
{
    if (!.duplicateClassesExist()) 
        return(obj)
    current <- get(what, envir = table)
    if (is.environment(current)) {
        if (is.environment(obj)) 
            list2env(as.list(obj, all.names = TRUE), current)
        else if (is(obj, "MethdodDefinition")) {
            var <- .pkgMethodLabel(obj)
            if (nzchar(var)) 
                assign(var, obj, envir = current)
        }
        current
    }
    else if (is(current, "MethodDefinition")) {
        curPkg <- packageSlot(current@defined)
        if (is(obj, "MethodDefinition")) {
            objPkg <- packageSlot(obj@defined)
            if (is.null(curPkg) || is.null(objPkg) || identical(curPkg, 
                objPkg)) 
                return(obj)
            else {
                merge <- new.env()
                var <- .pkgMethodLabel(obj)
                if (nzchar(var)) 
                  assign(var, obj, envir = merge)
                var <- .pkgMethodLabel(current)
                if (nzchar(var)) 
                  assign(var, current, envir = merge)
                return(merge)
            }
        }
        else if (is.environment(obj)) {
            merge <- new.env()
            assign(.pkgMethodLabel(current), current, envir = merge)
            list2env(as.list(obj, all.names = TRUE), merge)
            return(merge)
        }
        else current
    }
}
