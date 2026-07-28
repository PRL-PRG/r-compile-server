#? stdlib
`get_IANA_HTTP_status_code_db` <- function () 
{
    baseurl <- "https://www.iana.org/assignments/http-status-codes/"
    db <- utils::read.csv(url(paste0(baseurl, "http-status-codes-1.csv")), 
        stringsAsFactors = FALSE)
    db[db$Description != "Unassigned", ]
}
