#? stdlib
`asNamespace` <- function (ns, base.OK = TRUE) 
{
    if (is.character(ns) || is.name(ns)) 
        ns <- getNamespace(ns)
    if (!isNamespace(ns)) 
        stop("not a namespace")
    else if (!base.OK && isBaseNamespace(ns)) 
        stop("operation not allowed on base namespace")
    else ns
}
