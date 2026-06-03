#? stdlib
`getOption` <- function (x, default = NULL) 
{
    if (missing(default)) 
        .Internal(getOption(x))
    else .Internal(getOption(x)) %||% default
}
