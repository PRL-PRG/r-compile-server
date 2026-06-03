#? stdlib
`as.function.default` <- function (x, envir = parent.frame(), ...) 
if (is.function(x)) x else .Internal(as.function.default(x, envir))
