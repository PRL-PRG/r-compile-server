#? stdlib
`de.setup` <- function (ilist, list.names, incols) 
{
    ilen <- sum(incols)
    ivec <- vector("list", ilen)
    inames <- vector("list", ilen)
    i <- 1L
    k <- 0L
    for (telt in ilist) {
        k <- k + 1L
        if (is.list(telt)) {
            y <- names(telt)
            for (j in seq_along(telt)) {
                ivec[[i]] <- telt[[j]]
                if (is.null(y) || y[j] == "") 
                  inames[[i]] <- paste0("var", i)
                else inames[[i]] <- y[j]
                i <- i + 1L
            }
        }
        else if (is.vector(telt)) {
            ivec[[i]] <- telt
            inames[[i]] <- list.names[[k]]
            i <- i + 1
        }
        else if (is.matrix(telt)) {
            y <- dimnames(telt)[[2L]]
            for (j in seq_len(ncol(telt))) {
                ivec[[i]] <- telt[, j]
                if (is.null(y) || y[j] == "") 
                  inames[[i]] <- paste0("var", i)
                else inames[[i]] <- y[j]
                i <- i + 1L
            }
        }
        else stop("wrong argument to 'dataentry'")
    }
    names(ivec) <- inames
    return(ivec)
}
