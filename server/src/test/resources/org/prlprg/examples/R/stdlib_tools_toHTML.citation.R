#? stdlib
`toHTML.citation` <- function (x, header = TRUE, ...) 
{
    len <- length(x)
    if (!len) 
        return(character())
    is_non_blank_string <- function(s) {
        (length(s) == 1L) && length(grep("[^[:blank:]]", s))
    }
    format_entry_as_text <- function(x) {
        c(if (is_non_blank_string(header <- x$header)) c("<p>", 
            htmlify(header), "</p>"), "<blockquote>", if (!is.null(tv <- x$textVersion)) {
            c("<p>", htmlify(tv), "</p>")
        } else {
            format(x, "html")
        }, "</blockquote>", if (is_non_blank_string(footer <- x$footer)) c("<p>", 
            htmlify(footer), "</p>"))
    }
    format_entry_as_BibTeX <- function(x) {
        bib <- unclass(utils::toBibtex(x))
        len <- length(bib)
        out <- c(paste0("  ", bib[1L]), strwrap(bib[-c(1L, len)], 
            indent = 4L, exdent = 6L), "  }")
        c("<pre>", htmlify(out, FALSE), "</pre>")
    }
    htmlify <- function(s, a = TRUE) {
        s <- .replace_chars_by_hex_subs(s, invalid_HTML_chars_re)
        s <- fsub("&", "&amp;", s)
        s <- fsub("<", "&lt;", s)
        s <- fsub(">", "&gt;", s)
        if (a) {
            s <- .gsub_with_transformed_matches("&lt;(URL: *)?((https?|ftp)://[^[:space:]]+)[[:space:]]*&gt;", 
                "&lt;<a href=\"%s\">\\2</a>&gt;", s, urlify, 
                2L)
            s <- .gsub_with_transformed_matches("([^>\"?])((https?|ftp)://[[:alnum:]/.:@+\\_~%#?=&;,-]+[[:alnum:]/])", 
                "\\1<a href=\"%s\">\\2</a>", s, urlify, 2L)
            s <- .gsub_with_transformed_matches("&lt;(DOI|doi):[[:space:]]*([^<[:space:]]+[[:alnum:]])&gt;", 
                "&lt;<a href=\"https://doi.org/%s\">doi:\\2</a>&gt;", 
                s, urlify, 2L)
            s <- .gsub_with_transformed_matches("[^>\"](DOI|doi):[[:space:]]*([^<[:space:]&]+[[:alnum:]])", 
                "&lt;<a href=\"https://doi.org/%s\">doi:\\2</a>&gt;", 
                s, urlify, 2L)
        }
        s
    }
    package <- attr(x, "package")
    if (!(is.character(header) || is.logical(header))) {
        warning("unknown header specification")
        header <- TRUE
    }
    if (identical(header, "R")) {
        header <- HTMLheader(...)
        footer <- c("</div></body>", "</html>")
    }
    else if (isFALSE(header)) {
        header <- character(0L)
        footer <- character(0L)
    }
    else {
        if (isTRUE(header)) 
            header <- c("<head>", if (is.null(package)) "<title>Citation information</title>" else sprintf("<title>%s citation information</title>", 
                package), "<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\" />", 
                "<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0, user-scalable=yes\" />", 
                "</head>")
        header <- c("<!DOCTYPE html>", "<html>", header, "<body><div class=\"container\">")
        footer <- c("</div></body>", "</html>")
    }
    c(header, if (is_non_blank_string(mheader <- attr(x, "mheader"))) c("<p>", 
        htmlify(mheader), "</p>"), do.call(c, lapply(x, format_entry_as_text)), 
        if (is_non_blank_string(mfooter <- attr(x, "mfooter"))) c("<p>", 
            htmlify(mfooter), "</p>"), c("<p>", ngettext(len, 
            "Corresponding BibTeX entry:", "Corresponding BibTeX entries:"), 
            "</p>", do.call(c, lapply(x, format_entry_as_BibTeX))), 
        footer)
}
