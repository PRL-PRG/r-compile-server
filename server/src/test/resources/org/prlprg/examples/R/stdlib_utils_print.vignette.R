#? stdlib
`print.vignette` <- function (x, ...) 
{
    if (nzchar(out <- x$PDF)) {
        ext <- tools::file_ext(out)
        port <- if (tolower(ext) == "html") 
            tools::startDynamicHelp(NA)
        else 0L
        out <- if (port > 0L) 
            sprintf("http://127.0.0.1:%d/library/%s/doc/%s", 
                port, basename(x$Dir), out)
        else file.path(x$Dir, "doc", out)
        if (tolower(ext) == "pdf") {
            pdfviewer <- getOption("pdfviewer")
            if (identical(pdfviewer, "false")) {
            }
            else if (.Platform$OS.type == "windows" && identical(pdfviewer, 
                file.path(R.home("bin"), "open.exe"))) 
                shell.exec(out)
            else system2(pdfviewer, shQuote(out), wait = FALSE)
        }
        else browseURL(out)
    }
    else {
        warning(gettextf("vignette %s has no PDF/HTML", sQuote(x$Topic)), 
            call. = FALSE, domain = NA)
    }
    invisible(x)
}
