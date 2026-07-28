#? stdlib
`infoRDS` <- function (file) 
{
    if (is.character(file)) {
        con <- gzfile(file, "rb")
        on.exit(close(con))
    }
    else if (inherits(file, "connection")) 
        con <- if (inherits(file, "url")) 
            gzcon(file)
        else file
    else stop("bad 'file' argument")
    .Internal(serializeInfoFromConn(con))
}
