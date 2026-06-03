#? stdlib
`rbinom` <- function (n, size, prob) 
.Call(C_rbinom, n, size, prob)
