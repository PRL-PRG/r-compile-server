#? stdlib
`doPrimitiveMethod` <- function (name, def, call = sys.call(sys.parent()), ev = sys.frame(sys.parent(2))) 
{
    cat("called doPrimitiveMethod\n\n")
    if (!is.null(prev <- ev[[name]])) {
        on.exit(assign(name, prev, envir = ev))
    }
    else on.exit(rm(list = name, envir = ev))
    assign(name, def, envir = ev)
    eval(call, ev)
}
