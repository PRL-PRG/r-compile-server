#? stdlib
`url_db_from_package_NEWS_md` <- function (dir, installed = FALSE) 
{
    urls <- path <- character()
    nfile <- Filter(file.exists, c(if (!installed) file.path(dir, 
        "inst", "NEWS.md"), file.path(dir, "NEWS.md")))[1L]
    if (!is.na(nfile) && nzchar(Sys.which("pandoc"))) {
        path <- .file_path_relative_to_dir(nfile, dir)
        tfile <- tempfile("NEWS", fileext = ".html")
        on.exit(unlink(tfile))
        out <- .pandoc_md_for_CRAN(nfile, tfile)
        if (!out$status) {
            urls <- .get_urls_from_HTML_file(tfile)
        }
    }
    url_db(urls, rep.int(path, length(urls)))
}
