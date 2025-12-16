#? stdlib
`c.numeric_version` <- function (..., recursive = FALSE) 
{
    x <- lapply(list(...), as.numeric_version)
    classes <- if (length(unique(lapply(x, class))) == 1L) 
        class(x[[1L]])
    else "numeric_version"
    structure(unlist(x, recursive = FALSE), class = classes)
}
