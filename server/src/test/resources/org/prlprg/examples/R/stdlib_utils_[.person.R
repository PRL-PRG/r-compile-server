#? stdlib
`[.person` <- function (x, i, j) 
{
    y <- unclass(x)[i]
    if (!all(ok <- lengths(y) > 0L)) {
        warning(gettext("subscript out of bounds"), domain = NA)
        y <- y[ok]
    }
    if (missing(j)) {
        class(y) <- class(x)
    }
    else {
        j <- match.arg(j, person_field_names)
        y <- lapply(y, `[[`, j)
    }
    y
}
