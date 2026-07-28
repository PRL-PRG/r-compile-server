#? stdlib
`.getBestMethods` <- function (methods, supersList, fromGroup, verbose = FALSE) 
{
    n <- length(methods)
    nArg <- length(supersList)
    sigs <- matrix("ANY", nArg, n)
    for (i in 1:n) {
        sig <- methods[[i]]@defined
        if (length(sig) < nArg) {
            if (verbose) 
                cat(sprintf(" .. method %d: length(sig) = %d < nArg = %d\n", 
                  i, length(sig), nArg))
            sigs[seq_along(sig), i] <- sig
        }
        else sigs[, i] <- sig
    }
    if (nArg < 2) {
        return(which.min(match(sigs[1L, ], supersList[[1L]])))
    }
    pos <- matrix(0L, nArg, n)
    for (i in 1:nArg) {
        pos[i, ] <- match(sigs[i, ], supersList[[i]])
    }
    valid <- colSums(is.na(pos)) == 0L
    best <- valid
    dominated <- !valid
    seqn <- seq_len(n)
    for (i in seqn[valid]) {
        for (j in seqn[-i][valid[-i]]) {
            diffs <- pos[, j] - pos[, i]
            if (any(diffs < 0)) {
                best[i] <- FALSE
                if (dominated[i]) 
                  break
            }
            if (all(diffs <= 0)) {
                dominated[i] <- TRUE
                if (!best[i]) 
                  break
            }
        }
    }
    if (verbose) 
        cat(if (any(best)) 
            paste(" have best ones", paste(format(seqn[best]), 
                collapse = ","))
        else if (any(dominated)) 
            paste(" can eliminate dominated ones,", paste(format(seqn[dominated]), 
                collapse = ",")), "\n")
    if (any(best)) 
        seqn[best]
    else seqn[!dominated]
}
