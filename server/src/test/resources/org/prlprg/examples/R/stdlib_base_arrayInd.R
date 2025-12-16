#? stdlib
`arrayInd` <- function (ind, .dim, .dimnames = NULL, useNames = FALSE) 
{
    m <- length(ind)
    rank <- length(.dim)
    wh1 <- ind - 1L
    ind <- 1L + wh1%%.dim[1L]
    dnms <- if (useNames) {
        list(.dimnames[[1L]][ind], if (any(nzchar(nd <- names(.dimnames)))) nd else if (rank == 
            2L) c("row", "col") else paste0("dim", seq_len(rank)))
    }
    ind <- matrix(ind, nrow = m, ncol = rank, dimnames = dnms)
    if (rank >= 2L) {
        denom <- 1L
        for (i in 2L:rank) {
            denom <- denom * .dim[i - 1L]
            nextd1 <- wh1%/%denom
            ind[, i] <- 1L + nextd1%%.dim[i]
        }
    }
    storage.mode(ind) <- "integer"
    ind
}
