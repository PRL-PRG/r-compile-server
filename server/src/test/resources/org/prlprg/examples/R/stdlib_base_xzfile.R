#? stdlib
`xzfile` <- function (description, open = "", encoding = getOption("encoding"), 
    compression = 6) 
.Internal(xzfile(description, open, encoding, compression))
