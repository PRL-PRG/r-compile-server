#? stdlib
`.format_person_for_plain_author_spec` <- function (x) 
{
    if ((is.null(x$given) && is.null(x$family)) || is.null(x$role)) 
        return("")
    format(x, include = c("given", "family", "role", "comment"))
}
