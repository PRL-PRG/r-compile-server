#? stdlib
`rnorm` <- function (n, mean = 0, sd = 1) 
.Call(C_rnorm, n, mean, sd)
