#? stdlib
`cacheMethod` <- function (f, sig, def, args = names(sig), fdef, inherited = FALSE) 
{
    ev <- environment(fdef)
    .cacheMethodInTable(fdef, sig, def, .getMethodsTable(fdef, 
        ev, inherited = inherited))
    if (!inherited) 
        .cacheMethodInTable(fdef, sig, def, .getMethodsTable(fdef, 
            ev, inherited = TRUE))
}
