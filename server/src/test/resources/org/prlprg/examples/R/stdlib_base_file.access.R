#? stdlib
`file.access` <- function (names, mode = 0) 
{
    res <- .Internal(file.access(names, mode))
    names(res) <- names
    res
}
