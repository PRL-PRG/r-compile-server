#? stdlib
`getParseText` <- function (parseData, id) 
{
    srcfile <- attr(parseData, "srcfile")
    d <- parseData[as.character(id), ]
    text <- d$text
    if (is.null(text)) {
        text <- character(nrow(d))
        blank <- seq_along(text)
    }
    else blank <- which(!nzchar(text) | (d$token == "STR_CONST" & 
        startsWith(text, "[")))
    for (i in blank) {
        lines <- getSrcLines(srcfile, d$line1[i], d$line2[i])
        n <- length(lines)
        lines[n] <- substr_with_tabs(lines[n], 1, d$col2[i])
        lines[1] <- substr_with_tabs(lines[1], d$col1[i], Inf)
        text[i] <- paste(lines, collapse = "\n")
    }
    text
}
