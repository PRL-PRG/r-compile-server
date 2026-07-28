#? stdlib
`mean.difftime` <- function (x, ...) 
.difftime(mean(unclass(x), ...), attr(x, "units"))
