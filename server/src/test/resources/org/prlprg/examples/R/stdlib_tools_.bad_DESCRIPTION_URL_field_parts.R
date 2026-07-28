#? stdlib
`.bad_DESCRIPTION_URL_field_parts` <- function (s) 
{
    if (is.na(s)) 
        return(character())
    y <- .get_urls_from_DESCRIPTION_URL_field(s)
    z <- strsplit(s, "[[:space:]]*(\\([^)]*\\))?([,[:space:]]+|$)")[[1L]]
    if (length(y) == length(z)) 
        character()
    else {
        z <- z %w/o% y
        z[!grepl("^<?(svn://|doi:)", z)]
    }
}
