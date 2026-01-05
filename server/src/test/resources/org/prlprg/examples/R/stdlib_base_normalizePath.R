#? stdlib
`normalizePath` <- function (path, winslash = "\\", mustWork = NA) 
.Internal(normalizePath(path.expand(path), winslash, mustWork))
