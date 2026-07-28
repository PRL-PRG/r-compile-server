#? stdlib
`hasName` <- function (x, name) 
match(name, names(x), nomatch = 0L) > 0L

# Examples
x <- list(abc = 1, def = 2)
!is.null(x$abc) # correct
!is.null(x$a)   # this is the wrong test!
hasName(x, "abc")
hasName(x, "a")

