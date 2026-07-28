#? stdlib
`bindingIsActive` <- function (sym, env) 
{
    if (is.character(sym)) 
        sym <- as.name(sym)
    .Internal(bindingIsActive(sym, env))
}
