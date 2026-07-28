#? stdlib
`%w/o%` <- function (x, y) 
x[is.na(match(x, y))]
