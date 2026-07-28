#? stdlib
`getClassDef` <- function (Class, where = topenv(parent.frame()), package = packageSlot(Class), 
    inherits = TRUE) 
{
    if (inherits) {
        value <- .getClassesFromCache(Class)
        if (is.list(value)) 
            value <- .resolveClassList(value, where, package)
    }
    else value <- NULL
    if (is.null(value)) {
        cname <- classMetaName(if (length(Class) > 1L) 
            Class[[1L]]
        else Class)
        if (is.character(where)) {
            package <- where
        }
        if (isTRUE(nzchar(package))) {
            package <- .requirePackage(package)
        }
        if (is.environment(package)) {
            value <- get0(cname, package, inherits = inherits)
        }
        if (is.null(value)) 
            value <- get0(cname, where, inherits = inherits)
    }
    value
}
