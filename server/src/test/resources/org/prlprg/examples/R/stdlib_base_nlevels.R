#? stdlib
`nlevels` <- function (x) 
length(levels(x))

# Examples
nlevels(gl(3, 7)) # = 3

