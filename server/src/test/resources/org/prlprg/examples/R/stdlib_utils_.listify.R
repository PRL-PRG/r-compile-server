#? stdlib
`.listify` <- function (x) 
if (inherits(x, "list")) x else list(x)
