#? stdlib
`autoloader` <- function (name, package, ...) 
{
    name <- paste0(name, "")
    rm(list = name, envir = .AutoloadEnv, inherits = FALSE)
    m <- match.call()
    m$name <- NULL
    m[[1L]] <- as.name("library")
    eval(m, .GlobalEnv)
    autoload(name, package, reset = TRUE, ...)
    where <- match(paste0("package:", package), search())
    if (exists(name, where = where, inherits = FALSE)) 
        eval(as.name(name), as.environment(where))
    else stop(gettextf("autoloader did not find '%s' in '%s'", 
        name, package), domain = NA)
}
