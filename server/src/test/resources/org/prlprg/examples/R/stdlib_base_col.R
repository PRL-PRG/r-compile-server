#? stdlib
`col` <- function (x, as.factor = FALSE) 
{
    if (as.factor) {
        labs <- colnames(x, do.NULL = FALSE, prefix = "")
        res <- factor(.Internal(col(dim(x))), labels = labs)
        dim(res) <- dim(x)
        res
    }
    else .Internal(col(dim(x)))
}

# Examples
# extract an off-diagonal of a matrix
ma <- matrix(1:12, 3, 4)
ma[row(ma) == col(ma) + 1]

# create an identity 5-by-5 matrix more slowly than diag(n = 5):
x <- matrix(0, nrow = 5, ncol = 5)
x[row(x) == col(x)] <- 1

(i34 <- .col(3:4))
stopifnot(identical(i34, .col(c(3,4)))) # 'dim' maybe "double"

