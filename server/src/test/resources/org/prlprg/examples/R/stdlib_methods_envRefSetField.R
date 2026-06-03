#? stdlib
`envRefSetField` <- function (object, field, thisClass = refObjectClass(object), 
    env = as.environment(object), value) 
{
    fieldClass <- thisClass@fieldClasses[[field]]
    if (is.null(fieldClass)) 
        stop(gettextf("%s is not a field in class %s", sQuote(field), 
            dQuote(thisClass@className)), domain = NA)
    else assign(field, value, envir = env)
    object
}
