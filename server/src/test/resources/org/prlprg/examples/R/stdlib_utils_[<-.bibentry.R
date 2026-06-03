#? stdlib
`[<-.bibentry` <- function (x, i, j, value) 
{
    y <- unclass(x)
    if (missing(j)) {
        y[i] <- if (is.null(value)) 
            NULL
        else as.bibentry(value)
    }
    else {
        stopifnot(is.character(j), length(j) == 1L)
        s <- .bibentry_seq_along(x, i)
        p <- s[i]
        value <- rep_len(.listify(value), length(x))
        if (j == "bibtype") 
            value <- .bibentry_canonicalize_bibtype_value(value)
        a <- (j %in% bibentry_attribute_names)
        for (i in p) {
            y[[i]] <- .bibentry_elt_fld_gets(y[[i]], j, value[[i]], 
                a)
        }
    }
    class(y) <- class(x)
    y
}
