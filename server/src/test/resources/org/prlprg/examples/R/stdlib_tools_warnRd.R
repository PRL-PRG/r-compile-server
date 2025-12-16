#? stdlib
`warnRd` <- function (block, Rdfile, ...) 
{
    msg <- .makeMessageRd(block, Rdfile, ...)
    warning(msg, call. = FALSE, domain = NA, immediate. = TRUE)
}
