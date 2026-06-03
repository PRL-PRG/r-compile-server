#? stdlib
`unloadNamespace` <- function (ns) 
{
    if ((is.character(ns) && any(ns == loadedNamespaces())) || 
        (is.environment(ns) && any(getNamespaceName(ns) == loadedNamespaces()))) {
        runHook <- function(hookname, env, ...) {
            if (!is.null(fun <- env[[hookname]])) {
                res <- tryCatch(fun(...), error = identity)
                if (inherits(res, "error")) {
                  warning(gettextf("%s failed in %s() for '%s', details:\n  call: %s\n  error: %s", 
                    hookname, "unloadNamespace", nsname, deparse(conditionCall(res))[1L], 
                    conditionMessage(res)), call. = FALSE, domain = NA)
                }
            }
        }
        ns <- asNamespace(ns, base.OK = FALSE)
        nsname <- getNamespaceName(ns)
        pos <- match(paste0("package:", nsname), search())
        if (!is.na(pos)) 
            detach(pos = pos)
        users <- getNamespaceUsers(ns)
        if (length(users)) 
            stop(gettextf("namespace %s is imported by %s so cannot be unloaded", 
                sQuote(getNamespaceName(ns)), paste(sQuote(users), 
                  collapse = ", ")), domain = NA)
        nspath <- .getNamespaceInfo(ns, "path")
        hook <- getHook(packageEvent(nsname, "onUnload"))
        for (fun in rev(hook)) try(fun(nsname, nspath))
        runHook(".onUnload", ns, nspath)
        .Internal(unregisterNamespace(nsname))
        if (.isMethodsDispatchOn() && methods:::.hasS4MetaData(ns)) 
            methods::cacheMetaData(ns, FALSE, ns)
        .Internal(lazyLoadDBflush(paste0(nspath, "/R/", nsname, 
            ".rdb")))
    }
    invisible()
}
