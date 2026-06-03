#? stdlib
`untrace` <- function (what, signature = NULL, where = topenv(parent.frame())) 
{
    if (!.isMethodsDispatchOn()) 
        return(.primUntrace(what))
    tState <- tracingState(FALSE)
    on.exit(tracingState(tState))
    call <- sys.call()
    call[[1L]] <- quote(methods:::.TraceWithMethods)
    call$where <- where
    call$untrace <- TRUE
    invisible(eval.parent(call))
}
