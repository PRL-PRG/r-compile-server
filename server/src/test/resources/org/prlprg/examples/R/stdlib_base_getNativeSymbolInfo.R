#? stdlib
`getNativeSymbolInfo` <- function (name, PACKAGE, unlist = TRUE, withRegistrationInfo = FALSE) 
{
    if (missing(PACKAGE)) 
        PACKAGE <- ""
    if (is.character(PACKAGE)) 
        pkgName <- PACKAGE
    else if (inherits(PACKAGE, "DLLInfo")) {
        pkgName <- PACKAGE[["path"]]
        PACKAGE <- PACKAGE[["info"]]
    }
    else if (inherits(PACKAGE, "DLLInfoReference")) {
        pkgName <- character()
    }
    else stop(gettextf("must pass a package name, %s or %s object", 
        dQuote("DLLInfo"), dQuote("DllInfoReference")), domain = NA)
    syms <- lapply(name, function(id) {
        v <- .Internal(getSymbolInfo(as.character(id), PACKAGE, 
            as.logical(withRegistrationInfo)))
        if (is.null(v)) {
            msg <- paste("no such symbol", id)
            if (length(pkgName) && nzchar(pkgName)) 
                msg <- paste(msg, "in package", pkgName)
            stop(msg, domain = NA)
        }
        names(v) <- c("name", "address", "dll", "numParameters")[seq_along(v)]
        v
    })
    if (length(name) == 1L && unlist) 
        syms <- syms[[1L]]
    else names(syms) <- name
    syms
}
