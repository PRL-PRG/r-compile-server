#? stdlib
`attachNamespace` <- function (ns, pos = 2L, depends = NULL, exclude, include.only) 
{
    runHook <- function(hookname, env, libname, pkgname) {
        if (!is.null(fun <- env[[hookname]])) {
            res <- tryCatch(fun(libname, pkgname), error = identity)
            if (inherits(res, "error")) {
                stop(gettextf("%s failed in %s() for '%s', details:\n  call: %s\n  error: %s", 
                  hookname, "attachNamespace", nsname, deparse(conditionCall(res))[1L], 
                  conditionMessage(res)), call. = FALSE, domain = NA)
            }
        }
    }
    runUserHook <- function(pkgname, pkgpath) {
        hook <- getHook(packageEvent(pkgname, "attach"))
        for (fun in hook) try(fun(pkgname, pkgpath))
    }
    ns <- asNamespace(ns, base.OK = FALSE)
    nsname <- getNamespaceName(ns)
    nspath <- .getNamespaceInfo(ns, "path")
    attname <- paste0("package:", nsname)
    if (attname %in% search()) 
        stop("namespace is already attached")
    env <- attach(NULL, pos = pos, name = attname)
    on.exit(.Internal(detach(pos)))
    attr(env, "path") <- nspath
    exports <- getNamespaceExports(ns)
    importIntoEnv(env, exports, ns, exports)
    dimpenv <- .getNamespaceInfo(ns, "lazydata")
    dnames <- names(dimpenv)
    .Internal(importIntoEnv(env, dnames, dimpenv, dnames))
    if (length(depends) > 0L) 
        env$.Depends <- depends
    Sys.setenv(`_R_NS_LOAD_` = nsname)
    on.exit(Sys.unsetenv("_R_NS_LOAD_"), add = TRUE)
    runHook(".onAttach", ns, dirname(nspath), nsname)
    if (!missing(exclude) && length(exclude) > 0) 
        rm(list = exclude, envir = env)
    if (!missing(include.only)) {
        vars <- ls(env, all.names = TRUE)
        nf <- setdiff(include.only, vars)
        if (length(nf) > 0) {
            nf <- strwrap(paste(nf, collapse = ", "), indent = 4L, 
                exdent = 4L)
            stop(gettextf("not found in namespace %s: \n\n%s\n", 
                sQuote(nsname), nf), call. = FALSE, domain = NA)
        }
        rm(list = setdiff(vars, include.only), envir = env)
    }
    lockEnvironment(env, TRUE)
    runUserHook(nsname, nspath)
    on.exit()
    Sys.unsetenv("_R_NS_LOAD_")
    invisible(env)
}
