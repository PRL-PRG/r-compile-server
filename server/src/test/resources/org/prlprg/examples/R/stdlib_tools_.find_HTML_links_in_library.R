#? stdlib
`.find_HTML_links_in_library` <- function (dir, absolute = FALSE) 
{
    ans <- if (file_test("-f", f <- file.path(dir, ".Meta", "links.rds"))) 
        readRDS(f)
    else .build_library_links_index(dir)
    if (absolute) 
        structure(file.path(dir, substring(ans, first = 7), fsep = "/"), 
            names = names(ans))
    else ans
}
