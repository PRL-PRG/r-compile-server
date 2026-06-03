#? stdlib
`isBlankRd` <- function (x) 
length(grep("^[[:blank:]]*\n?$", x, perl = TRUE)) == length(x)
