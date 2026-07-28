#? stdlib
`Sys.chmod` <- function (paths, mode = "0777", use_umask = TRUE) 
.Internal(Sys.chmod(paths, as.octmode(mode), use_umask))
