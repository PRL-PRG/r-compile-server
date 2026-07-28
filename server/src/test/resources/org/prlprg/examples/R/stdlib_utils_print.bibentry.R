#? stdlib
`print.bibentry` <- function (x, style = "text", .bibstyle = NULL, bibtex = length(x) <= 
    getOption("citation.bibtex.max", 1L), ...) 
{
    style <- .bibentry_match_format_style(style)
    n <- length(x)
    if (!n) {
        cat(switch((cl <- class(x)[[1L]]), bibentry = "bibentry()", 
            sprintf("<0-length %s>", cl)), sep = "", "\n")
    }
    else if (style == "R") {
        writeLines(format(x, "R", bibtex = bibtex, collapse = TRUE, 
            ...))
    }
    else {
        y <- format(x, style, .bibstyle, bibtex = bibtex, citMsg = missing(bibtex), 
            ...)
        if (style == "citation") {
            writeLines(paste(y[nzchar(y)], collapse = "\n\n"))
        }
        else {
            writeLines(paste(y, collapse = "\n\n"))
        }
    }
    invisible(x)
}
