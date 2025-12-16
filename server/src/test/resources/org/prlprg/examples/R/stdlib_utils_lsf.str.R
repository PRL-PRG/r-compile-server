#? stdlib
`lsf.str` <- function (pos = -1, envir, ...) 
{
    if (missing(envir)) 
        envir <- as.environment(pos)
    ls.str(pos = pos, envir = envir, mode = "function", ...)
}
