#? stdlib
`summary.matrix` <- function (object, ...) 
{
    summary.data.frame(as.data.frame.matrix(object), ...)
}
