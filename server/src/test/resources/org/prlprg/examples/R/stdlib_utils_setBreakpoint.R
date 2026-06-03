#? stdlib
`setBreakpoint` <- function (srcfile, line, nameonly = TRUE, envir = parent.frame(), 
    lastenv, verbose = TRUE, tracer, print = FALSE, clear = FALSE, 
    ...) 
{
    if (missing(lastenv)) 
        lastenv <- if (missing(envir)) 
            globalenv()
        else emptyenv()
    locations <- findLineNum(srcfile, line, nameonly, envir, 
        lastenv)
    if (verbose) 
        print(locations, steps = !clear)
    breakpoint <- missing(tracer)
    while (length(locations)) {
        what <- locations[[1]]$name
        where <- locations[[1]]$env
        at <- list(locations[[1]]$at)
        signature <- locations[[1]]$signature
        if (breakpoint) {
            loc1 <- locations[[1]]
            filename <- basename(loc1$filename)
            linenum <- loc1$line
            tracer <- bquote({
                cat(paste0(.(filename), "#", .(linenum), "\n"))
                browser(skipCalls = 4L)
            })
        }
        locations[[1]] <- NULL
        i <- 1L
        while (i <= length(locations)) {
            if (what == locations[[i]]$name && identical(where, 
                locations[[i]]$env) && identical(signature, locations[[i]]$signature)) {
                at <- c(at, list(locations[[i]]))
                locations[[i]] <- NULL
            }
            else i <- i + 1L
        }
        if (clear) {
            if (is.null(signature)) 
                untrace(what, where = where)
            else untrace(what, signature = signature, where = where)
        }
        else if (is.null(signature)) 
            trace(what, tracer, at = at, print = print, where = where, 
                ...)
        else trace(what, tracer, at = at, print = print, signature = signature, 
            where = where, ...)
    }
}
