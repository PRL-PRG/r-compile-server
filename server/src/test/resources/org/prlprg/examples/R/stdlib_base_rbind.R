#? stdlib
`rbind` <- function (..., deparse.level = 1) 
.Internal(rbind(deparse.level, ...))
