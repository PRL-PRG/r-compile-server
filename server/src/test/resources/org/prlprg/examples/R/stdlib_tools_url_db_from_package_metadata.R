#? stdlib
`url_db_from_package_metadata` <- function (meta) 
{
    urls <- character()
    fields <- c("URL", "BugReports")
    for (v in meta[fields]) {
        if (is.na(v)) 
            next
        urls <- c(urls, .get_urls_from_DESCRIPTION_URL_field(v))
    }
    if (!is.na(v <- meta["Description"])) {
        urls <- c(urls, .get_urls_from_DESCRIPTION_Description_field(v))
    }
    url_db(urls, rep.int("DESCRIPTION", length(urls)))
}
