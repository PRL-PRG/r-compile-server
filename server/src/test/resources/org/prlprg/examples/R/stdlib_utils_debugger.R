#? stdlib
`debugger` <- function (dump = last.dump) 
{
    debugger.look <- function(.selection) {
        for (.obj in ls(envir = dump[[.selection]], all.names = TRUE)) tryCatch(assign(.obj, 
            get(.obj, envir = dump[[.selection]])), error = function(e) {
        })
        cat(gettext("Browsing in the environment with call:\n   "), 
            calls[.selection], "\n", sep = "")
        rm(.obj, .selection)
        browser()
    }
    if (!inherits(dump, "dump.frames")) {
        cat(gettextf("'dump' is not an object of class %s\n", 
            dQuote("dump.frames")))
        return(invisible())
    }
    err.action <- getOption("error")
    on.exit(options(error = err.action))
    if (length(msg <- attr(dump, "error.message"))) 
        cat(gettext("Message: "), msg)
    n <- length(dump)
    if (!n) {
        cat(gettextf("'dump' is empty\n"))
        return(invisible())
    }
    calls <- names(dump)
    repeat {
        cat(gettext("Available environments had calls:\n"))
        cat(paste0(1L:n, ": ", calls), sep = "\n")
        cat(gettext("\nEnter an environment number, or 0 to exit  "))
        repeat {
            ind <- .Call(C_menu, as.character(calls))
            if (ind <= n) 
                break
        }
        if (ind == 0L) 
            return(invisible())
        debugger.look(ind)
    }
}

# Examples

