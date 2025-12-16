#? stdlib
`as.ordered` <- function (x) 
if (is.ordered(x)) x else ordered(x)
