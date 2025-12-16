#? stdlib
`.build_library_links_index` <- function (dir) 
{
    unlist(lapply(rev(dir(dir, full.names = TRUE)), .find_HTML_links_in_package))
}
