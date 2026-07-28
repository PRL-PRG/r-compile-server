#? stdlib
`.replace_chars_by_hex_subs` <- function (x, re) 
{
    char_to_hex_sub <- function(s) {
        paste0("<", charToRaw(s), ">", collapse = "")
    }
    vapply(strsplit(x, ""), function(e) {
        pos <- grep(re, e, perl = TRUE)
        if (length(pos)) 
            e[pos] <- vapply(e[pos], char_to_hex_sub, "")
        paste(e, collapse = "")
    }, "")
}
