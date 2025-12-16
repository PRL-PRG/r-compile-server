#? stdlib
`gettextf` <- function (fmt, ..., domain = NULL, trim = TRUE) 
sprintf(gettext(fmt, domain = domain, trim = trim), ...)
