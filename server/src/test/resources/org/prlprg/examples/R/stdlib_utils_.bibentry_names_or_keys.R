#? stdlib
`.bibentry_names_or_keys` <- function (x) 
{
    if (is.null(y <- names(x))) 
        y <- .bibentry_get_key(x)
    y
}
