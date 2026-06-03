#? stdlib
`string2id` <- function (x) 
gsub("%", "+", utils::URLencode(x, reserved = TRUE))
