#? stdlib
`getFromNamespace` <- function (x, ns, pos = -1, envir = as.environment(pos)) 
{
    if (missing(ns)) {
        nm <- attr(envir, "name", exact = TRUE)
        if (is.null(nm) || !startsWith(nm, "package:")) 
            stop("environment specified is not a package")
        ns <- asNamespace(substring(nm, 9L))
    }
    else ns <- asNamespace(ns)
    get(x, envir = ns, inherits = FALSE)
}

# Examples
getFromNamespace("findGeneric", "utils")

