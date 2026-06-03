#? stdlib
`contr.treatment` <- function (n, base = 1, contrasts = TRUE, sparse = FALSE) 
{
    if (is.numeric(n) && length(n) == 1L) {
        if (n > 1L) 
            levels <- as.character(seq_len(n))
        else stop("not enough degrees of freedom to define contrasts")
    }
    else {
        levels <- as.character(n)
        n <- length(n)
    }
    contr <- .Diag(levels, sparse = sparse)
    if (contrasts) {
        if (n < 2L) 
            stop(gettextf("contrasts not defined for %d degrees of freedom", 
                n - 1L), domain = NA)
        if (base < 1L || base > n) 
            stop("baseline group number out of range")
        contr <- contr[, -base, drop = FALSE]
    }
    contr
}
