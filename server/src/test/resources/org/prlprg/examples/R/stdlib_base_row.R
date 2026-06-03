#? stdlib
`row` <- function (x, as.factor = FALSE) 
{
    if (as.factor) {
        labs <- rownames(x, do.NULL = FALSE, prefix = "")
        res <- factor(.Internal(row(dim(x))), labels = labs)
        dim(res) <- dim(x)
        res
    }
    else .Internal(row(dim(x)))
}

# Examples
x <- matrix(1:12, 3, 4)
# extract the diagonal of a matrix - more slowly than diag(x)
dx <- x[row(x) == col(x)]
dx

# create an identity 5-by-5 matrix more slowly than diag(n = 5):
x <- matrix(0, nrow = 5, ncol = 5)
x[row(x) == col(x)] <- 1
x

(i34 <- .row(3:4))
stopifnot(identical(i34, .row(c(3,4)))) # 'dim' maybe "double"

