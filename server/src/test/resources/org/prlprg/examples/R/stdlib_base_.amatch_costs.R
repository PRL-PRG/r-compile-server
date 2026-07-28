#? stdlib
`.amatch_costs` <- function (x = NULL) 
{
    costs <- c(insertions = 1, deletions = 1, substitutions = 1)
    if (!is.null(x)) {
        x <- as.list(x)
        pos <- pmatch(names(x), names(costs))
        if (anyNA(pos)) {
            warning("unknown cost components ignored")
            x <- x[!is.na(pos)]
        }
        x <- unlist(x)
        if (!all(is.numeric(x)) || any(x < 0)) 
            stop("cost components must be non-negative")
        costs[pos] <- x
    }
    costs
}
