#? stdlib
`by.default` <- function (data, INDICES, FUN, ..., simplify = TRUE) 
{
    dd <- as.data.frame(data)
    if (length(dim(data))) 
        by(dd, INDICES, FUN, ..., simplify = simplify)
    else {
        if (!is.list(INDICES)) {
            IND <- list(INDICES)
            names(IND) <- deparse(substitute(INDICES))[1L]
        }
        else IND <- INDICES
        FUNx <- function(x) FUN(dd[x, ], ...)
        nd <- nrow(dd)
        structure(eval(substitute(tapply(seq_len(nd), IND, FUNx, 
            simplify = simplify)), dd), call = match.call(), 
            class = "by")
    }
}
