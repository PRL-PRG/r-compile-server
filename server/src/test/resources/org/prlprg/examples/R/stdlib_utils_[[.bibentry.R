#? stdlib
`[[.bibentry` <- function (x, i, j) 
{
    s <- .bibentry_seq_along(x, i)
    i <- s[[i]]
    y <- unclass(x)[[i]]
    if (missing(j)) {
        y <- list(y)
        class(y) <- class(x)
    }
    else {
        stopifnot(is.character(j), length(j) == 1L)
        y <- if (j %in% bibentry_attribute_names) 
            attr(y, j)
        else y[[tolower(j)]]
    }
    y
}
