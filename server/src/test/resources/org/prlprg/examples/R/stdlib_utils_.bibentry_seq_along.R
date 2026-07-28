#? stdlib
`.bibentry_seq_along` <- function (x, i = NULL) 
{
    s <- seq_along(x)
    if (!missing(i) && is.character(i)) {
        names(s) <- .bibentry_names_or_keys(x)
    }
    s
}
