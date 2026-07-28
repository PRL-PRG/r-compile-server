#? stdlib
`url_db_from_package_sources` <- function (dir, add = FALSE) 
{
    meta <- .get_package_metadata(dir, FALSE)
    db <- rbind(url_db_from_package_metadata(meta), url_db_from_package_Rd_db(Rd_db(dir = dir)), 
        url_db_from_package_citation(dir, meta), url_db_from_package_news(dir))
    if (requireNamespace("xml2", quietly = TRUE)) {
        db <- rbind(db, url_db_from_package_HTML_files(dir), 
            url_db_from_package_README_md(dir), url_db_from_package_NEWS_md(dir))
    }
    if (add) 
        db$Parent <- file.path(basename(dir), db$Parent)
    db
}
