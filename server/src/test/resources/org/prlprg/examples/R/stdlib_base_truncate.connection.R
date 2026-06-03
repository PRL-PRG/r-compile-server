#? stdlib
`truncate.connection` <- function (con, ...) 
{
    if (!isOpen(con)) 
        stop("can only truncate an open connection")
    .Internal(truncate(con))
}
