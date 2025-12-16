#? stdlib
`kronecker` <- function (X, Y, FUN = "*", make.dimnames = FALSE, ...) 
{
    if (.isMethodsDispatchOn() && (isS4(X) || isS4(Y))) {
        return(methods::kronecker(X, Y, FUN = FUN, make.dimnames = make.dimnames, 
            ...))
    }
    .kronecker(X, Y, FUN = FUN, make.dimnames = make.dimnames, 
        ...)
}

# Examples
# simple scalar multiplication
( M <- matrix(1:6, ncol = 2) )
kronecker(4, M)
# Block diagonal matrix:
kronecker(diag(1, 3), M)

# ask for dimnames

fred <- matrix(1:12, 3, 4, dimnames = list(LETTERS[1:3], LETTERS[4:7]))
bill <- c("happy" = 100, "sad" = 1000)
kronecker(fred, bill, make.dimnames = TRUE)

bill <- outer(bill, c("cat" = 3, "dog" = 4))
kronecker(fred, bill, make.dimnames = TRUE)

