#? stdlib
`gregexpr` <- function (pattern, text, ignore.case = FALSE, perl = FALSE, fixed = FALSE, 
    useBytes = FALSE) 
{
    if (is.factor(text) && length(levels(text)) < length(text)) {
        out <- gregexpr(pattern, c(levels(text), NA_character_), 
            ignore.case, perl, fixed, useBytes)
        outna <- out[length(out)]
        out <- out[text]
        out[is.na(text)] <- outna
        out
    }
    else {
        if (!is.character(text)) 
            text <- as.character(text)
        .Internal(gregexpr(as.character(pattern), text, ignore.case, 
            perl, fixed, useBytes))
    }
}
