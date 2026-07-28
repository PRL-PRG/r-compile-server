#? stdlib
`grepl` <- function (pattern, x, ignore.case = FALSE, perl = FALSE, fixed = FALSE, 
    useBytes = FALSE) 
{
    if (is.factor(x) && length(levels(x)) < length(x)) {
        out <- grepl(pattern, c(levels(x), NA_character_), ignore.case, 
            perl, fixed, useBytes)
        outna <- out[length(out)]
        out <- out[x]
        out[is.na(x)] <- outna
        out
    }
    else {
        if (!is.character(x)) 
            x <- as.character(x)
        .Internal(grepl(as.character(pattern), x, ignore.case, 
            FALSE, perl, fixed, useBytes, FALSE))
    }
}
