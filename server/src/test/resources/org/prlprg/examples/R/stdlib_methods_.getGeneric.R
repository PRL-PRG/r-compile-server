#? stdlib
`.getGeneric` <- function (f, where = .GlobalEnv, package = "") 
{
    value <- if (missing(where)) 
        .getGenericFromCache(f, where, package)
    if (is.null(value)) {
        if (is.character(f) && f %in% "as.double") 
            f <- "as.numeric"
        if (is.character(f) && !nzchar(f)) {
            message("Empty function name in .getGeneric")
            dput(sys.calls())
        }
        value <- .Call(C_R_getGeneric, f, FALSE, as.environment(where), 
            package)
        if (!is.null(value) && !is.null(vv <- .GlobalEnv[[f]]) && 
            identical(vv, value)) 
            .cacheGeneric(f, value)
    }
    value
}
