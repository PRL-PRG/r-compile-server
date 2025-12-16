#? stdlib
`doi_db_from_package_metadata` <- function (meta) 
{
    dois <- character()
    pattern <- "<(DOI|doi):([^>]*)>"
    if (!is.na(v <- meta["Description"])) {
        m <- gregexpr(pattern, v)
        dois <- c(dois, .gregexec_at_pos(pattern, v, m, 3L))
    }
    doi_db(utils::URLdecode(dois), rep.int("DESCRIPTION", length(dois)))
}
