#? stdlib
`debugcall` <- function (call, once = FALSE) 
{
    stopifnot(length(once) == 1L, is.logical(once), !is.na(once))
    call <- substitute(call)
    .debugcall(call, if (once) 
        debugonce
    else debug)
    invisible(call)
}

# Examples


