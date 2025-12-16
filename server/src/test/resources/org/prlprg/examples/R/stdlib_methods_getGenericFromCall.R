#? stdlib
`getGenericFromCall` <- function (call, methodEnv) 
{
    generic <- methodEnv$.Generic
    if (is.null(generic)) {
        fdef <- if (is.name(call[[1L]])) 
            getGeneric(as.character(call[[1L]]), mustFind = TRUE, 
                where = methodEnv)
        else call[[1L]]
        generic <- environment(fdef)$.Generic
    }
    generic
}
