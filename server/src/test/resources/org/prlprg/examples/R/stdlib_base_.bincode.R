#? stdlib
`.bincode` <- function (x, breaks, right = TRUE, include.lowest = FALSE) 
.Internal(bincode(x, breaks, right, include.lowest))

# Examples
## An example with non-unique breaks:
x <- c(0, 0.01, 0.5, 0.99, 1)
b <- c(0, 0, 1, 1)
.bincode(x, b, TRUE)
.bincode(x, b, FALSE)
.bincode(x, b, TRUE, TRUE)
.bincode(x, b, FALSE, TRUE)

