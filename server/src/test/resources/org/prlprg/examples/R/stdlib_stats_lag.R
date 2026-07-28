#? stdlib
`lag` <- function (x, ...) 
UseMethod("lag")

# Examples
lag(ldeaths, 12) # starts one year earlier

