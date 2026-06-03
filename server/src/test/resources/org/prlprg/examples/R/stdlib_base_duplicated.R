#? stdlib
`duplicated` <- function (x, incomparables = FALSE, ...) 
UseMethod("duplicated")

# Examples
x <- c(9:20, 1:5, 3:7, 0:8)
## extract unique elements
(xu <- x[!duplicated(x)])
## similar, same elements but different order:
(xu2 <- x[!duplicated(x, fromLast = TRUE)])

## xu == unique(x) but unique(x) is more efficient
stopifnot(identical(xu,  unique(x)),
          identical(xu2, unique(x, fromLast = TRUE)))

duplicated(iris)[140:143]

duplicated(iris3, MARGIN = c(1, 3))
anyDuplicated(iris) ## 143

stopifnot(identical(anyDuplicated(iris), 143L),
          identical(anyDuplicated(iris3, MARGIN = c(1, 3)), 143L))

anyDuplicated(x)
anyDuplicated(x, fromLast = TRUE)

