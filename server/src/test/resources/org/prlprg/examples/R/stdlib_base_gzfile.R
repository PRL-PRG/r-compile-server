#? stdlib
`gzfile` <- function (description, open = "", encoding = getOption("encoding"), 
    compression = 6) 
.Internal(gzfile(description, open, encoding, compression))
