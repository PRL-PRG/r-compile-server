#? stdlib
`getFunction` <- function (name, generic = TRUE, mustFind = TRUE, where = topenv(parent.frame())) 
{
    if (length(name) != 1L || !nzchar(name)) 
        stop(gettextf("expected a non-empty character string for argument 'name'"), 
            domain = NA)
    found <- FALSE
    where <- as.environment(where)
    f <- NULL
    lastEnv <- if (isNamespace(where)) 
        function(where) isBaseNamespace(where)
    else function(where) identical(where, baseenv())
    repeat {
        if (!is.null(f <- get0(name, envir = where, mode = "function", 
            inherits = FALSE))) 
            found <- generic || !is(f, "genericFunction")
        if (found || lastEnv(where)) 
            break
        where <- parent.env(where)
    }
    if (!found && mustFind) 
        stop(if (generic) 
            gettextf("no function %s found", sQuote(name))
        else gettextf("no non-generic function %s found", sQuote(name)), 
            domain = NA)
    f
}
