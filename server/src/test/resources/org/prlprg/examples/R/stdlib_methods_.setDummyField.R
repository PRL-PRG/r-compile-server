#? stdlib
`.setDummyField` <- function (self, metaName, fieldClass, fieldName, onceOnly, value) 
{
    if (is(value, fieldClass)) 
        value <- as(value, fieldClass, strict = FALSE)
    else stop(gettextf("invalid assignment for reference class field %s, should be from class %s or a subclass (was class %s)", 
        sQuote(fieldName), dQuote(fieldClass), dQuote(class(value))), 
        call. = FALSE)
    selfEnv <- as.environment(self)
    if (onceOnly) {
        if (bindingIsLocked(metaName, selfEnv)) 
            stop(gettextf("invalid replacement: reference class field %s is read-only", 
                sQuote(fieldName)), call. = FALSE)
        else {
            assign(metaName, value, envir = selfEnv)
            lockBinding(metaName, selfEnv)
        }
    }
    else assign(metaName, value, envir = selfEnv)
}
