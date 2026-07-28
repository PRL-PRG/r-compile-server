#? stdlib
`[[.dendrogram` <- function (x, ..., drop = TRUE) 
{
    if (!is.null(r <- NextMethod("[["))) 
        structure(r, class = "dendrogram")
}
