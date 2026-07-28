#? stdlib
`weighted.mean.difftime` <- function (x, w, ...) 
.difftime(weighted.mean(unclass(x), w, ...), attr(x, "units"))
