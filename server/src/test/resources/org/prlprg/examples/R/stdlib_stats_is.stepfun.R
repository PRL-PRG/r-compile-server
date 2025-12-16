#? stdlib
`is.stepfun` <- function (x) 
is.function(x) && inherits(x, "stepfun")
