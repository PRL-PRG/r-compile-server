#? stdlib
`.writeVignetteHtmlIndex` <- function (pkg, con, vignetteIndex = NULL) 
{
    html <- c(HTMLheader("Vignettes and other documentation"), 
        paste0("<h2>Vignettes from package '", pkg, "'</h2>"), 
        if (NROW(vignetteIndex) == 0L) "The package contains no vignette meta-information." else {
            vignetteIndex <- cbind(Package = pkg, as.matrix(vignetteIndex[, 
                c("File", "Title", "PDF", "R")]))
            makeVignetteTable(vignetteIndex, depth = 3L)
        })
    otherfiles <- list.files(system.file("doc", package = pkg))
    if (NROW(vignetteIndex)) 
        otherfiles <- setdiff(otherfiles, c(vignetteIndex[, c("PDF", 
            "File", "R")], "index.html"))
    if (length(otherfiles)) {
        otherfiles <- ifelse(dir.exists(system.file(file.path("doc", 
            otherfiles), package = pkg)), paste0(otherfiles, 
            "/"), otherfiles)
        urls <- paste0("<a href=\"", otherfiles, "\">", otherfiles, 
            "</a>")
        html <- c(html, "<h2>Other files in the <span class=\"samp\">doc</span> directory</h2>", 
            "<table style=\"width: 100%;\">", "<col style=\"width: 24%;\" />", 
            "<col style=\"width: 50%;\" />", "<col style=\"width: 24%;\" />", 
            paste0("<tr><td></td><td><span class=\"samp\">", 
                iconv(urls, "", "UTF-8"), "</span></td></tr>"), 
            "</table>")
    }
    html <- c(html, "</div></body></html>")
    writeLines(html, con = con)
}
