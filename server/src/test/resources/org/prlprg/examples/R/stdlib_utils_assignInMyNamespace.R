#? stdlib
`assignInMyNamespace` <- function (x, value) 
{
    f <- sys.function(-1)
    ns <- environment(f)
    if (isS4(f)) 
        while (!isNamespace(ns)) ns <- parent.env(ns)
    if (bindingIsLocked(x, ns)) {
        unlockBinding(x, ns)
        assign(x, value, envir = ns, inherits = FALSE)
        w <- options("warn")
        on.exit(options(w))
        options(warn = -1)
        lockBinding(x, ns)
    }
    else assign(x, value, envir = ns, inherits = FALSE)
    if (!isBaseNamespace(ns)) {
        S3 <- getNamespaceInfo(ns, "S3methods")
        if (!length(S3)) 
            return(invisible(NULL))
        S3names <- S3[, 3L]
        if (x %in% S3names) {
            i <- match(x, S3names)
            genfun <- get(S3[i, 1L], mode = "function", envir = parent.frame())
            if (.isMethodsDispatchOn() && methods::is(genfun, 
                "genericFunction")) 
                genfun <- methods::slot(genfun, "default")@methods$ANY
            defenv <- .defenv_for_S3_registry(genfun)
            S3Table <- defenv[[".__S3MethodsTable__."]]
            remappedName <- paste(S3[i, 1L], S3[i, 2L], sep = ".")
            if (exists(remappedName, envir = S3Table, inherits = FALSE)) 
                assign(remappedName, value, S3Table)
        }
    }
    invisible(NULL)
}
