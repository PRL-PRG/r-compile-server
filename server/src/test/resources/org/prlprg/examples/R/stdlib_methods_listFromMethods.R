#? stdlib
`listFromMethods` <- function (generic, where, table) 
{
    fdef <- getGeneric(generic)
    if (missing(table)) 
        table <- if (missing(where)) 
            .getMethodsTable(fdef)
        else get(.TableMetaName(fdef@generic, fdef@package), 
            envir = as.environment(where), inherits = FALSE)
    fev <- environment(fdef)
    nSigArgs <- .getGenericSigLength(fdef, fev)
    methods <- as.list(table, all.names = TRUE)
    names <- names(methods)
    if (nSigArgs > 1) {
        n <- length(names)
        sigs <- vector("list", n)
        namesCon <- textConnection(names)
        for (i in seq_len(n)) sigs[[i]] <- scan(namesCon, "", 
            sep = "#", nmax = nSigArgs, quiet = TRUE)
    }
    else sigs <- as.list(names)
    new("LinearMethodsList", classes = sigs, methods = methods, 
        arguments = .getGenericSigArgs(fdef, fev), generic = fdef)
}
