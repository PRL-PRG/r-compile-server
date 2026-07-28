#? stdlib
`de.restore` <- function (inlist, ncols, coltypes, argnames, args) 
{
    p <- length(ncols)
    rlist <- vector("list", length = p)
    rnames <- vector("character", length = p)
    j <- 1L
    lnames <- names(inlist)
    if (p) 
        for (i in seq_len(p)) {
            if (coltypes[i] == 2) {
                tlen <- length(inlist[[j]])
                x <- matrix(0, nrow = tlen, ncol = ncols[i])
                cnames <- vector("character", ncol(x))
                for (ind1 in seq_len(ncols[i])) {
                  if (tlen != length(inlist[[j]])) {
                    warning("could not restore type information")
                    return(inlist)
                  }
                  x[, ind1] <- inlist[[j]]
                  cnames[ind1] <- lnames[j]
                  j <- j + 1L
                }
                if (nrow(x) == nrow(args[[i]])) 
                  rn <- dimnames(args[[i]])[[1L]]
                else rn <- NULL
                if (any(cnames != "")) 
                  dimnames(x) <- list(rn, cnames)
                rlist[[i]] <- x
                rnames[i] <- argnames[i]
            }
            else if (coltypes[i] == 3) {
                x <- vector("list", length = ncols[i])
                cnames <- vector("character", ncols[i])
                for (ind1 in seq_len(ncols[i])) {
                  x[[ind1]] <- inlist[[j]]
                  cnames[ind1] <- lnames[j]
                  j <- j + 1L
                }
                if (any(cnames != "")) 
                  names(x) <- cnames
                rlist[[i]] <- x
                rnames[i] <- argnames[i]
            }
            else {
                rlist[[i]] <- inlist[[j]]
                j <- j + 1
                rnames[i] <- argnames[i]
            }
        }
    names(rlist) <- rnames
    return(rlist)
}
