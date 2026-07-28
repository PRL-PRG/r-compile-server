#? stdlib
`formals<-` <- function (fun, envir = environment(fun), value) 
{
    if (!is.function(fun)) 
        warning("'fun' is not a function")
    bd <- body(fun)
    as.function(c(value, if (is.null(bd) || is.atomic(bd) || 
        is.list(bd)) list(bd) else bd), envir)
}
