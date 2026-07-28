#? stdlib
`labels.dendrogram` <- function (object, ...) 
{
    if (is.list(object)) 
        rapply(object, attr, which = "label")
    else attr(object, "label")
}
