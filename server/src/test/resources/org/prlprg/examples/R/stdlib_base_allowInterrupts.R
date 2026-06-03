#? stdlib
`allowInterrupts` <- function (expr) 
{
    suspended <- .Internal(interruptsSuspended())
    if (suspended) {
        on.exit(.Internal(interruptsSuspended(suspended)))
        .Internal(interruptsSuspended(FALSE))
        expr
    }
    else expr
}
