#? stdlib
`.person_elt_fld_gets` <- function (x, j, v) 
{
    x[j] <- list(if (.is_not_nonempty_text(v)) NULL else as.character(v))
    if (all(vapply(x, is.null, NA))) 
        stop(gettext("must have some non-empty fields"), domain = NA)
    x
}
