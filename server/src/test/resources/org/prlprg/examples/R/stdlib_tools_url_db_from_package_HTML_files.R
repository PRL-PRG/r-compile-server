#? stdlib
`url_db_from_package_HTML_files` <- function (dir, installed = FALSE) 
{
    path <- if (installed) 
        "doc"
    else file.path("inst", "doc")
    files <- Sys.glob(file.path(dir, path, "*.html"))
    if (installed && file.exists(rfile <- file.path(dir, "README.html"))) 
        files <- c(files, rfile)
    url_db_from_HTML_files(dir, files = files)
}
