#? stdlib
`.makeTraceClass` <- function (traceClassName, className, verbose = TRUE) 
{
    if (isClass(as.character(traceClassName))) 
        return(as.character(traceClassName))
    if (verbose) 
        message(sprintf("Constructing traceable class %s", dQuote(traceClassName)), 
            domain = NA)
    env <- .classEnv(className)
    if (environmentIsLocked(env)) {
        message(gettextf("Environment of class %s is locked; using global environment for new class", 
            dQuote(className)), domain = NA)
        env <- .GlobalEnv
        packageSlot(traceClassName) <- NULL
    }
    setClass(traceClassName, contains = c(className, "traceable"), 
        where = env)
    if (existsMethod("show", className, env)) 
        setMethod("show", traceClassName, .showTraceable)
    traceClassName
}
