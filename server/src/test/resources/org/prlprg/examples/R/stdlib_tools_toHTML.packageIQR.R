#? stdlib
`toHTML.packageIQR` <- function (x, ...) 
{
    db <- x$results
    x$title <- iconv(x$title, to = "UTF-8")
    x$footer <- iconv(x$footer, to = "UTF-8")
    db <- iconv(db, to = "UTF-8")
    out <- if (nrow(db) == 0L) 
        NULL
    else lapply(split(1:nrow(db), db[, "Package"]), function(ind) db[ind, 
        c("Item", "Title"), drop = FALSE])
    result <- HTMLheader(...)
    for (pkg in names(out)) {
        result <- c(result, paste0("<h2>", htmlify(x$title), 
            " in package &lsquo;", htmlify(pkg), "&rsquo;</h2>"), 
            "<table cols=\"2\" style=\"width: 100%;\">", paste0("<tr>\n", 
                " <td style=\"text-align: left; vertical-align: top; width: 10%;\">\n", 
                htmlify(out[[pkg]][, "Item"]), "\n </td>\n", 
                " <td style=\"text-align: left; vertical-align: top; width: 90%;\">\n", 
                htmlify(out[[pkg]][, "Title"]), "\n </td>\n</tr>\n"), 
            "</table>")
    }
    if (!is.null(x$footer)) 
        result <- c(result, "<p>", htmlify(x$footer), "</p>")
    result <- c(result, "</div></body></html>")
    result
}
