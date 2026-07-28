#? stdlib
`.shallowCopy` <- function (object, selfEnv) 
{
    newEnv <- list2env(as.list(selfEnv, all.names = TRUE), hash = TRUE)
    attr(object, ".xData") <- newEnv
    assign(".self", object, envir = newEnv)
    object
}
