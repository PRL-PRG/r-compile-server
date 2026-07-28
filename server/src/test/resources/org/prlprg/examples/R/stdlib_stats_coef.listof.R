#? stdlib
`coef.listof` <- function (object, ...) 
{
    val <- setNames(vector("list", length(object)), names(object))
    for (i in seq_along(object)) val[[i]] <- coef(object[[i]])
    class(val) <- "listof"
    val
}
