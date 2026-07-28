#? stdlib
`c.Date` <- function (..., recursive = FALSE) 
.Date(c(unlist(lapply(list(...), function(e) unclass(as.Date(e))))))
