#? stdlib
`dump.frames` <- function (dumpto = "last.dump", to.file = FALSE, include.GlobalEnv = FALSE) 
{
    calls <- sys.calls()
    last.dump <- sys.frames()
    names(last.dump) <- limitedLabels(calls)
    if (include.GlobalEnv) {
        last.dump <- c(.GlobalEnv = as.environment(as.list(.GlobalEnv, 
            all.names = TRUE)), last.dump)
    }
    last.dump <- last.dump[-length(last.dump)]
    attr(last.dump, "error.message") <- geterrmessage()
    class(last.dump) <- "dump.frames"
    if (dumpto != "last.dump") 
        assign(dumpto, last.dump)
    if (to.file) 
        save(list = dumpto, file = paste0(dumpto, ".rda"))
    else assign(dumpto, last.dump, envir = .GlobalEnv)
    invisible()
}
