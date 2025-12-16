#? stdlib
`saveRDS` <- function (object, file = "", ascii = FALSE, version = NULL, compress = TRUE, 
    refhook = NULL) 
{
    if (is.character(file)) {
        if (length(file) != 1 || file == "") 
            stop(gettextf("'%s' must be a non-empty string", 
                "file"), domain = NA)
        object <- object
        mode <- if (ascii %in% FALSE) 
            "wb"
        else "w"
        con <- if (is.logical(compress)) 
            if (compress) 
                gzfile(file, mode)
            else file(file, mode)
        else switch(compress, bzip2 = bzfile(file, mode), xz = xzfile(file, 
            mode), gzip = gzfile(file, mode), stop("invalid 'compress' argument: ", 
            compress))
        on.exit(close(con))
    }
    else if (inherits(file, "connection")) {
        if (!missing(compress)) 
            warning("'compress' is ignored unless 'file' is a file name")
        con <- file
    }
    else stop("bad 'file' argument")
    .Internal(serializeToConn(object, con, ascii, version, refhook))
}
