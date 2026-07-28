#? stdlib
`.findNextFromTable` <- function (method, f, optional, envir, prev = character()) 
{
    fdef <- getGeneric(f, where = envir)
    env <- environment(fdef)
    n <- get(".SigLength", envir = env)
    defined <- method@defined
    m <- length(defined)
    if (m > n) 
        length(defined) <- n
    else if (n > m) 
        defined <- new("signature", fdef, c(defined@.Data, rep("ANY", 
            n - m)))
    excluded <- c(prev, .sigLabel(defined))
    allTable <- .getMethodsTable(fdef, inherited = TRUE)
    methods <- .findInheritedMethods(defined, fdef, mtable = NULL, 
        table = allTable, excluded = excluded, where = envir)
    if (length(methods) == 0L) 
        methods <- list(finalDefaultMethod(fdef@default))
    if (length(methods) > 1L) 
        warning(sprintf(ngettext(length(methods), "found %d equally good next method", 
            "found %d equally good next methods"), length(methods)), 
            domain = NA)
    new("MethodWithNext", method, nextMethod = methods[[1L]], 
        excluded = as.list(excluded))
}
