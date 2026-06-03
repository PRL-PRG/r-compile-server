#? stdlib
`trimws` <- function (x, which = c("both", "left", "right"), whitespace = "[ \t\r\n]") 
{
    which <- match.arg(which)
    mysub <- function(re, x) sub(re, "", x, perl = TRUE)
    switch(which, left = mysub(paste0("^", whitespace, "+"), 
        x), right = mysub(paste0(whitespace, "+$"), x), both = mysub(paste0(whitespace, 
        "+$"), mysub(paste0("^", whitespace, "+"), x)))
}

# Examples
x <- "  Some text. "
x
trimws(x)
trimws(x, "l")
trimws(x, "r")

## Unicode --> need "stronger" 'whitespace' to match all :
tt <- "text with unicode 'non breakable space'."
xu <- paste(" \t\v", tt, "\u00a0 \n\r")
(tu <- trimws(xu, whitespace = "[\\h\\v]"))
stopifnot(identical(tu, tt))

