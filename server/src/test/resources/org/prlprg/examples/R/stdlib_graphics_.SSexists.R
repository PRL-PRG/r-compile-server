#? stdlib
`.SSexists` <- function (x) 
exists(.SSname(x), envir = .SSenv, inherits = FALSE)
