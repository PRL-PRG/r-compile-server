#? stdlib
`url_db_from_installed_packages` <- function (packages, lib.loc = NULL, verbose = FALSE) 
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
        rddb <- Rd_db(p, lib.loc = dirname(dir))
        db <- rbind(url_db_from_package_metadata(meta), url_db_from_package_Rd_db(rddb), 
            url_db_from_package_citation(dir, meta, installed = TRUE), 
            url_db_from_package_news(dir, installed = TRUE))
        if (requireNamespace("xml2", quietly = TRUE)) {
            db <- rbind(db, url_db_from_package_HTML_files(dir, 
                installed = TRUE), url_db_from_package_README_md(dir, 
                installed = TRUE), url_db_from_package_NEWS_md(dir, 
                installed = TRUE))
        }
        db$Parent <- file.path(p, db$Parent)
        db
    }
    do.call(rbind, c(lapply(packages, one), list(make.row.names = FALSE)))
}
