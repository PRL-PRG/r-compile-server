#? stdlib
`latex_canonical_encoding` <- function (encoding) 
{
    if (encoding == "") 
        encoding <- utils::localeToCharset()[1L]
    encoding <- tolower(encoding)
    encoding <- sub("iso_8859-([0-9]+)", "iso-8859-\\1", encoding)
    encoding <- sub("iso8859-([0-9]+)", "iso-8859-\\1", encoding)
    encoding[encoding == "iso-8859-1"] <- "latin1"
    encoding[encoding == "iso-8859-2"] <- "latin2"
    encoding[encoding == "iso-8859-3"] <- "latin3"
    encoding[encoding == "iso-8859-4"] <- "latin4"
    encoding[encoding == "iso-8859-5"] <- "cyrillic"
    encoding[encoding == "iso-8859-6"] <- "arabic"
    encoding[encoding == "iso-8859-7"] <- "greek"
    encoding[encoding == "iso-8859-8"] <- "hebrew"
    encoding[encoding == "iso-8859-9"] <- "latin5"
    encoding[encoding == "iso-8859-10"] <- "latin6"
    encoding[encoding == "iso-8859-14"] <- "latin8"
    encoding[encoding %in% c("latin-9", "iso-8859-15")] <- "latin9"
    encoding[encoding == "iso-8859-16"] <- "latin10"
    encoding[encoding == "utf-8"] <- "utf8"
    encoding
}
