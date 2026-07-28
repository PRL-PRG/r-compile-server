#? stdlib
`is.leaf` <- function (object) 
(is.logical(L <- attr(object, "leaf"))) && L
