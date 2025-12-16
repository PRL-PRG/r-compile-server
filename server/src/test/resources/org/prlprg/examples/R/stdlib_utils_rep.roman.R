#? stdlib
`rep.roman` <- function (x, ...) 
structure(rep(unclass(x), ...), class = class(x))
