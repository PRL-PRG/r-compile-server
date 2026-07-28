#? stdlib
`importIntoEnv` <- function (impenv, impnames, expenv, expnames) 
{
    exports <- getNamespaceInfo(expenv, "exports")
    ex <- names(exports)
    if (!all(eie <- expnames %in% ex)) {
        miss <- expnames[!eie]
        if (all(startsWith(miss, ".__C__"))) {
            miss <- sub("^\\.__C__", "", miss)
            stop(sprintf(ngettext(length(miss), "class %s is not exported by 'namespace:%s'", 
                "classes %s are not exported by 'namespace:%s'"), 
                paste(paste0("\"", miss, "\""), collapse = ", "), 
                getNamespaceName(expenv)), call. = FALSE, domain = NA)
        }
        else {
            stop(sprintf(ngettext(length(miss), "object %s is not exported by 'namespace:%s'", 
                "objects %s are not exported by 'namespace:%s'"), 
                paste(sQuote(miss), collapse = ", "), getNamespaceName(expenv)), 
                call. = FALSE, domain = NA)
        }
    }
    expnames <- unlist(mget(expnames, envir = exports, inherits = FALSE), 
        recursive = FALSE)
    if (is.null(impnames)) 
        impnames <- character()
    if (is.null(expnames)) 
        expnames <- character()
    .Internal(importIntoEnv(impenv, impnames, expenv, expnames))
}
