#? stdlib
`.makeDefaultBinding` <- function (fieldName, fieldClass, readOnly = FALSE, where) 
{
    metaName <- .bindingMetaName(fieldName)
    if (readOnly) 
        f <- eval(substitute(function(value) {
            if (missing(value)) dummyFieldName else {
                methods:::.setDummyField(.self, dummyField, dummyClass, 
                  thisField, TRUE, value)
                value
            }
        }, list(dummyField = metaName, thisField = fieldName, 
            dummyClass = fieldClass, dummyFieldName = as.name(metaName))))
    else f <- eval(substitute(function(value) {
        if (missing(value)) dummyFieldName else {
            methods:::.setDummyField(.self, dummyField, dummyClass, 
                thisField, FALSE, value)
            value
        }
    }, list(dummyField = metaName, dummyClass = fieldClass, thisField = fieldName, 
        dummyFieldName = as.name(metaName))))
    environment(f) <- where
    f <- new("defaultBindingFunction", f, field = fieldName, 
        className = fieldClass)
    init <- (if (isVirtualClass(fieldClass)) 
        new("uninitializedField", field = fieldName, className = fieldClass)
    else new(fieldClass))
    value <- list(f, init)
    names(value) <- c(fieldName, metaName)
    value
}
