#? stdlib
`Ops.ts` <- function (e1, e2) 
{
    if (missing(e2)) {
        NextMethod(.Generic)
    }
    else if (any(!nzchar(.Method))) {
        NextMethod(.Generic)
    }
    else {
        nc1 <- NCOL(e1)
        nc2 <- NCOL(e2)
        e12 <- .cbind.ts(list(e1, e2), c(deparse(substitute(e1))[1L], 
            deparse(substitute(e2))[1L]), union = FALSE)
        e1 <- if (is.matrix(e1)) 
            e12[, 1L:nc1, drop = FALSE]
        else e12[, 1]
        e2 <- if (is.matrix(e2)) 
            e12[, nc1 + (1L:nc2), drop = FALSE]
        else e12[, nc1 + 1]
        NextMethod(.Generic)
    }
}
