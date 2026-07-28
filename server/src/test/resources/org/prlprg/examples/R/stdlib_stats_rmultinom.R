#? stdlib
`rmultinom` <- function (n, size, prob) 
.Call(C_rmultinom, n, size, prob)
