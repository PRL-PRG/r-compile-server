#? stdlib
`na.action.default` <- function (object, ...) 
{
    if (is.list(object) && "na.action" %in% names(object)) 
        object[["na.action"]]
    else attr(object, "na.action")
}
