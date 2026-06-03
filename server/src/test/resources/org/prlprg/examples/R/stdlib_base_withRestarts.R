#? stdlib
`withRestarts` <- function (expr, ...) 
{
    docall <- function(fun, args) {
        if ((is.character(fun) && length(fun) == 1L) || is.name(fun)) 
            fun <- get(as.character(fun), envir = parent.frame(), 
                mode = "function")
        do.call("fun", lapply(args, enquote))
    }
    makeRestart <- function(name = "", handler = function(...) NULL, 
        description = "", test = function(c) TRUE, interactive = NULL) {
        structure(list(name = name, exit = NULL, handler = handler, 
            description = description, test = test, interactive = interactive), 
            class = "restart")
    }
    makeRestartList <- function(...) {
        specs <- list(...)
        names <- names(specs)
        restarts <- vector("list", length(specs))
        for (i in seq_along(specs)) {
            spec <- specs[[i]]
            name <- names[i]
            if (is.function(spec)) 
                restarts[[i]] <- makeRestart(handler = spec)
            else if (is.character(spec)) 
                restarts[[i]] <- makeRestart(description = spec)
            else if (is.list(spec)) 
                restarts[[i]] <- docall("makeRestart", spec)
            else stop("not a valid restart specification")
            restarts[[i]]$name <- name
        }
        restarts
    }
    withOneRestart <- function(expr, restart) {
        doWithOneRestart <- function(expr, restart) {
            restart$exit <- environment()
            .Internal(.addRestart(restart))
            expr
        }
        restartArgs <- doWithOneRestart(return(expr), restart)
        docall(restart$handler, restartArgs)
    }
    withRestartList <- function(expr, restarts) {
        nr <- length(restarts)
        if (nr > 1L) 
            withOneRestart(withRestartList(expr, restarts[-nr]), 
                restarts[[nr]])
        else if (nr == 1L) 
            withOneRestart(expr, restarts[[1L]])
        else expr
    }
    restarts <- makeRestartList(...)
    if (length(restarts) == 0L) 
        expr
    else if (length(restarts) == 1L) 
        withOneRestart(expr, restarts[[1L]])
    else withRestartList(expr, restarts)
}
