#? stdlib
`file.mtime` <- function (...) 
file.info(..., extra_cols = FALSE)$mtime
