#? stdlib
`lockBinding` <- function (sym, env) 
{
    if (is.character(sym)) 
        sym <- as.name(sym)
    .Internal(lockBinding(sym, env))
}
