#? stdlib
`.choosePos` <- function (thisClass, superclasses, subNames, affected) 
{
    candidates <- list()
    allNames <- c(thisClass, superclasses)
    dups <- unique(superclasses[affected])
    whichCase <- names(subNames)
    for (what in dups) {
        where <- seq_along(allNames)[match(allNames, what, 0) > 
            0]
        whatRemove <- lapply(-seq_along(where), function(x, y) y[x], 
            y = where)
        if (length(candidates) == 0) 
            candidates <- whatRemove
        else candidates <- outer(candidates, whatRemove, function(x, 
            y) mapply(c, x, y, SIMPLIFY = FALSE))
    }
    problems <- function(x, y) any(diff(match(y, x)) < 0)
    possibles <- lapply(candidates, function(x, names) names[-x], 
        names = allNames)
    scores <- vector("list", length(possibles))
    for (i in seq_along(possibles)) {
        score <- vapply(subNames, problems, NA, x = possibles[[i]])
        scores[[i]] <- whichCase[score]
        if (!any(score)) 
            return(-candidates[[i]] + 1)
    }
    i <- which.min(lengths(scores))
    list(-candidates[[i]] + 1, scores[[i]])
}
