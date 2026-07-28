#? stdlib
`.canonicalize_quotes` <- function (txt) 
{
    txt <- as.character(txt)
    if (!length(txt)) 
        return(txt)
    enc <- Encoding(txt)
    txt <- gsub("(‘|’)", "'", txt, perl = TRUE, useBytes = TRUE)
    txt <- gsub("(“|”)", "\"", txt, perl = TRUE, useBytes = TRUE)
    Encoding(txt) <- enc
    txt
}
