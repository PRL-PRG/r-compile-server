#? stdlib
`.SSget` <- function (x) 
get(.SSname(x), envir = .SSenv, inherits = FALSE)
