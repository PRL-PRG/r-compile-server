#? stdlib
`Rprof` <- function (filename = "Rprof.out", append = FALSE, interval = 0.02, 
    memory.profiling = FALSE, gc.profiling = FALSE, line.profiling = FALSE, 
    filter.callframes = FALSE, numfiles = 100L, bufsize = 10000L, 
    event = c("default", "cpu", "elapsed")) 
{
    event <- match.arg(event)
    if (is.null(filename)) 
        filename <- ""
    invisible(.External(C_Rprof, filename, append, interval, 
        memory.profiling, gc.profiling, line.profiling, filter.callframes, 
        numfiles, bufsize, event))
}

# Examples

