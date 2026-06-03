#? stdlib
`invokeRestartInteractively` <- function (r) 
{
    if (!interactive()) 
        stop("not an interactive session")
    if (!isRestart(r)) {
        res <- findRestart(r)
        if (is.null(res)) 
            stop(gettextf("no 'restart' '%s' found", as.character(r)), 
                domain = NA)
        r <- res
    }
    if (is.null(r$interactive)) {
        pars <- names(restartFormals(r))
        args <- NULL
        if (length(pars)) {
            cat("Enter values for restart arguments:\n\n")
            for (p in pars) {
                if (p == "...") {
                  prompt <- "... (a list): "
                  args <- c(args, eval(parse(prompt = prompt)))
                }
                else {
                  prompt <- paste0(p, ": ")
                  args <- c(args, list(eval(parse(prompt = prompt))))
                }
            }
        }
    }
    else args <- r$interactive()
    .Internal(.invokeRestart(r, args))
}
