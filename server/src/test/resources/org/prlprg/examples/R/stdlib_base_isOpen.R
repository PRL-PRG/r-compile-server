#? stdlib
`isOpen` <- function (con, rw = "") 
{
    rw <- pmatch(rw, c("read", "write"), 0L)
    .Internal(isOpen(con, rw))
}
