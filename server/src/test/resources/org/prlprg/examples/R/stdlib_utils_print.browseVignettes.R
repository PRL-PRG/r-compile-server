#? stdlib
`print.browseVignettes` <- function (x, ...) 
{
    if (length(x) == 0L) {
        message(gettextf("No vignettes found by %s", deparse1(attr(x, 
            "call"))), domain = NA)
        return(invisible(x))
    }
    oneLink <- function(s) {
        if (length(s) == 0L) 
            return(character(0L))
        title <- gsub("&", "&amp;", s[, "Title"])
        if (port > 0L) 
            prefix <- sprintf("/library/%s/doc", pkg)
        else prefix <- sprintf("file://%s/doc", s[, "Dir"])
        src <- s[, "File"]
        pdf <- s[, "PDF"]
        rcode <- s[, "R"]
        pdfext <- sub("^.*\\.", "", pdf)
        sprintf("  <li>%s  -  \n    %s  \n    %s  \n    %s \n  </li>\n", 
            title, ifelse(nzchar(pdf), sprintf("<a href='%s/%s'>%s</a>&nbsp;", 
                prefix, pdf, toupper(pdfext)), ""), sprintf("<a href='%s/%s'>source</a>&nbsp;", 
                prefix, src), ifelse(nzchar(rcode), sprintf("<a href='%s/%s'>R code</a>&nbsp;", 
                prefix, rcode), ""))
    }
    port <- tools::startDynamicHelp(NA)
    file <- tempfile("Rvig.", fileext = ".html")
    sink(file)
    if (port > 0L) 
        css_file <- "/doc/html/R.css"
    else css_file <- file.path(R.home("doc"), "html", "R.css")
    cat(sprintf("<!DOCTYPE html>\n<html>\n<head>\n<title>R Vignettes</title>\n<meta http-equiv='Content-Type' content='text/html; charset=utf-8' />\n<meta name='viewport' content='width=device-width, initial-scale=1.0, user-scalable=yes' />\n<link rel='stylesheet' type='text/css' href='%s' />\n</head>\n<body>\n<div class='container'>\n", 
        css_file))
    cat(sprintf("<h2>Vignettes found by <code><q>%s</q></code></h2>", 
        deparse1(attr(x, "call"))))
    cat("<div class=\"vignettes\">")
    for (pkg in names(x)) {
        cat(sprintf("<h3>Vignettes in package <code>%s</code></h3>\n", 
            pkg))
        cat("<ul>\n")
        links <- oneLink(x[[pkg]])
        cat(paste(links), collapse = "\n")
        cat("\n</ul>\n")
    }
    cat("</div>")
    cat("<hr/>")
    if (nzchar(foot <- attr(x, "footer"))) 
        cat(sprintf("<p>%s</p>", foot))
    cat("</div>\n</body>\n</html>\n")
    sink()
    if (port > 0L) 
        browseURL(sprintf("http://127.0.0.1:%d/session/%s", port, 
            basename(file)))
    else browseURL(sprintf("file://%s", file))
    invisible(x)
}
