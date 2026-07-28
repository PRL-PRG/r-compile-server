#? stdlib
`.setObjectParent` <- function (refMethods, refSuperClasses, where) 
{
    env <- empty <- emptyenv()
    for (cl in refSuperClasses) {
        if (identical(cl, "envRefClass")) 
            break
        clRefMethods <- getClass(cl)@refMethods
        clEnv <- clRefMethods$.objectParent
        if (identical(env, empty)) {
            env <- clEnv
            pkg <- clRefMethods$.objectPackage
        }
        else if (!identical(clEnv, env)) {
            .nQuote <- function(what) paste0("\"", what, "\"")
            stop(gettextf("Reference superclasses must come from the same package for the environment to be defined:  got %s and %s", 
                .nQuote(clRefMethods$.objectPackage), .nQuote(pkg)))
        }
    }
    if (identical(env, empty)) {
        pkg <- where$.packageName
        if (is.null(pkg)) 
            pkg <- ".GlobalEnv"
        refMethods$.objectParent <- where
        refMethods$.objectPackage <- pkg
    }
    else {
        refMethods$.objectParent <- env
        refMethods$.objectPackage <- pkg
    }
}
