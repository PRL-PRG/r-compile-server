#? stdlib
`as.list.environment` <- function (x, all.names = FALSE, sorted = FALSE, ...) 
.Internal(env2list(x, all.names, sorted))
