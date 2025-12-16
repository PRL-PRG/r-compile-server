#? stdlib
`unserialize` <- function (connection, refhook = NULL) 
{
    if (typeof(connection) != "raw" && !is.character(connection) && 
        !inherits(connection, "connection")) 
        stop("'connection' must be a connection")
    .Internal(unserialize(connection, refhook))
}
