#? stdlib
`contr.sum` <- function (n, contrasts = TRUE, sparse = FALSE) 
{
    if (length(n) <= 1L) {
        if (is.numeric(n) && length(n) == 1L && n > 1L) 
            levels <- seq_len(n)
        else stop("not enough degrees of freedom to define contrasts")
    }
    else levels <- n
    levels <- as.character(levels)
    cont <- .Diag(levels, sparse = sparse)
    if (contrasts) {
        cont <- cont[, -length(levels), drop = FALSE]
        cont[length(levels), ] <- -1
        colnames(cont) <- NULL
    }
    cont
}
