#? stdlib
`gsub` <- function (pattern, replacement, x, ignore.case = FALSE, perl = FALSE, 
    fixed = FALSE, useBytes = FALSE) 
{
    if (is.factor(x) && length(levels(x)) < length(x)) {
        gsub(pattern, replacement, levels(x), ignore.case, perl, 
            fixed, useBytes)[x]
    }
    else {
        if (!is.character(x)) 
            x <- as.character(x)
        .Internal(gsub(as.character(pattern), as.character(replacement), 
            x, ignore.case, perl, fixed, useBytes))
    }
}
