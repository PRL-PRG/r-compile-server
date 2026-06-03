#? stdlib
`.build_news_db` <- function (package, lib.loc = NULL, format = NULL, reader = NULL) 
{
    dir <- system.file(package = package, lib.loc = lib.loc)
    nfile <- file.path(dir, "NEWS.Rd")
    if (file_test("-f", nfile)) 
        return(.build_news_db_from_package_NEWS_Rd(nfile))
    nfile <- file.path(dir, "NEWS.md")
    if (file_test("-f", nfile)) 
        return(.build_news_db_from_package_NEWS_md(nfile))
    nfile <- file.path(dir, "NEWS")
    if (!file_test("-f", nfile)) 
        return(invisible())
    if (!is.null(format)) 
        .NotYetUsed("format", FALSE)
    if (!is.null(reader)) 
        .NotYetUsed("reader", FALSE)
    reader <- .news_reader_default
    reader(nfile)
}
