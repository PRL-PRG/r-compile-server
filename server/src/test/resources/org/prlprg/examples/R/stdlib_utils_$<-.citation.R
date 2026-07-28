#? stdlib
`$<-.citation` <- function (x, name, value) 
.citation(NextMethod("$<-"), attr(x, "package"))
