#? stdlib
`charmatch` <- function (x, table, nomatch = NA_integer_) 
.Internal(charmatch(as.character(x), as.character(table), nomatch))

# Examples
charmatch("", "")                             # returns 1
charmatch("m",   c("mean", "median", "mode")) # returns 0
charmatch("med", c("mean", "median", "mode")) # returns 2

