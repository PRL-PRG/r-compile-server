#? stdlib
`runif` <- function (n, min = 0, max = 1) 
.Call(C_runif, n, min, max)
