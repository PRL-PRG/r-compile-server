#? stdlib
`rlnorm` <- function (n, meanlog = 0, sdlog = 1) 
.Call(C_rlnorm, n, meanlog, sdlog)
