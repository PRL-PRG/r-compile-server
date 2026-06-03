#? stdlib
`as.list.default` <- function (x, ...) 
if (typeof(x) == "list") x else .Internal(as.vector(x, "list"))
