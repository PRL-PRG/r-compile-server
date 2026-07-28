#? stdlib
`print.news_db` <- function (x, doBrowse = interactive(), browser = getOption("browser"), 
    ...) 
{
    port <- if (doBrowse && !identical("false", browser) && is.character(pkg <- attr(x, 
        "package")) && tools:::.news_db_has_no_bad_entries(x)) 
        tools::startDynamicHelp(NA)
    else 0L
    if (port > 0L) {
        tools:::.httpd_objects(port, x)
        url <- if (pkg == "R") {
            if (is.null(attr(x, "subset"))) {
                sprintf("http://127.0.0.1:%d/doc/html/NEWS.html", 
                  port)
            }
            else sprintf("http://127.0.0.1:%d/doc/html/NEWS.html?objects=1&port=%d", 
                port, port)
        }
        else sprintf("http://127.0.0.1:%d/library/%s/NEWS?objects=1&port=%d", 
            port, pkg, port)
        browseURL(url)
    }
    else writeLines(paste(unlist(format(x, ...)), collapse = "\n\n"))
    invisible(x)
}
