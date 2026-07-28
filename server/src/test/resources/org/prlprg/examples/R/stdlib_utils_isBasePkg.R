#? stdlib
`isBasePkg` <- function (pkg) 
{
    priority <- tryCatch(packageDescription(pkg, fields = "Priority", 
        encoding = NA), error = function(e) e, warning = function(e) e)
    identical(priority, "base")
}
