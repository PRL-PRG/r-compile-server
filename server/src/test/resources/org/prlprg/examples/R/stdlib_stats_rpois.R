#? stdlib
`rpois` <- function (n, lambda) 
.Call(C_rpois, n, lambda)
