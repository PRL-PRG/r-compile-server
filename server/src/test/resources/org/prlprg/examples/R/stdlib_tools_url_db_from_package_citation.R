#? stdlib
`url_db_from_package_citation` <- function (dir, meta, installed = FALSE) 
{
    urls <- character()
    path <- if (installed) 
        "CITATION"
    else file.path("inst", "CITATION")
    cfile <- file.path(dir, path)
    if (file.exists(cfile)) {
        cinfo <- .read_citation_quietly(cfile, meta)
        if (!inherits(cinfo, "error")) 
            urls <- trimws(unique(unlist(cinfo$url, use.names = FALSE)))
    }
    url_db(urls, rep.int(path, length(urls)))
}
