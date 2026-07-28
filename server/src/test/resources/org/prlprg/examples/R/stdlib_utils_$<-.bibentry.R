#? stdlib
`$<-.bibentry` <- function (x, name, value) 
{
    y <- unclass(x)
    value <- rep_len(.listify(value), length(x))
    if (name == "bibtype") 
        value <- .bibentry_canonicalize_bibtype_value(value)
    a <- (name %in% bibentry_attribute_names)
    for (i in seq_along(y)) {
        y[[i]] <- .bibentry_elt_fld_gets(y[[i]], name, value[[i]], 
            a)
    }
    class(y) <- class(x)
    y
}
