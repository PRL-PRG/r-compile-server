#? stdlib
`envRefInferField` <- function (self, field, thisClass, selfEnv = as.environment(self)) 
{
    "Install a field method into the environment of object\nself from reference class thisClass."
    fields <- thisClass@fieldPrototypes
    if (exists(field, envir = fields, inherits = FALSE)) {
        value <- get(field, envir = fields)
    }
    else {
        methods <- thisClass@refMethods
        if (exists(field, envir = methods, inherits = FALSE)) {
            value <- get(field, envir = methods)
            value <- installClassMethod(value, self, field, selfEnv, 
                thisClass)
        }
        else stop(gettextf("%s is not a valid field or method name for reference class %s", 
            sQuote(field), dQuote(thisClass@className)), domain = NA)
    }
    value
}
