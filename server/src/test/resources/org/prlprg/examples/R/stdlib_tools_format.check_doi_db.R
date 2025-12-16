#? stdlib
`format.check_doi_db` <- function (x, ...) 
{
    if (!NROW(x)) 
        return(character())
    paste0(sprintf("DOI: %s", x$DOI), sprintf("\nFrom: %s", vapply(x$From, 
        paste, "", collapse = "\n      ")), ifelse((s <- x$Status) == 
        "", "", sprintf("\nStatus: %s", s)), ifelse((m <- x$Message) == 
        "", "", sprintf("\nMessage: %s", m)))
}
