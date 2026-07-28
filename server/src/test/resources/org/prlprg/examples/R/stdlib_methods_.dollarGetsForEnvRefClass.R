#? stdlib
`.dollarGetsForEnvRefClass` <- function (x, name, value) 
{
    what <- substitute(name)
    if (is.symbol(what)) 
        what <- as.character(what)
    else what <- name
    selfEnv <- as.environment(x)
    envRefSetField(x, what, refObjectClass(x), selfEnv, value)
    invisible(x)
}
