#? stdlib
`SweaveHooks` <- function (options, run = FALSE, envir = .GlobalEnv) 
{
    if (is.null(SweaveHooks <- getOption("SweaveHooks"))) 
        return(NULL)
    z <- character()
    for (k in names(SweaveHooks)) if (nzchar(k) && is.logical(options[[k]]) && 
        options[[k]]) 
        if (is.function(SweaveHooks[[k]])) {
            z <- c(z, k)
            if (run) 
                eval(SweaveHooks[[k]](), envir = envir)
        }
    z
}
