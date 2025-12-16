#? stdlib
`packageVersion` <- function (pkg, lib.loc = NULL) 
{
    res <- suppressWarnings(packageDescription(pkg, lib.loc = lib.loc, 
        fields = "Version"))
    if (!is.na(res)) 
        package_version(res)
    else stop(packageNotFoundError(pkg, lib.loc, sys.call()))
}
