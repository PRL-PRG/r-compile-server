#? stdlib
`findHTMLlinks` <- function (pkgDir, lib.loc = NULL, level = 0:3) 
{
    if (is.null(lib.loc)) 
        lib.loc <- .libPaths()
    Links <- list()
    if (3 %in% level) 
        Links <- c(Links, lapply(lib.loc, .find_HTML_links_in_library))
    if (2 %in% level) 
        Links <- c(lapply(file.path(.Library, .get_standard_package_names()$recommended), 
            .find_HTML_links_in_package), Links)
    if (1 %in% level) 
        Links <- c(lapply(file.path(.Library, .get_standard_package_names()$base), 
            .find_HTML_links_in_package), Links)
    if (0 %in% level && nzchar(pkgDir)) 
        Links <- c(list(.find_HTML_links_in_package(pkgDir)), 
            Links)
    Links <- unlist(Links)
    Links <- Links[!duplicated(names(Links))]
    gsub("[Rr]d$", "html", Links)
}
