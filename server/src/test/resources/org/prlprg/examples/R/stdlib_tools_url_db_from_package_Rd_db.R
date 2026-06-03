#? stdlib
`url_db_from_package_Rd_db` <- function (db) 
{
    urls <- Filter(length, lapply(db, .get_urls_from_Rd))
    url_db(unlist(urls, use.names = FALSE), rep.int(file.path("man", 
        names(urls)), lengths(urls)))
}
