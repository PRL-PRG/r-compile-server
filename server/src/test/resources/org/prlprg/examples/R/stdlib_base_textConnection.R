#? stdlib
`textConnection` <- function (object, open = "r", local = FALSE, name = deparse1(substitute(object)), 
    encoding = c("", "bytes", "UTF-8")) 
{
    env <- if (local) 
        parent.frame()
    else .GlobalEnv
    type <- match(match.arg(encoding), c("", "bytes", "UTF-8"))
    if (!(is.character(name) && length(name) == 1)) 
        stop("'name' must be a single character string")
    .Internal(textConnection(name, object, open, env, type))
}
