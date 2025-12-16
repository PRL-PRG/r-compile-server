#? stdlib
`length<-.difftime` <- function (x, value) 
.difftime(NextMethod(), attr(x, "units"), oldClass(x))
