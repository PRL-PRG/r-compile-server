#? stdlib
`loadingNamespaceInfo` <- function () 
{
    dynGet("__LoadingNamespaceInfo__", stop("not loading a namespace"))
}
