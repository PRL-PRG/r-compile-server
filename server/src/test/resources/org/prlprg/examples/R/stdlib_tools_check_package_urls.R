#? stdlib
`check_package_urls` <- function (dir, verbose = FALSE) 
{
    db <- url_db_from_package_sources(dir)
    check_url_db(db, verbose = verbose, parallel = TRUE)
}
