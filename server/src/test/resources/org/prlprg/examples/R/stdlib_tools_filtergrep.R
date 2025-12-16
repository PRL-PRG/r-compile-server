#? stdlib
`filtergrep` <- function (pattern, x, ...) 
grep(pattern, x, invert = TRUE, value = TRUE, ...)
