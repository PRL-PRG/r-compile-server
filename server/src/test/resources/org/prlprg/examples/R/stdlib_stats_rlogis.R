#? stdlib
`rlogis` <- function (n, location = 0, scale = 1) 
.Call(C_rlogis, n, location, scale)
