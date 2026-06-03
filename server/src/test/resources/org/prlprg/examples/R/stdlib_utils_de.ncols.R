#? stdlib
`de.ncols` <- function (inlist) 
{
    ncols <- matrix(0, nrow = length(inlist), ncol = 2L)
    i <- 1L
    for (telt in inlist) {
        if (is.matrix(telt)) {
            ncols[i, 1L] <- ncol(telt)
            ncols[i, 2L] <- 2L
        }
        else if (is.list(telt)) {
            for (telt2 in telt) if (!is.vector(telt2)) 
                stop("wrong argument to 'dataentry'")
            ncols[i, 1L] <- length(telt)
            ncols[i, 2L] <- 3L
        }
        else if (is.vector(telt)) {
            ncols[i, 1L] <- 1L
            ncols[i, 2L] <- 1L
        }
        else stop("wrong argument to 'dataentry'")
        i <- i + 1L
    }
    return(ncols)
}
