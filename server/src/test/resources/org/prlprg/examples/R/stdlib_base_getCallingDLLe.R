#? stdlib
`getCallingDLLe` <- function (e) 
{
    if (is.null(env <- e$.__NAMESPACE__.)) 
        env <- baseenv()
    if (!is.null(Ds <- get0("DLLs", envir = env)) && length(Ds)) 
        Ds[[1L]]
}
