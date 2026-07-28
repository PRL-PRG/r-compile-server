#? stdlib
`regularize.values` <- function (x, y, ties, warn.collapsing = TRUE, na.rm = TRUE) 
{
    x <- xy.coords(x, y, setLab = FALSE)
    y <- x$y
    x <- x$x
    keptNA <- FALSE
    nx <- if (any(na <- is.na(x) | is.na(y))) {
        ok <- !na
        if (na.rm) {
            x <- x[ok]
            y <- y[ok]
            length(x)
        }
        else {
            keptNA <- TRUE
            sum(ok)
        }
    }
    else {
        length(x)
    }
    if (!identical(ties, "ordered")) {
        ordered <- if (is.function(ties) || is.character(ties)) 
            FALSE
        else if (is.list(ties) && length(T <- ties) == 2L && 
            is.function(T[[2]])) {
            ties <- T[[2]]
            identical(T[[1]], "ordered")
        }
        else stop("'ties' is not \"ordered\", a function, or list(<string>, <function>)")
        if (!ordered && is.unsorted(if (keptNA) 
            x[ok]
        else x)) {
            o <- order(x)
            x <- x[o]
            y <- y[o]
        }
        if (length(ux <- unique(x)) < nx) {
            if (warn.collapsing) 
                warning("collapsing to unique 'x' values")
            y <- as.vector(tapply(y, match(x, x), ties))
            x <- ux
            stopifnot(length(y) == length(x))
            if (keptNA) 
                ok <- !is.na(x)
        }
    }
    list(x = x, y = y, keptNA = keptNA, notNA = if (keptNA) ok)
}
