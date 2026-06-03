#? stdlib
`withCallingHandlers` <- function (expr, ...) 
{
    handlers <- list(...)
    classes <- names(handlers)
    parentenv <- parent.frame()
    if (length(classes) != length(handlers)) 
        stop("condition handlers must be specified with a condition class")
    .Internal(.addCondHands(classes, handlers, parentenv, NULL, 
        TRUE))
    expr
}
