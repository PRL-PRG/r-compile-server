#? stdlib
`.leastMethodDistance` <- function (methods, supersList, classDefs, fromGroup, verbose = FALSE) 
{
    n <- length(methods)
    dist <- rep(0, n)
    nArg <- length(classDefs)
    defClasses <- matrix("ANY", nArg, n)
    for (j in 1L:n) {
        cl <- methods[[j]]@defined@.Data
        defClasses[seq_along(cl), j] <- cl
    }
    containsDist <- lapply(classDefs, .inhDistances)
    maxDist <- max(unlist(containsDist), na.rm = TRUE) + 1
    if (verbose) {
        cat("** individual arguments' distances:\n")
        print(containsDist)
    }
    for (i in 1L:nArg) {
        ihi <- containsDist[[i]]
        ihi[is.na(ihi)] <- maxDist
        cli <- defClasses[i, ]
        dist <- dist + ihi[match(cli, names(ihi))]
    }
    if (verbose) 
        cat("** final methods' distances: (", paste(formatC(dist), 
            collapse = ", "), ")\n", sep = "")
    best <- dist == min(dist)
    if (any(fromGroup[best]) && !all(fromGroup[best])) 
        best <- best & !fromGroup
    (1:n)[best]
}
