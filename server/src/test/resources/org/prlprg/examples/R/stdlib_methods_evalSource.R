#? stdlib
`evalSource` <- function (source, package = "", lock = TRUE, cache = FALSE) 
{
    if (!nzchar(package)) 
        envp <- .GlobalEnv
    else {
        pstring <- paste0("package:", package)
        packageIsVisible <- pstring %in% search()
        if (packageIsVisible) {
            envp <- as.environment(pstring)
        }
        else {
            envp <- tryCatch(asNamespace(package), error = function(cond) NULL)
        }
        if (is.null(envp)) 
            stop(gettextf("package %s is not attached and no namespace found for it", 
                sQuote(package)), domain = NA)
    }
    env <- new("sourceEnvironment", new.env(parent = envp), packageName = package, 
        sourceFile = (if (is.character(source)) 
            source
        else ""))
    env$.packageName <- package
    setCacheOnAssign(env, cache)
    if (is(source, "character")) 
        for (text in source) sys.source(text, envir = env)
    else if (is(source, "connection")) 
        sys.source(source, envir = env)
    else if (!is(source, "environment")) 
        stop(gettextf("invalid 'source' argument: expected file names or a connection but got an object of class %s", 
            dQuote(class(source)[[1L]])), domain = NA)
    if (lock) 
        lockEnvironment(env, bindings = TRUE)
    env
}

# Examples


