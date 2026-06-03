#? stdlib
`system.time` <- function (expr, gcFirst = TRUE) 
{
    ppt <- function(y) {
        if (!is.na(y[4L])) 
            y[1L] <- y[1L] + y[4L]
        if (!is.na(y[5L])) 
            y[2L] <- y[2L] + y[5L]
        paste(formatC(y[1L:3L]), collapse = " ")
    }
    if (gcFirst) 
        gc(FALSE)
    time <- proc.time()
    on.exit(message("Timing stopped at: ", ppt(proc.time() - 
        time)))
    expr
    new.time <- proc.time()
    on.exit()
    structure(new.time - time, class = "proc_time")
}
