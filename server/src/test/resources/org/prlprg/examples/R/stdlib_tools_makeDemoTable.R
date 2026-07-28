#? stdlib
`makeDemoTable` <- function (demos, depth = 2) 
{
    out <- c("<table style=\"width: 100%;\">", "<col style=\"width: 22%;\" />", 
        "<col style=\"width:  2%;\" />", "<col style=\"width: 54%;\" />", 
        "<col style=\"width: 20%;\" />")
    for (i in seq_len(nrow(demos))) {
        topic <- demos[i, "Topic"]
        pkg <- demos[i, "Package"]
        root <- c(rep.int("../", depth), "library/", pkg, "/")
        Title <- demos[i, "Title"]
        path <- file.path(demos[i, "LibPath"], "demo")
        files <- basename(list_files_with_type(path, "demo", 
            full.names = FALSE))
        file <- files[topic == file_path_sans_ext(files)]
        if (length(file) == 1) {
            link <- c("<a href=\"", root, "demo/", file, "\">", 
                pkg, "::", topic, "</a>")
            runlink <- c(" <a href=\"", root, "Demo/", topic, 
                "\">(Run demo)</a>")
        }
        else {
            link <- c(pkg, "::", topic)
            runlink <- ""
        }
        line <- c("<tr><td style=\"text-align: right; vertical-align: top;\">", 
            link, "</td>\n<td></td><td style=\"vertical-align: top;\">", 
            Title, "</td>\n<td style=\"vertical-align: top; white-space: nowrap\">", 
            runlink, "</td></tr>")
        out <- c(out, paste(line, collapse = ""))
    }
    c(out, "</table>")
}
