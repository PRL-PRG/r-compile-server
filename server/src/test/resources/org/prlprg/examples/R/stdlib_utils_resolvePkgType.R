#? stdlib
`resolvePkgType` <- function (type) 
{
    if (type == "both") 
        type <- "source"
    else if (type == "binary") 
        type <- .Platform$pkgType
    type
}
