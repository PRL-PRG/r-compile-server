#? stdlib
`body<-` <- function (fun, envir = environment(fun), value) 
{
    if (!is.function(fun)) 
        warning("'fun' is not a function")
    if (is.expression(value)) {
        if (length(value) > 1L) 
            warning("using the first element of 'value' of type \"expression\"")
        value <- value[[1L]]
    }
    as.function(c(formals(fun), if (is.null(value) || is.atomic(value) || 
        is.list(value)) list(value) else value), envir)
}
