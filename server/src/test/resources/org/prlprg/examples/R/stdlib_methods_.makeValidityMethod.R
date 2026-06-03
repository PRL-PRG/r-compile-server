#? stdlib
`.makeValidityMethod` <- function (Class, validity) 
{
    if (!is.null(validity)) {
        if (!is.function(validity)) 
            stop(gettextf("a validity method must be a function of one argument, got an object of class %s", 
                dQuote(class(validity))), domain = NA)
        validity <- substituteFunctionArgs(validity, "object", 
            functionName = sprintf("validity method for class '%s'", 
                Class))
    }
    validity
}
