#? stdlib
`[[<-.bibentry` <- function (x, i, j, value) 
{
    s <- .bibentry_seq_along(x, i)
    i <- s[[i]]
    y <- unclass(x)
    if (missing(j)) {
        y[i] <- if (is.null(value)) 
            NULL
        else as.bibentry(value)
    }
    else {
        stopifnot(is.character(j), length(j) == 1L)
        if (j == "bibtype") 
            value <- .bibentry_canonicalize_bibtype_value(list(value))[[1L]]
        a <- (j %in% bibentry_attribute_names)
        y[[i]] <- .bibentry_elt_fld_gets(y[[i]], j, value, a)
    }
    class(y) <- class(x)
    y
}
