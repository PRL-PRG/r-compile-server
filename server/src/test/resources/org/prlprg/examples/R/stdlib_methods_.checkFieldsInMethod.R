#? stdlib
`.checkFieldsInMethod` <- function (methodDef, fieldNames, methodNames) 
{
    if (!.hasCodeTools()) 
        return(NA)
    p0q <- function(x) paste0("\"", x, "\"", collapse = "; ")
    if (is(methodDef, "refMethodDef")) {
        methodName <- p0q(methodDef@name)
        className <- p0q(methodDef@refClassName)
    }
    else {
        methodName <- className <- ""
    }
    assigned <- .assignedVars(body(methodDef))
    locals <- names(assigned$locals)
    localsAreFields <- match(locals, fieldNames, 0) > 0
    if (any(localsAreFields)) 
        warning(gettextf("local assignment to field name will not change the field:\n    %s\n Did you mean to use \"<<-\"? ( in method %s for class %s)", 
            paste(unlist(assigned$locals)[localsAreFields], collapse = "; "), 
            methodName, className), domain = NA)
    globals <- names(assigned$globals)
    globalsNotFields <- is.na(match(globals, c(fieldNames, ".self")))
    if (any(globalsNotFields)) 
        warning(gettextf("non-local assignment to non-field names (possibly misspelled?)\n    %s\n( in method %s for class %s)", 
            paste(unlist(assigned$globals)[globalsNotFields], 
                collapse = "; "), methodName, className), domain = NA)
    globalsInMethods <- match(globals, methodNames, 0) > 0
    if (any(globalsInMethods)) 
        stop(gettextf("non-local assignment to method names is not allowed\n    %s\n( in method %s for class %s)", 
            paste(unlist(assigned$globals)[globalsInMethods], 
                collapse = "; "), methodName, className), domain = NA)
    !any(localsAreFields) && !any(globalsNotFields)
}
