#? stdlib
`grepRaw` <- function (pattern, x, offset = 1L, ignore.case = FALSE, value = FALSE, 
    fixed = FALSE, all = FALSE, invert = FALSE) 
{
    if (!is.raw(pattern)) 
        pattern <- charToRaw(as.character(pattern))
    if (!is.raw(x)) 
        x <- charToRaw(as.character(x))
    .Internal(grepRaw(pattern, x, offset, ignore.case, fixed, 
        value, all, invert))
}

# Examples
grepRaw("no match", "textText")  # integer(0): no match
grepRaw("adf", "adadfadfdfadadf") # 3 - the first match
grepRaw("adf", "adadfadfdfadadf", all=TRUE, fixed=TRUE)
## [1]  3  6 13 -- three matches

