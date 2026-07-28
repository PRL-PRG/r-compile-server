#? stdlib
`Sys.umask` <- function (mode = NA) 
.Internal(Sys.umask(if (is.na(mode)) NA_integer_ else as.octmode(mode)))
