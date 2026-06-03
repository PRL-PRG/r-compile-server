#? stdlib
`$<-.person` <- function (x, name, value) 
{
    name <- match.arg(name, person_field_names)
    y <- unclass(x)
    value <- rep_len(.listify(value), length(y))
    if (name == "role") 
        value <- lapply(value, .canonicalize_person_role)
    for (i in seq_along(y)) {
        y[[i]] <- .person_elt_fld_gets(y[[i]], name, value[[i]])
    }
    class(y) <- class(x)
    y
}
