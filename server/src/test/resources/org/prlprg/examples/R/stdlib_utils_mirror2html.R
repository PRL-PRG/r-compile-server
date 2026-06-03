#? stdlib
`mirror2html` <- function (mirrors = NULL, file = "mirrors.html", head = "mirrors-head.html", 
    foot = "mirrors-foot.html") 
{
    if (is.null(mirrors)) {
        mirrors <- getCRANmirrors(all = FALSE, local.only = TRUE)
    }
    mirrors$Host <- gsub("&", "&amp;", mirrors$Host, fixed = TRUE)
    z <- NULL
    if (file.exists(head)) 
        z <- readLines(head)
    z <- c(z, "<dl>")
    for (country in unique(mirrors$Country)) {
        m <- mirrors[mirrors$Country == country, ]
        z <- c(z, paste0("<dt>", country, "</dt>"), "<dd>", "<table border=0 style=\"width: 90%;\">")
        for (k in seq_len(nrow(m))) {
            z <- c(z, "<tr>", "<td style=\"width: 45%;\">", sprintf("<a href=\"%s\" target=\"_top\">%s</a>", 
                m$URL[k], m$URL[k]), "</td>\n", "<td>", m$Host[k], 
                "</td>", "</tr>")
        }
        z <- c(z, "</table>", "</dd>")
    }
    z <- c(z, "</dl>")
    if (file.exists(foot)) 
        z <- c(z, readLines(foot))
    if (file != "") 
        writeLines(z, file)
    invisible(z)
}
