#? stdlib
`mime_canonical_encoding` <- function (encoding) 
{
    encoding[encoding %in% c("", "unknown")] <- utils::localeToCharset()[1L]
    encoding <- tolower(encoding)
    encoding <- sub("iso_8859-([0-9]+)", "iso-8859-\\1", encoding)
    encoding <- sub("iso8859-([0-9]+)", "iso-8859-\\1", encoding)
    encoding[encoding == "latin1"] <- "iso-8859-1"
    encoding[encoding == "latin2"] <- "iso-8859-2"
    encoding[encoding == "latin3"] <- "iso-8859-3"
    encoding[encoding == "latin4"] <- "iso-8859-4"
    encoding[encoding == "cyrillic"] <- "iso-8859-5"
    encoding[encoding == "arabic"] <- "iso-8859-6"
    encoding[encoding == "greek"] <- "iso-8859-7"
    encoding[encoding == "hebrew"] <- "iso-8859-8"
    encoding[encoding == "latin5"] <- "iso-8859-9"
    encoding[encoding == "latin6"] <- "iso-8859-10"
    encoding[encoding == "latin8"] <- "iso-8859-14"
    encoding[encoding == "latin-9"] <- "iso-8859-15"
    encoding[encoding == "latin10"] <- "iso-8859-16"
    encoding[encoding == "utf8"] <- "utf-8"
    encoding[encoding == "ascii"] <- "us-ascii"
    encoding
}
