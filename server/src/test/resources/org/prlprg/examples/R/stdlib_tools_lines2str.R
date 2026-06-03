#? stdlib
`lines2str` <- function (txt, sep = "") 
{
    bytes <- gsub("\n", sep, paste(txt, collapse = sep), fixed = TRUE, 
        useBytes = TRUE)
    trimws(iconv(bytes, to = "UTF-8", sub = "byte"))
}
