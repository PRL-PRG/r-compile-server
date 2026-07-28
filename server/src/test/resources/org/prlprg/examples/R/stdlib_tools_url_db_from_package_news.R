#? stdlib
`url_db_from_package_news` <- function (dir, installed = FALSE) 
{
    path <- if (installed) 
        "NEWS.Rd"
    else file.path("inst", "NEWS.Rd")
    nfile <- file.path(dir, path)
    urls <- if (file.exists(nfile)) {
        macros <- initialRdMacros()
        .get_urls_from_Rd(prepare_Rd(parse_Rd(nfile, macros = macros), 
            stages = "install"))
    }
    else character()
    url_db(urls, rep.int(path, length(urls)))
}
