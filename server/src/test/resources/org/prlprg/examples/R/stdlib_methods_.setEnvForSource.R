#? stdlib
`.setEnvForSource` <- function (env) 
{
    doNothing <- function(x, ...) x
    for (f in .functionsOverriden) assign(f, switch(f, setMethod = .dummySetMethod, 
        doNothing), envir = env)
    env
}
