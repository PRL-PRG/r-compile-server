#? stdlib
`[<-.person` <- function (x, i, j, value) 
{
    y <- unclass(x)
    if (missing(j)) 
        y[i] <- if (is.null(value)) 
            NULL
        else as.person(value)
    else {
        j <- match.arg(j, person_field_names)
        s <- seq_along(x)
        if (!missing(i) && is.character(i)) 
            names(s) <- names(x)
        p <- s[i]
        value <- rep_len(value, length(p))
        if (j == "role") 
            value <- lapply(value, .canonicalize_person_role)
        for (i in p) y[[i]] <- .person_elt_fld_gets(y[[i]], j, 
            value[[i]])
    }
    class(y) <- class(x)
    y
}
