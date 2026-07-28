#? stdlib
`transform.data.frame` <- function (`_data`, ...) 
{
    e <- eval(substitute(list(...)), `_data`, parent.frame())
    tags <- names(e)
    inx <- match(tags, names(`_data`))
    matched <- !is.na(inx)
    if (any(matched)) {
        `_data`[inx[matched]] <- e[matched]
        `_data` <- data.frame(`_data`, check.names = FALSE)
    }
    if (!all(matched)) {
        args <- e[!matched]
        args[["check.names"]] <- FALSE
        do.call("data.frame", c(list(`_data`), args))
    }
    else `_data`
}
