#? stdlib
`.get_urls_from_PDF_file` <- function (f) 
{
    owd <- getwd()
    dir.create(d <- tempfile())
    on.exit({
        unlink(d, recursive = TRUE)
        setwd(owd)
    })
    file.copy(normalizePath(f), d)
    setwd(d)
    g <- tempfile(tmpdir = d, fileext = ".xml")
    system2("pdftohtml", c("-s -q -i -c -xml", shQuote(basename(f)), 
        shQuote(basename(g))))
    if (file.exists(g)) 
        .get_urls_from_HTML_file(g)
    else character()
}
