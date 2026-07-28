#? stdlib
`print.simple.list` <- function (x, ...) 
print(noquote(cbind(`_` = unlist(x))), ...)
