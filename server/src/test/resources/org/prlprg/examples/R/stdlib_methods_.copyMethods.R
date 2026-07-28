#? stdlib
`.copyMethods` <- function (f, tableName, env, envwhere) 
{
    differs <- function(o1, o2) !(is.function(o2) && identical(body(o2), 
        body(o2)) && identical(args(o1), args(o2)))
    table <- get(tableName, envir = env)
    fdef <- getGeneric(f, where = envwhere)
    if (!is(fdef, "genericFunction")) {
        message(gettextf("%s() is not a generic function in the target environment -- methods will not be inserted", 
            f), domain = NA)
        return(NULL)
    }
    curTable <- getMethodsForDispatch(fdef)
    allObjects <- sort(names(table))
    if (length(allObjects) > 0) {
        methodsInserted <- as.character(Filter(function(this) {
            def <- get(this, envir = table)
            curdef <- curTable[[this]]
            if (differs(def, curdef)) {
                suppressMessages(.TraceWithMethods(f, signature = this, 
                  where = envwhere, edit = env))
                TRUE
            } else FALSE
        }, allObjects))
        if (length(methodsInserted) > 0) 
            message(gettextf("Methods inserted for function %s(): %s", 
                f, paste(methodsInserted, collapse = ", ")), 
                domain = NA)
    }
}
