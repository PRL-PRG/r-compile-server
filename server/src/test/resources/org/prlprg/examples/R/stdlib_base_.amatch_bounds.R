#? stdlib
`.amatch_bounds` <- function (x = 0.1) 
{
    if (!is.list(x)) {
        if (!is.numeric(x) || (x < 0)) 
            stop("match distance components must be non-negative")
        bounds <- c(as.double(x), rep.int(NA_real_, 4L))
    }
    else {
        table <- c("cost", "insertions", "deletions", "substitutions", 
            "all")
        pos <- pmatch(names(x), table)
        if (anyNA(pos)) {
            warning("unknown match distance components ignored")
            x <- x[!is.na(pos)]
        }
        names(x) <- table[pos]
        x <- unlist(x)
        if (!all(is.numeric(x)) || any(x < 0)) 
            stop("match distance components must be non-negative")
        if (!is.na(x["cost"])) {
            bounds <- rep.int(NA_real_, 5L)
        }
        else {
            if (is.na(x["all"])) 
                x["all"] <- 0.1
            bounds <- c(NA_real_, rep.int(x["all"], 4L))
        }
        names(bounds) <- table
        bounds[names(x)] <- x
    }
    bounds
}
