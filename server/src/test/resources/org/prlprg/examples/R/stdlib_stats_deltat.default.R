#? stdlib
`deltat.default` <- function (x, ...) 
if (!is.null(xtsp <- attr(x, "tsp"))) 1/xtsp[3L] else 1
