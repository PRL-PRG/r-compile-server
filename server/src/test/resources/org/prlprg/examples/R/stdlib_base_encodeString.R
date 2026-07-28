#? stdlib
`encodeString` <- function (x, width = 0L, quote = "", na.encode = TRUE, justify = c("left", 
    "right", "centre", "none")) 
{
    at <- attributes(x)
    x <- as.character(x)
    attributes(x) <- at
    oldClass(x) <- NULL
    justify <- match(match.arg(justify), c("left", "right", "centre", 
        "none")) - 1L
    .Internal(encodeString(x, width, quote, justify, na.encode))
}

# Examples
x <- "ab\bc\ndef"
print(x)
cat(x) # interprets escapes
cat(encodeString(x), "\n", sep = "") # similar to print()

factor(x) # makes use of this to print the levels

x <- c("a", "ab", "abcde")
encodeString(x) # width = 0: use as little as possible
encodeString(x, 2) # use two or more (left justified)
encodeString(x, width = NA) # left justification
encodeString(x, width = NA, justify = "c")
encodeString(x, width = NA, justify = "r")
encodeString(x, width = NA, quote = "'", justify = "r")

