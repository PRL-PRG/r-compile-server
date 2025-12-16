#? stdlib
`as.data.frame.ftable` <- function (x, row.names = NULL, optional = FALSE, ...) 
as.data.frame(as.table(x), row.names, optional)
