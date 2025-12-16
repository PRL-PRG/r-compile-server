#? stdlib
`contr.helmert` <- function (n, contrasts = TRUE, sparse = FALSE) 
{
    if (length(n) <= 1L) {
        if (is.numeric(n) && length(n) == 1L && n > 1L) 
            levels <- seq_len(n)
        else stop("not enough degrees of freedom to define contrasts")
    }
    else levels <- n
    levels <- as.character(levels)
    if (contrasts) {
        n <- length(levels)
        cont <- array(-1, c(n, n - 1L), list(levels, NULL))
        cont[col(cont) <= row(cont) - 2L] <- 0
        cont[col(cont) == row(cont) - 1L] <- seq_len(n - 1L)
        colnames(cont) <- NULL
        if (sparse) 
            .asSparse(cont)
        else cont
    }
    else .Diag(levels, sparse = sparse)
}
