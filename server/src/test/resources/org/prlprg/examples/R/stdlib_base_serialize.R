#? stdlib
`serialize` <- function (object, connection, ascii = FALSE, xdr = TRUE, version = NULL, 
    refhook = NULL) 
{
    if (!is.null(connection)) {
        if (!inherits(connection, "connection")) 
            stop("'connection' must be a connection")
        if (missing(ascii)) 
            ascii <- summary(connection)$text == "text"
    }
    if (!ascii && inherits(connection, "sockconn")) 
        .Internal(serializeb(object, connection, xdr, version, 
            refhook))
    else {
        type <- if (is.na(ascii)) 
            2L
        else if (ascii) 
            1L
        else if (!xdr) 
            3L
        else 0L
        .Internal(serialize(object, connection, type, version, 
            refhook))
    }
}

# Examples
x <- serialize(list(1,2,3), NULL)
unserialize(x)

## see also the examples for saveRDS

