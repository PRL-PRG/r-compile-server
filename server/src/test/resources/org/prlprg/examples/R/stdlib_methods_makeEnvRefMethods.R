#? stdlib
`makeEnvRefMethods` <- function () 
{
    methods <- .envRefMethods
    allMethods <- names(methods)
    for (method in allMethods) {
        methods[[method]] <- makeClassMethod(methods[[method]], 
            method, "envRefClass", "", allMethods)
    }
    methods$.objectParent <- .methodsNamespace
    methods$.objectPackage <- "methods"
    methods
}
