#? stdlib
`unlist.relistable` <- function (x, recursive = TRUE, use.names = TRUE) 
{
    if (!recursive) 
        warning("relist() requires recursively unlisted objects.")
    skeleton <- x
    class(x) <- setdiff(class(x), "relistable")
    result <- unlist(x, recursive, use.names)
    attr(result, "skeleton") <- skeleton
    result
}
