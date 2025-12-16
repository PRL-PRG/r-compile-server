#? stdlib
`makeActiveBinding` <- function (sym, fun, env) 
{
    if (is.character(sym)) 
        sym <- as.name(sym)
    .Internal(makeActiveBinding(sym, fun, env))
}
