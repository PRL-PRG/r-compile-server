#? stdlib
`file.mode` <- function (...) 
file.info(..., extra_cols = FALSE)$mode
