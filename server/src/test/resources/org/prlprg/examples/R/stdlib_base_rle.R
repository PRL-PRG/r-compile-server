#? stdlib
`rle` <- function (x) 
{
    if (!is.vector(x) && !is.list(x)) 
        stop("'x' must be a vector of an atomic type")
    n <- length(x)
    if (n == 0L) 
        return(structure(list(lengths = integer(), values = x), 
            class = "rle"))
    y <- x[-1L] != x[-n]
    i <- c(which(y | is.na(y)), n)
    structure(list(lengths = diff(c(0L, i)), values = x[i]), 
        class = "rle")
}

# Examples
x <- rev(rep(6:10, 1:5))
rle(x)
## lengths [1:5]  5 4 3 2 1
## values  [1:5] 10 9 8 7 6

z <- c(TRUE, TRUE, FALSE, FALSE, TRUE, FALSE, TRUE, TRUE, TRUE)
rle(z)
rle(as.character(z))
print(rle(z), prefix = "..| ")

N <- integer(0)
stopifnot(x == inverse.rle(rle(x)),
          identical(N, inverse.rle(rle(N))),
          z == inverse.rle(rle(z)))

