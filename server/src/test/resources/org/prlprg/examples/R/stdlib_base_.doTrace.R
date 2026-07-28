#? stdlib
`.doTrace` <- function (expr, msg) 
{
    on <- tracingState(FALSE)
    if (on) {
        on.exit(tracingState(TRUE))
        if (!missing(msg)) {
            call <- deparse(sys.call(sys.parent(1L)))
            if (length(call) > 1L) 
                call <- paste(call[[1L]], "....")
            cat("Tracing", call, msg, "\n")
        }
        exprObj <- substitute(expr)
        eval.parent(exprObj)
    }
    NULL
}
