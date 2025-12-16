#? stdlib
`[[<-.person` <- function (x, i, j, value) 
{
    s <- seq_along(x)
    if (is.character(i)) 
        names(s) <- names(x)
    i <- s[[i]]
    y <- unclass(x)
    if (missing(j)) 
        y[i] <- if (is.null(value)) 
            NULL
        else as.person(value)
    else {
        j <- match.arg(j, person_field_names)
        if (j == "role") 
            value <- .canonicalize_person_role(value)
        y[[i]] <- .person_elt_fld_gets(y[[i]], j, value)
    }
    class(y) <- class(x)
    y
}
