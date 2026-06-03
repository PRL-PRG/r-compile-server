#? stdlib
`rc.options` <- function (...) 
{
    new <- list(...)
    if (is.null(names(new)) && length(new) == 1L && is.list(new[[1L]])) 
        new <- new[[1L]]
    old <- .CompletionEnv$options
    if (length(new) == 0L) 
        return(old)
    nm <- names(new)
    if (is.null(nm)) 
        return(old[unlist(new)])
    isNamed <- nzchar(nm)
    if (any(!isNamed)) 
        nm[!isNamed] <- unlist(new[!isNamed])
    retVal <- old[nm]
    names(retVal) <- nm
    nm <- nm[isNamed]
    .CompletionEnv$options <- modifyList(old, new[nm])
    invisible(retVal)
}
