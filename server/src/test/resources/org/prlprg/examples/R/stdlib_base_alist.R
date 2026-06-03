#? stdlib
`alist` <- function (...) 
as.list(sys.call())[-1L]
