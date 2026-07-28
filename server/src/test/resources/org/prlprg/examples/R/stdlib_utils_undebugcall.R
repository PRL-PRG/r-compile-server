#? stdlib
`undebugcall` <- function (call) 
{
    call <- substitute(call)
    .debugcall(call, undebug)
    invisible(NULL)
}
