#? stdlib
`is.element` <- function (el, set) 
match(as.vector(el), as.vector(set), 0L) > 0L
