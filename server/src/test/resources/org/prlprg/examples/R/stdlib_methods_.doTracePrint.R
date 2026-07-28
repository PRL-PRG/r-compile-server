#? stdlib
`.doTracePrint` <- function (msg = "") 
{
    call <- deparse(sys.call(sys.parent(1)))
    if (length(call) > 1) 
        call <- paste(call[[1L]], "....")
    cat("Tracing", call, msg, "\n")
}
