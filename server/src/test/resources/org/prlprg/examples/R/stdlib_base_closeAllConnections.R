#? stdlib
`closeAllConnections` <- function () 
{
    i <- sink.number(type = "message")
    if (i > 0L) 
        sink(stderr(), type = "message")
    n <- sink.number()
    if (n > 0L) 
        for (i in seq_len(n)) sink()
    gc()
    set <- getAllConnections()
    set <- set[set > 2L]
    for (i in seq_along(set)) close(getConnection(set[i]))
    invisible()
}
