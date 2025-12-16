#? stdlib
`.dollarForEnvRefClass` <- function (x, name) 
{
    what <- substitute(name)
    if (is.symbol(what)) 
        what <- as.character(what)
    else what <- name
    selfEnv <- as.environment(x)
    if (exists(what, envir = selfEnv, inherits = FALSE)) 
        get(what, envir = selfEnv)
    else if (is(x, "envRefClass")) 
        envRefInferField(x, what, getClass(class(x)), selfEnv)
    else stop(gettextf("%s is not a valid field or method name for this class", 
        sQuote(what)), domain = NA)
}
