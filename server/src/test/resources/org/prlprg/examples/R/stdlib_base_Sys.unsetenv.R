#? stdlib
`Sys.unsetenv` <- function (x) 
.Internal(Sys.unsetenv(as.character(x)))
