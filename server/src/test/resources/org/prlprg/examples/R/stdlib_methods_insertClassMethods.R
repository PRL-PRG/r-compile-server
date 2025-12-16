#? stdlib
`insertClassMethods` <- function (methods, Class, value, fieldNames, returnAll) 
{
    theseMethods <- names(value)
    prevMethods <- names(methods)
    allMethods <- unique(c(theseMethods, prevMethods))
    returnMethods <- if (returnAll) 
        methods
    else value
    check <- TRUE
    for (method in theseMethods) {
        prevMethod <- methods[[method]]
        if (is.null(prevMethod)) {
            superClassMethod <- if (identical(method, "initialize")) 
                "initFields"
            else ""
        }
        else if (identical(prevMethod@refClassName, Class)) 
            superClassMethod <- prevMethod@superClassMethod
        else {
            superClassMethod <- superClassMethodName(prevMethod)
            returnMethods[[superClassMethod]] <- prevMethod
        }
        def <- makeClassMethod(value[[method]], method, Class, 
            superClassMethod, allMethods)
        check <- check && .checkFieldsInMethod(def, fieldNames, 
            allMethods)
        returnMethods[[method]] <- def
    }
    if (is.na(check) && .methodsIsLoaded()) 
        message(gettextf("code for methods in class %s was not checked for suspicious field assignments (recommended package %s not available?)", 
            dQuote(Class), sQuote("codetools")), domain = NA)
    returnMethods
}
