#? stdlib
`rexp` <- function (n, rate = 1) 
.Call(C_rexp, n, 1/rate)
