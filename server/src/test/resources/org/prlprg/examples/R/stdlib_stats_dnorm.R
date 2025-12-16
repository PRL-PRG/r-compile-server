#? stdlib
`dnorm` <- function (x, mean = 0, sd = 1, log = FALSE) 
.Call(C_dnorm, x, mean, sd, log)
