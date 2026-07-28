#? stdlib
`url_db_from_HTML_files` <- function (dir, recursive = FALSE, files = NULL, verbose = FALSE) 
{
    urls <- parents <- character()
    if (is.null(files)) 
        files <- list.files(dir, pattern = "[.]html$", full.names = TRUE, 
            recursive = recursive)
    urls <- lapply(files, function(f) {
        if (verbose) 
            message(sprintf("processing %s", .file_path_relative_to_dir(f, 
                dir)))
        .get_urls_from_HTML_file(f)
    })
    names(urls) <- files
    urls <- Filter(length, urls)
    if (length(urls)) {
        parents <- rep.int(.file_path_relative_to_dir(names(urls), 
            dir), lengths(urls))
        urls <- unlist(urls, use.names = FALSE)
    }
    url_db(urls, parents)
}
