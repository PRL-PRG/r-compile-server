#? stdlib
`strrep` <- function (x, times) 
{
    if (!is.character(x)) 
        x <- as.character(x)
    .Internal(strrep(x, as.integer(times)))
}

# Examples
strrep("ABC", 2)
strrep(c("A", "B", "C"), 1 : 3)
## Create vectors with the given numbers of spaces:
strrep(" ", 1 : 5)

