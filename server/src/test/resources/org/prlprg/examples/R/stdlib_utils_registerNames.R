#? stdlib
`registerNames` <- function (names, package, .listFile, add = TRUE) 
{
    .simplePackageName <- function(env) {
        get0(".packageName", envir = env, inherits = FALSE, ifnotfound = "(unknown package)")
    }
    if (missing(package)) {
        env <- topenv(parent.frame(2L))
        package <- .simplePackageName(env)
    }
    else if (is.environment(package)) {
        env <- package
        package <- .simplePackageName(env)
    }
    else env <- asNamespace(package)
    current <- get0(.listFile, envir = env, inherits = FALSE, 
        ifnotfound = character())
    if (!missing(names)) {
        if (environmentIsLocked(env)) 
            stop(gettextf("The namespace for package \"%s\" is locked; no changes in the global variables list may be made.", 
                package))
        current <- if (add) 
            unique(c(current, names))
        else names
        assign(.listFile, current, envir = env)
    }
    current
}
