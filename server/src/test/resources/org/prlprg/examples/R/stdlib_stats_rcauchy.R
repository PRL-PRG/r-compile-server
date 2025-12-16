#? stdlib
`rcauchy` <- function (n, location = 0, scale = 1) 
.Call(C_rcauchy, n, location, scale)
