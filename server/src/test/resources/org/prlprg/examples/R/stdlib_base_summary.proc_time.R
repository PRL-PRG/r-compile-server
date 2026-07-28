#? stdlib
`summary.proc_time` <- function (object, ...) 
{
    if (!is.na(object[4L])) 
        object[1L] <- object[1L] + object[4L]
    if (!is.na(object[5L])) 
        object[2L] <- object[2L] + object[5L]
    object <- object[1L:3L]
    names(object) <- c(gettext("user"), gettext("system"), gettext("elapsed"))
    object
}
