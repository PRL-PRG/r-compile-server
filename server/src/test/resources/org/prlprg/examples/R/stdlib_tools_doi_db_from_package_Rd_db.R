#? stdlib
`doi_db_from_package_Rd_db` <- function (db) 
{
    dois <- Filter(length, lapply(db, .get_dois_from_Rd))
    doi_db(.canonicalize_doi(unlist(dois, use.names = FALSE)), 
        rep.int(file.path("man", names(dois)), lengths(dois)))
}
