#? stdlib
`[[.person` <- function (x, i, j) 
{
    s <- seq_along(x)
    if (is.character(i)) 
        names(s) <- names(x)
    i <- s[[i]]
    y <- unclass(x)[[i]]
    if (missing(j)) {
        y <- list(y)
        class(y) <- class(x)
    }
    else {
        j <- match.arg(j, person_field_names)
        y <- y[[j]]
    }
    y
}
