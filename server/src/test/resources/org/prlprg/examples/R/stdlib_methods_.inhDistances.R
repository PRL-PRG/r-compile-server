#? stdlib
`.inhDistances` <- function (classDef) 
{
    contains <- classDef@contains
    allNames <- unique(names(contains))
    dist <- rep(2, length(allNames))
    for (i in seq_along(dist)) {
        ci <- contains[[i]]
        dist[[i]] <- ci@distance
    }
    dist <- c(0, dist, NA)
    names(dist) <- c(classDef@className, allNames, "ANY")
    dist
}
