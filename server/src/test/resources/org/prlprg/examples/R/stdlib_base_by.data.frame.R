#? stdlib
`by.data.frame` <- function (data, INDICES, FUN, ..., simplify = TRUE) 
{
    if (inherits(INDICES, "formula")) 
        INDICES <- .formula2varlist(INDICES, data)
    if (!is.list(INDICES)) {
        IND <- list(INDICES)
        names(IND) <- deparse(substitute(INDICES))[1L]
    }
    else IND <- INDICES
    FUNx <- function(x) FUN(data[x, , drop = FALSE], ...)
    nd <- nrow(data)
    structure(eval(substitute(tapply(seq_len(nd), IND, FUNx, 
        simplify = simplify)), data), call = match.call(), class = "by")
}
