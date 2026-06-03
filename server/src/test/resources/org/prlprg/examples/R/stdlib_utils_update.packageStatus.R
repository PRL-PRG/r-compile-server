#? stdlib
`update.packageStatus` <- function (object, lib.loc = levels(object$inst$LibPath), repositories = levels(object$avail$Repository), 
    ...) 
{
    packageStatus(lib.loc = lib.loc, repositories = repositories)
}
