#? stdlib
`getPackageName` <- function (where = topenv(parent.frame()), create = TRUE) 
{
    env <- as.environment(where)
    pkg <- get0(".packageName", env, inherits = FALSE)
    saved <- !is.null(pkg)
    if (saved) {
        return(pkg)
    }
    else {
        pkg <- if (identical(where, 1) || identical(env, topenv(parent.frame()))) 
            Sys.getenv("R_PACKAGE_NAME")
        else ""
    }
    envName <- environmentName(env)
    if (nzchar(envName) && regexpr("package:", envName, fixed = TRUE) == 
        1L) 
        pkg <- .rmpkg(envName)
    if (!nzchar(pkg)) {
        if (identical(env, .GlobalEnv)) 
            pkg <- ".GlobalEnv"
        else if (identical(env, .BaseNamespaceEnv)) 
            pkg <- "base"
        else {
            if (is.numeric(where)) 
                pkg <- search()[[where]]
            else if (is.environment(where)) {
                for (db in search()) if (identical(as.environment(db), 
                  where)) {
                  pkg <- db
                  break
                }
            }
            else if (nzchar(envName)) 
                pkg <- envName
            else pkg <- as.character(where)
            pkg <- .rmpkg(pkg)
        }
    }
    if (!nzchar(pkg)) {
        top <- topenv(env)
        if (!identical(top, env)) {
            pkg <- getPackageName(top, create = create)
        }
    }
    if (!nzchar(pkg) && create) {
        pkg <- as.character(Sys.time())
        warning(gettextf("Created a package name, %s, when none found", 
            sQuote(pkg)), domain = NA)
        if (!saved && !environmentIsLocked(env)) 
            setPackageName(pkg, env)
    }
    pkg
}

# Examples
## all the following usually return "base"
getPackageName(length(search()))
getPackageName(baseenv())
getPackageName(asNamespace("base"))
getPackageName("package:base")


