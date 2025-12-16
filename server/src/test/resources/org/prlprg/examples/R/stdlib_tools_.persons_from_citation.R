#? stdlib
`.persons_from_citation` <- function (dir, installed = FALSE) 
{
    meta <- .get_package_metadata(dir, installed = installed)
    path <- if (installed) 
        "CITATION"
    else file.path("inst", "CITATION")
    cfile <- file.path(dir, path)
    cinfo <- .read_citation_quietly(cfile, meta)
    if (!inherits(cinfo, "error")) {
        aut <- do.call(c, lapply(unclass(cinfo), `[[`, "author"))
        if (inherits(aut, "person")) 
            return(aut)
    }
    NULL
}
