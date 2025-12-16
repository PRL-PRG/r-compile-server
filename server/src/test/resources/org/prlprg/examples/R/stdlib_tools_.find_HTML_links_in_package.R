#? stdlib
`.find_HTML_links_in_package` <- function (dir, absolute = FALSE) 
{
    ans <- if (file_test("-f", f <- file.path(dir, "Meta", "links.rds"))) 
        readRDS(f)
    else if (file_test("-f", f <- file.path(dir, "Meta", "Rd.rds"))) 
        .build_links_index(readRDS(f), basename(dir))
    else character()
    if (absolute) 
        structure(file.path(dir, "html", basename(ans), fsep = "/"), 
            names = names(ans))
    else ans
}
