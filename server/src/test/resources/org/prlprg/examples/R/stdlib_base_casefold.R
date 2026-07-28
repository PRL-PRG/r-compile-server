#? stdlib
`casefold` <- function (x, upper = FALSE) 
if (upper) toupper(x) else tolower(x)
