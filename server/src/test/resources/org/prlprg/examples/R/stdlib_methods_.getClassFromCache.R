#? stdlib
`.getClassFromCache` <- function (name, where, package = packageSlot(name), resolve.confl = "first", 
    resolve.msg = TRUE) 
{
    value <- .getClassesFromCache(name)
    if (is.list(value)) {
        value <- .resolveClassList(value, where, package, resolve.confl, 
            resolve.msg)
    }
    value
}
