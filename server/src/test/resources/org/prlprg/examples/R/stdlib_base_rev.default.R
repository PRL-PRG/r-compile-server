#? stdlib
`rev.default` <- function (x) 
if (length(x)) x[length(x):1L] else x
