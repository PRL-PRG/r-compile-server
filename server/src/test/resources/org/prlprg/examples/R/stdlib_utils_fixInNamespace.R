#? stdlib
`fixInNamespace` <- function (x, ns, pos = -1, envir = as.environment(pos), ...) 
{
    subx <- substitute(x)
    if (is.name(subx)) 
        subx <- deparse(subx)
    if (!is.character(subx) || length(subx) != 1L) 
        stop("'fixInNamespace' requires a name")
    if (missing(ns)) {
        nm <- attr(envir, "name", exact = TRUE)
        if (is.null(nm) || !startsWith(nm, "package:")) 
            stop("environment specified is not a package")
        ns <- asNamespace(substring(nm, 9L))
    }
    else ns <- asNamespace(ns)
    x <- edit(get(subx, envir = ns, inherits = FALSE), ...)
    assignInNamespace(subx, x, ns)
}
