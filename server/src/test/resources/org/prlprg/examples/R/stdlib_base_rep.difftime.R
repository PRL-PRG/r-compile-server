#? stdlib
`rep.difftime` <- function (x, ...) 
.difftime(NextMethod("rep"), attr(x, "units"), oldClass(x))
