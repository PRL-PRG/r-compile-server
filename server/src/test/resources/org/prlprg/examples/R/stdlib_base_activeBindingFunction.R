#? stdlib
`activeBindingFunction` <- function (sym, env) 
{
    if (is.character(sym)) 
        sym <- as.name(sym)
    .Internal(activeBindingFunction(sym, env))
}
