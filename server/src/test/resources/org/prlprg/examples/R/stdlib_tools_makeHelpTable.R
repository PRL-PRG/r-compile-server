#? stdlib
`makeHelpTable` <- function (help, depth = 2) 
{
    out <- c("<table style=\"width: 100%;\">", "<col style=\"width: 22%;\" />", 
        "<col style=\"width:  2%;\" />", "<col style=\"width: 74%;\" />")
    pkg <- help[, "Package"]
    root <- paste0(strrep("../", depth), "library/", pkg, "/help/")
    topic <- help[, "Topic"]
    Title <- help[, "Title"]
    links <- paste0("<a href=\"", root, topic2url(topic), "\">", 
        ifelse(nchar(pkg), paste0(pkg, "::"), ""), topic, "</a>")
    lines <- paste0("<tr><td style=\"text-align: right; vertical-align: top;\">", 
        links, "</td>\n<td></td><td style=\"vertical-align: top;\">", 
        Title, "</td></tr>")
    c(out, lines, "</table>")
}
