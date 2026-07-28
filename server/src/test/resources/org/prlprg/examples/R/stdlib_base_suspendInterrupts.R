#? stdlib
`suspendInterrupts` <- function (expr) 
{
    suspended <- .Internal(interruptsSuspended())
    if (suspended) 
        expr
    else {
        on.exit(.Internal(interruptsSuspended(suspended)))
        .Internal(interruptsSuspended(TRUE))
        expr
    }
}
