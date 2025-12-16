#? stdlib
`diff.difftime` <- function (x, ...) 
.difftime(NextMethod("diff"), attr(x, "units"), oldClass(x))
