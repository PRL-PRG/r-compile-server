#? stdlib
`topic2filename` <- function (x) 
gsub("%", "+", utils::URLencode(x, reserved = TRUE))
