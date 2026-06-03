#? stdlib
`median` <- function (x, na.rm = FALSE, ...) 
UseMethod("median")

# Examples
median(1:4)                # = 2.5 [even number]
median(c(1:3, 100, 1000))  # = 3 [odd, robust]

