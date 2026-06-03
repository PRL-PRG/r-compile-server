#? stdlib
`unz` <- function (description, filename, open = "", encoding = getOption("encoding")) 
.Internal(unz(paste(description, filename, sep = ":"), open, 
    encoding))
