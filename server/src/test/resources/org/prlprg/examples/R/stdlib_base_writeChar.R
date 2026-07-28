#? stdlib
`writeChar` <- function (object, con, nchars = nchar(object, type = "chars"), 
    eos = "", useBytes = FALSE) 
{
    if (!is.character(object)) 
        stop("can only write character objects")
    if (is.character(con)) {
        con <- file(con, "wb")
        on.exit(close(con))
    }
    .Internal(writeChar(object, con, as.integer(nchars), eos, 
        useBytes))
}
