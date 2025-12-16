#? stdlib
`.NotYetUsed` <- function (arg, error = TRUE) 
{
    msg <- gettextf("argument '%s' is not used (yet)", arg)
    if (error) 
        stop(msg, domain = NA, call. = FALSE)
    else warning(msg, domain = NA, call. = FALSE)
}
