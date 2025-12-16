#? stdlib
`data.class` <- function (x) 
{
    if (length(cl <- oldClass(x))) 
        cl[1L]
    else {
        l <- length(dim(x))
        if (l == 2L) 
            "matrix"
        else if (l) 
            "array"
        else mode(x)
    }
}

# Examples
x <- LETTERS
data.class(factor(x))                 # has a class attribute
data.class(matrix(x, ncol = 13))      # has a dim attribute
data.class(list(x))                   # the same as mode(x)
data.class(x)                         # the same as mode(x)

stopifnot(data.class(1:2) == "numeric") # compatibility "rule"

