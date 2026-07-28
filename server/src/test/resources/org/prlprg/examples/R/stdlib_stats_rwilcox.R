#? stdlib
`rwilcox` <- function (nn, m, n) 
.Call(C_rwilcox, nn, m, n)
