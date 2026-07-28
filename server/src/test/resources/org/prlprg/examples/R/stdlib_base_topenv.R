#? stdlib
`topenv` <- function (envir = parent.frame(), matchThisEnv = getOption("topLevelEnvironment")) 
{
    .Internal(topenv(envir, matchThisEnv))
}
