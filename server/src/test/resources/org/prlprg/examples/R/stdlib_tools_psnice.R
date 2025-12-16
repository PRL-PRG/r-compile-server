#? stdlib
`psnice` <- function (pid = Sys.getpid(), value = NA_integer_) 
{
    res <- .Call(C_ps_priority, pid, value)
    if (is.na(value)) 
        res
    else invisible(res)
}

# Examples
