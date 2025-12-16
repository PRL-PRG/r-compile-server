#? stdlib
`fsub` <- function (pattern, replacement, x) 
gsub(pattern, replacement, x, fixed = TRUE)
