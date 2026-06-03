#? stdlib
`urlify` <- function (x, reserved = FALSE, repeated = FALSE) 
{
    alldelims <- "][!$&'()*+,;=:/?@#"
    if (!repeated && grepl("%[[:xdigit:]]{2}", x, useBytes = TRUE)) {
        gsub("&", "&amp;", x, fixed = TRUE)
    }
    else {
        chars <- unlist(strsplit(x, ""))
        hex <- vapply(chars, function(x) paste0("%", toupper(as.character(charToRaw(x))), 
            collapse = ""), "")
        if (is.character(reserved)) {
            reserved <- paste(reserved, collapse = "")
            reserved <- if (startsWith(reserved, "^")) 
                substring(reserved, 2L)
            else rawToChar(setdiff(charToRaw(alldelims), charToRaw(reserved)))
            escape <- any(charToRaw(reserved) == charToRaw("&"))
        }
        else if (!reserved) {
            reserved <- alldelims
            escape <- TRUE
        }
        else {
            reserved <- ""
            escape <- FALSE
        }
        todo <- paste0("[^", reserved, "ABCDEFGHIJKLMNOPQRSTUVWXYZ", 
            "abcdefghijklmnopqrstuvwxyz0123456789._~-", "]")
        x <- paste(ifelse(grepl(todo, chars), hex, chars), collapse = "")
        if (escape) 
            x <- gsub("&", "&amp;", x, fixed = TRUE)
        x
    }
}
