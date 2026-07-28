#? stdlib
`check_package_dois` <- function (dir, verbose = FALSE) 
{
    db <- doi_db_from_package_sources(dir, Rd = TRUE)
    check_doi_db(db, verbose = verbose, parallel = TRUE)
}
