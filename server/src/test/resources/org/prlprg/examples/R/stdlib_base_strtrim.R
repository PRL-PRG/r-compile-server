#? stdlib
`strtrim` <- function (x, width) 
{
    if (!is.character(x)) 
        x <- as.character(x)
    .Internal(strtrim(x, width))
}

# Examples
strtrim(c("abcdef", "abcdef", "abcdef"), c(1,5,10))

