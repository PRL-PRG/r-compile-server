#? stdlib
`psub` <- function (pattern, replacement, x) 
gsub(pattern, replacement, x, perl = TRUE)
