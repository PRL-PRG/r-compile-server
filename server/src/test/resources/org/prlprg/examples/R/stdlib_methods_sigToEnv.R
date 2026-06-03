#? stdlib
`sigToEnv` <- function (signature, generic) 
{
    genericSig <- generic@signature
    package <- packageSlot(signature)
    if (is.null(package)) 
        parent <- environment(generic)
    else parent <- .requirePackage(package)
    value <- new.env(parent = parent)
    classes <- as.character(signature)
    args <- names(signature)
    for (i in seq_along(args)) assign(args[[i]], classes[[i]], 
        envir = value)
    if (length(args) < length(genericSig)) 
        for (other in genericSig[is.na(match(genericSig, args))]) assign(other, 
            "ANY", envir = value)
    value
}
