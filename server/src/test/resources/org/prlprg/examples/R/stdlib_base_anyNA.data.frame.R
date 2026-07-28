#? stdlib
`anyNA.data.frame` <- function (x, recursive = FALSE) 
any(vapply(x, anyNA, NA, USE.NAMES = FALSE))
