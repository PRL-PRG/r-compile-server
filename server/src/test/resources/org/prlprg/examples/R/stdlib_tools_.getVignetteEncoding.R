#? stdlib
`.getVignetteEncoding` <- function (lines, default = NA) 
{
    res <- .get_vignette_metadata(lines, "Encoding")[1L]
    if (is.na(res)) {
        poss <- grep("^[[:space:]]*%+[[:space:]]*\\\\SweaveUTF8[[:space:]]*$", 
            lines, useBytes = TRUE)
        if (length(poss)) 
            "UTF-8"
        else {
            poss <- grep("^[[:space:]]*\\\\usepackage\\[([[:alnum:]]+)\\]\\{inputen[cx]\\}", 
                lines, useBytes = TRUE)
            start <- grep("^[[:space:]]*\\\\begin\\{document\\}", 
                lines, useBytes = TRUE)
            if (length(start)) 
                poss <- poss[poss < start[1L]]
            if (length(poss)) {
                poss <- lines[poss[1L]]
                poss <- gsub("%.*", "", poss, useBytes = TRUE)
                res <- gsub("^[[:space:]]*\\\\usepackage\\[([[:alnum:]]+)\\].*", 
                  "\\1", poss)
                switch(res, utf8 = , utf8x = "UTF-8", latin1 = , 
                  `iso-8859-1` = "latin1", latin2 = , `iso-8859-2` = "latin2", 
                  latin9 = , `iso-8859-15` = "latin-9", latin10 = , 
                  `iso-8859-16` = "latin10", cyrillic = , `iso-8859-5` = "ISO-8859-5", 
                  `koi8-r` = "KOI8-R", arabic = "ISO-8859-6", 
                  greek = , `iso-8859-7` = "ISO-8859-7", hebrew = , 
                  `iso-8859-8` = "ISO-8859-8", ansinew = "CP1252", 
                  applemac = "macroman", cp1250 = "CP1250", cp1252 = "CP1252", 
                  cp1257 = "CP1257", "unknown")
            }
            else if (!is.na(default)) {
                default
            }
            else {
                asc <- iconv(lines, "latin1", "ASCII")
                if (anyNA(asc) || any(asc != lines)) 
                  "non-ASCII"
                else ""
            }
        }
    }
    else res
}
