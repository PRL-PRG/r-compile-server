#? stdlib
`grouping` <- function (...) 
{
    z <- list(...)
    if (any(vapply(z, is.object, logical(1L)))) {
        z <- lapply(z, function(x) if (is.object(x)) 
            as.vector(xtfrm(x))
        else x)
        return(do.call("grouping", z))
    }
    nalast <- TRUE
    decreasing <- rep_len(FALSE, length(z))
    group <- TRUE
    sortStr <- FALSE
    return(.Internal(radixsort(nalast, decreasing, group, sortStr, 
        ...)))
}

# Examples
(ii <- grouping(x <- c(1, 1, 3:1, 1:4, 3), y <- c(9, 9:1), z <- c(2, 1:9)))
## 6  5  2  1  7  4 10  8  3  9
rbind(x, y, z)[, ii]

