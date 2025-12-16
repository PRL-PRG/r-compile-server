#? stdlib
`get_IANA_URI_scheme_db` <- function () 
{
    baseurl <- "https://www.iana.org/assignments/uri-schemes/"
    db <- utils::read.csv(url(paste0(baseurl, "uri-schemes-1.csv")), 
        stringsAsFactors = FALSE, encoding = "UTF-8")
    names(db) <- chartr(".", "_", names(db))
    db$URI_Scheme <- sub(" .*", "", db$URI_Scheme)
    db
}
