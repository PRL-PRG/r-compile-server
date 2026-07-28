#? stdlib
`makeVignetteTable` <- function (vignettes, depth = 2) 
{
    out <- c("<table style=\"width: 100%;\">", "<col style=\"width: 22%;\" />", 
        "<col style=\"width:  2%;\" />", "<col style=\"width: 50%;\" />", 
        "<col style=\"width:  8%;\" />", "<col style=\"width:  8%;\" />", 
        "<col style=\"width:  8%;\" />")
    for (i in seq_len(nrow(vignettes))) {
        Outfile <- vignettes[i, "PDF"]
        topic <- file_path_sans_ext(Outfile)
        Title <- vignettes[i, "Title"]
        File <- vignettes[i, "File"]
        R <- vignettes[i, "R"]
        pkg <- vignettes[i, "Package"]
        root <- c(rep.int("../", depth), "library/", pkg, "/doc/")
        link <- c("<a href=\"", root, if (nchar(Outfile)) Outfile else File, 
            "\">", pkg, "::", topic, "</a>")
        line <- c("<tr><td style=\"text-align: right; vertical-align: top;\">", 
            link, "</td>\n<td></td><td style=\"vertical-align: top;\">", 
            Title, "</td>\n<td style=\"vertical-align: top;\">", 
            if (nchar(Outfile)) c("<a href=\"", root, Outfile, 
                "\">", vignette_type(Outfile), "</a>"), "</td>\n<td style=\"vertical-align: top;\">", 
            "<a href=\"", root, File, "\">source</a>", "</td>\n<td style=\"vertical-align: top; white-space: nowrap\">", 
            if (nchar(R)) c("<a href=\"", root, R, "\">R code</a>"), 
            "</td></tr>")
        out <- c(out, paste(line, collapse = ""))
    }
    c(out, "</table>")
}
