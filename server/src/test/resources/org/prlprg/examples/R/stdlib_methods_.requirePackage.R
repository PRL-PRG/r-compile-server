#? stdlib
`.requirePackage` <- function (package, mustFind = TRUE) 
{
    value <- package
    if (nzchar(package)) {
        if (.Internal(exists(package, .Internal(getNamespaceRegistry()), 
            "any", FALSE))) 
            value <- getNamespace(package)
        else {
            if (identical(package, ".GlobalEnv")) 
                return(.GlobalEnv)
            if (identical(package, "methods")) 
                return(topenv(parent.frame()))
        }
    }
    if (is.environment(value)) 
        return(value)
    topEnv <- getOption("topLevelEnvironment")
    if (is.null(topEnv)) 
        topEnv <- .GlobalEnv
    if (!is.null(pkgN <- get0(".packageName", topEnv, inherits = TRUE)) && 
        .identC(package, pkgN)) 
        return(topEnv)
    if (nzchar(package) && require(package, character.only = TRUE)) {
    }
    else {
        if (mustFind) 
            stop(gettextf("unable to find required package %s", 
                sQuote(package)), domain = NA)
        else return(NULL)
    }
    getNamespace(package)
}
