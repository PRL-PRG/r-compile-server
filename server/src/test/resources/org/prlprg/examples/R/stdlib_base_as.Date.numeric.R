#? stdlib
`as.Date.numeric` <- function (x, origin, ...) 
if (missing(origin)) .Date(x) else as.Date(origin, ...) + x
