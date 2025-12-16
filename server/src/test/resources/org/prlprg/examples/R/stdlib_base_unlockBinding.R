#? stdlib
`unlockBinding` <- function (sym, env) 
{
    if (is.character(sym)) 
        sym <- as.name(sym)
    .Internal(unlockBinding(sym, env))
}
