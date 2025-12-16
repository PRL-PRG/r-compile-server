#? stdlib
`stopRd` <- function (block, Rdfile, ...) 
{
    msg <- .makeMessageRd(block, Rdfile, ...)
    stop(msg, call. = FALSE, domain = NA)
}
