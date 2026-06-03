#? stdlib
`&.hexmode` <- function (a, b) 
as.hexmode(bitwAnd(as.hexmode(a), as.hexmode(b)))
