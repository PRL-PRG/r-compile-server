#? stdlib
`file.size` <- function (...) 
file.info(..., extra_cols = FALSE)$size
