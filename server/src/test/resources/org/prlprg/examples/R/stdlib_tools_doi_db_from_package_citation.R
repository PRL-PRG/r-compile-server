#? stdlib
`doi_db_from_package_citation` <- function (dir, meta, installed = FALSE) 
{
    dois <- character()
    path <- if (installed) 
        "CITATION"
    else file.path("inst", "CITATION")
    cfile <- file.path(dir, path)
    if (file.exists(cfile)) {
        cinfo <- .read_citation_quietly(cfile, meta)
        if (!inherits(cinfo, "error")) 
            dois <- trimws(unique(unlist(cinfo$doi, use.names = FALSE)))
    }
    doi_db(dois, rep.int(path, length(dois)))
}
