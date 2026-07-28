#? stdlib
`.write_description` <- function (x, dfile) 
{
    if (!is.na(encoding <- x["Encoding"])) {
        ind <- is.na(match(Encoding(x), c(encoding, "unknown")))
        if (any(ind)) 
            x[ind] <- mapply(iconv, x[ind], Encoding(x)[ind], 
                encoding, sub = "byte")
    }
    else {
        asc <- iconv(x, "latin1", "ASCII")
        if (!identical(asc, x)) {
            warning("Unknown encoding with non-ASCII data: converting to ASCII")
            ind <- is.na(asc) | (asc != x)
            x[ind] <- iconv(x[ind], "latin1", "ASCII", sub = "byte")
        }
    }
    if (!is.na(encoding) && (encoding != "UTF-8")) {
        x <- iconv(x, from = encoding, to = "UTF-8")
        tfile <- tempfile()
        write.dcf(rbind(x), tfile, keep.white = c(.keep_white_description_fields, 
            "Maintainer", "BugReports"), useBytes = TRUE)
        writeLines(iconv(readLines(tfile), from = "UTF-8", to = encoding), 
            dfile, useBytes = TRUE)
    }
    else {
        write.dcf(rbind(x), dfile, keep.white = c(.keep_white_description_fields, 
            "Maintainer", "BugReports"), useBytes = TRUE)
    }
}
