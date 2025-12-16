#? stdlib
`.parse_CITATION_file` <- function (cfile, encoding = NULL) 
{
    if (is.null(encoding)) 
        encoding <- "ASCII"
    if (encoding %in% c("latin1", "UTF-8") && !l10n_info()$MBCS) {
        parse(file = cfile, encoding = encoding)
    }
    else if (encoding %in% c("C", "ASCII")) {
        x <- readLines(cfile, warn = FALSE)
        asc <- iconv(x, "latin1", "ASCII")
        if (any(is.na(asc) | asc != x)) 
            stop("non-ASCII input in a CITATION file without a declared encoding")
        parse(file = cfile)
    }
    else {
        con <- file(cfile, encoding = encoding)
        on.exit(close(con))
        parse(con)
    }
}
