#? stdlib
`[.bibentry` <- function (x, i, j, drop = TRUE) 
{
    s <- .bibentry_seq_along(x, i)
    i <- s[i]
    y <- unclass(x)[i]
    if (!all(ok <- lengths(y) > 0L)) {
        warning(gettext("subscript out of bounds"), domain = NA)
        y <- y[ok]
    }
    if (missing(j)) {
        if (!drop) 
            attributes(y) <- attributes(x)[bibentry_list_attribute_names]
        class(y) <- class(x)
    }
    else {
        stopifnot(is.character(j), length(j) == 1L)
        y <- if (j %in% bibentry_attribute_names) 
            lapply(y, attr, j)
        else lapply(y, `[[`, tolower(j))
    }
    y
}
