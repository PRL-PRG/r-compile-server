#? stdlib
`toBibtex.person` <- function (object, escape = FALSE, ...) 
{
    y <- vapply(object, function(p) {
        br <- if (is.null(p$family)) 
            c("{", "}")
        else c("", "")
        s <- format(p, include = c("family", "given"), braces = list(given = br, 
            family = c("", ",")))
        if (isTRUE(escape) && (Encoding(s <- enc2utf8(s)) == 
            "UTF-8")) 
            tools::encoded_text_to_latex(s, "UTF-8")
        else s
    }, "")
    y <- y[nzchar(y)]
    if (length(y)) 
        y <- paste(y, collapse = " and ")
    class(y) <- "Bibtex"
    y
}
