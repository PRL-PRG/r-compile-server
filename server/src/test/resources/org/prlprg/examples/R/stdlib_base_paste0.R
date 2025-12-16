#? stdlib
`paste0` <- function (..., collapse = NULL, recycle0 = FALSE) 
.Internal(paste0(list(...), collapse, recycle0))
