#? stdlib
`gettext` <- function (..., domain = NULL, trim = TRUE) 
{
    char <- unlist(lapply(list(...), as.character))
    .Internal(gettext(domain, char, trim))
}
