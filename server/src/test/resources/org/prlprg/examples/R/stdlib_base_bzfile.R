#? stdlib
`bzfile` <- function (description, open = "", encoding = getOption("encoding"), 
    compression = 9) 
.Internal(bzfile(description, open, encoding, compression))
