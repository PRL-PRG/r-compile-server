#? stdlib
`url_db_from_package_README_md` <- function (dir, installed = FALSE) 
{
    urls <- path <- character()
    rfile <- Filter(file.exists, c(if (!installed) file.path(dir, 
        "inst", "README.md"), file.path(dir, "README.md")))[1L]
    if (!is.na(rfile) && nzchar(Sys.which("pandoc"))) {
        path <- .file_path_relative_to_dir(rfile, dir)
        tfile <- tempfile("README", fileext = ".html")
        on.exit(unlink(tfile))
        out <- .pandoc_md_for_CRAN(rfile, tfile)
        if (!out$status) {
            urls <- .get_urls_from_HTML_file(tfile)
        }
    }
    url_db(urls, rep.int(path, length(urls)))
}
