#? stdlib
`get` <- function (x, pos = -1L, envir = as.environment(pos), mode = "any", 
    inherits = TRUE) 
.Internal(get(x, envir, mode, inherits))

# Examples
get("%o%")

## test mget
e1 <- new.env()
mget(letters, e1, ifnotfound = as.list(LETTERS))

