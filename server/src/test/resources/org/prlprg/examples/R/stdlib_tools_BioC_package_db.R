#? stdlib
`BioC_package_db` <- function () 
{
    urls <- .get_standard_repository_URLs()
    urls <- urls[startsWith(names(urls), "BioC")]
    if (!length(urls)) 
        return(NULL)
    info <- lapply(urls, function(u) {
        con <- url(paste0(u, "/VIEWS"))
        on.exit(close(con))
        read.dcf(con)
    })
    Reduce(function(u, v) merge(u, v, all = TRUE), lapply(info, 
        as.data.frame, stringsAsFactors = FALSE))
}
