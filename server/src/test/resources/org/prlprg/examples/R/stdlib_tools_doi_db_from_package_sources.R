#? stdlib
`doi_db_from_package_sources` <- function (dir, add = FALSE, Rd = FALSE) 
{
    meta <- .get_package_metadata(dir, FALSE)
    db <- rbind(doi_db_from_package_metadata(meta), doi_db_from_package_citation(dir, 
        meta), if (Rd) {
        rddb <- Rd_db(dir = dir)
        doi_db_from_package_Rd_db(rddb)
    })
    if (add) 
        db$Parent <- file.path(basename(dir), db$Parent)
    db
}
