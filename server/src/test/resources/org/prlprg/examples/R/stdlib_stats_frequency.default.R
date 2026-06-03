#? stdlib
`frequency.default` <- function (x, ...) 
if (!is.null(xtsp <- attr(x, "tsp"))) xtsp[3L] else 1
