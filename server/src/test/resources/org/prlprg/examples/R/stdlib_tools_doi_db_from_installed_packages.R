#? stdlib
`doi_db_from_installed_packages` <- function (packages, lib.loc = NULL, verbose = FALSE, Rd = FALSE) 
{
    if (!length(packages)) 
        return()
    one <- function(p) {
        if (verbose) 
            message(sprintf("processing %s", p))
        dir <- system.file(package = p, lib.loc = lib.loc)
        if (dir == "") 
            return()
        meta <- .read_description(file.path(dir, "DESCRIPTION"))
        db <- rbind(doi_db_from_package_metadata(meta), doi_db_from_package_citation(dir, 
            meta, installed = TRUE), if (Rd) {
            rddb <- Rd_db(p, lib.loc = dirname(dir))
            doi_db_from_package_Rd_db(rddb)
        })
        db$Parent <- file.path(p, db$Parent)
        db
    }
    do.call(rbind, c(lapply(packages, one), list(make.row.names = FALSE)))
}
