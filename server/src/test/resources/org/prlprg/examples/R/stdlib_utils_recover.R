#? stdlib
`recover` <- function () 
{
    if (.isMethodsDispatchOn()) {
        tState <- tracingState(FALSE)
        on.exit(tracingState(tState))
    }
    calls <- sys.calls()
    from <- 0L
    n <- length(calls)
    if (identical(sys.function(n), recover)) 
        n <- n - 1L
    for (i in rev(seq_len(n))) {
        calli <- calls[[i]]
        fname <- calli[[1L]]
        if (!is.na(match(deparse(fname)[1L], c("methods::.doTrace", 
            ".doTrace")))) {
            from <- i - 1L
            break
        }
    }
    if (from == 0L) 
        for (i in rev(seq_len(n))) {
            calli <- calls[[i]]
            fname <- calli[[1L]]
            if (!is.name(fname) || is.na(match(as.character(fname), 
                c("recover", "stop", "Stop")))) {
                from <- i
                break
            }
        }
    if (from > 0L) {
        if (!interactive()) {
            try(dump.frames())
            cat(gettext("recover called non-interactively; frames dumped, use debugger() to view\n"))
            return(NULL)
        }
        calls <- limitedLabels(calls[1L:from])
        repeat {
            which <- menu(calls, title = "\nEnter a frame number, or 0 to exit  ")
            if (which) 
                eval(substitute(browser(skipCalls = skip), list(skip = 7 - 
                  which)), envir = sys.frame(which))
            else break
        }
    }
    else cat(gettext("No suitable frames for recover()\n"))
}

# Examples


