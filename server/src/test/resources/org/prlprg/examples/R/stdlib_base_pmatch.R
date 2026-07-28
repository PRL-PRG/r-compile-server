#? stdlib
`pmatch` <- function (x, table, nomatch = NA_integer_, duplicates.ok = FALSE) 
.Internal(pmatch(as.character(x), as.character(table), nomatch, 
    duplicates.ok))

# Examples
pmatch("", "")                             # returns NA
pmatch("m",   c("mean", "median", "mode")) # returns NA
pmatch("med", c("mean", "median", "mode")) # returns 2

pmatch(c("", "ab", "ab"), c("abc", "ab"), duplicates.ok = FALSE)
pmatch(c("", "ab", "ab"), c("abc", "ab"), duplicates.ok = TRUE)
## compare
charmatch(c("", "ab", "ab"), c("abc", "ab"))

