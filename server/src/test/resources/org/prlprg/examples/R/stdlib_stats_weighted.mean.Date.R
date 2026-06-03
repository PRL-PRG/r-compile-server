#? stdlib
`weighted.mean.Date` <- function (x, w, ...) 
.Date(weighted.mean(unclass(x), w, ...))
