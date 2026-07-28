#? stdlib
`seek.connection` <- function (con, where = NA, origin = "start", rw = "", ...) 
{
    origin <- pmatch(origin, c("start", "current", "end"))
    rw <- pmatch(rw, c("read", "write"), 0L)
    if (is.na(origin)) 
        stop("'origin' must be one of 'start', 'current' or 'end'")
    .Internal(seek(con, as.double(where), origin, rw))
}
