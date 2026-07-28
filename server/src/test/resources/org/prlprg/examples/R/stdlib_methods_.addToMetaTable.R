#? stdlib
`.addToMetaTable` <- function (fdef, signature, definition, where, nSig = .getGenericSigLength(fdef)) 
{
    tname <- .TableMetaName(fdef@generic, fdef@package)
    where <- as.environment(where)
    if (!is.null(table <- where[[tname]])) {
        if (length(signature) > nSig) 
            .resetTable(table, length(signature), fdef@signature[seq_along(signature)])
    }
    else {
        table <- new.env(TRUE, environment(fdef))
        assign(tname, table, envir = where)
    }
    .cacheMethodInTable(fdef, signature, definition, table)
}
