#? stdlib
`tapply` <- function (X, INDEX, FUN = NULL, ..., default = NA, simplify = TRUE) 
{
    FUN <- if (!is.null(FUN)) 
        match.fun(FUN)
    if (inherits(INDEX, "formula")) {
        if (is.data.frame(X)) 
            INDEX <- .formula2varlist(INDEX, X)
        else stop("'X' must be a data frame when 'INDEX' is a formula")
    }
    if (!is.list(INDEX)) 
        INDEX <- list(INDEX)
    INDEX <- lapply(INDEX, as.factor)
    nI <- length(INDEX)
    if (!nI) 
        stop("'INDEX' is of length zero")
    if (!is.object(X) && !all(lengths(INDEX) == length(X))) 
        stop("arguments must have same length")
    namelist <- lapply(INDEX, levels)
    extent <- lengths(namelist, use.names = FALSE)
    cumextent <- cumprod(extent)
    if (cumextent[nI] > .Machine$integer.max) 
        stop("total number of levels >= 2^31")
    storage.mode(cumextent) <- "integer"
    ngroup <- cumextent[nI]
    group <- as.integer(INDEX[[1L]])
    if (nI > 1L) 
        for (i in 2L:nI) group <- group + cumextent[i - 1L] * 
            (as.integer(INDEX[[i]]) - 1L)
    if (is.null(FUN)) 
        return(group)
    levels(group) <- as.character(seq_len(ngroup))
    class(group) <- "factor"
    ans <- split(X, group)
    names(ans) <- NULL
    index <- as.logical(lengths(ans))
    ans <- lapply(X = ans[index], FUN = FUN, ...)
    ansmat <- array(if (simplify && all(lengths(ans) == 1L)) {
        ans <- unlist(ans, recursive = FALSE, use.names = FALSE)
        if (is.na(default) && is.atomic(ans)) 
            vector(typeof(ans))
        else default
    }
    else vector("list", prod(extent)), dim = extent, dimnames = namelist)
    if (length(ans)) {
        ansmat[index] <- ans
    }
    ansmat
}

# Examples
require(stats)
groups <- as.factor(rbinom(32, n = 5, prob = 0.4))
tapply(groups, groups, length) #- is almost the same as
table(groups)

## contingency table from data.frame : array with named dimnames
tapply(warpbreaks$breaks, warpbreaks[,-1], sum)
tapply(warpbreaks$breaks, warpbreaks[, 3, drop = FALSE], sum)

n <- 17; fac <- factor(rep_len(1:3, n), levels = 1:5)
table(fac)
tapply(1:n, fac, sum)
tapply(1:n, fac, sum, default = 0) # maybe more desirable
tapply(1:n, fac, sum, simplify = FALSE)
tapply(1:n, fac, range)
tapply(1:n, fac, quantile)
tapply(1:n, fac, length) ## NA's
tapply(1:n, fac, length, default = 0) # == table(fac)
stopifnot(all.equal(
  unname(unclass(table(fac))),
  unname(        tapply(1:n, fac, length, default = 0))))
## example of ... argument: find quarterly means
tapply(presidents, cycle(presidents), mean, na.rm = TRUE)

ind <- list(c(1, 2, 2), c("A", "A", "B"))
table(ind)
tapply(1:3, ind) #-> the split vector
tapply(1:3, ind, sum)

## Some assertions (not held by all patch propsals):
nq <- names(quantile(1:5))
stopifnot(
  identical(tapply(1:3, ind), c(1L, 2L, 4L)),
  identical(tapply(1:3, ind, sum),
            matrix(c(1L, 2L, NA, 3L), 2, dimnames = list(c("1", "2"), c("A", "B")))),
  identical(tapply(1:n, fac, quantile)[-1],
            array(list(`2` = structure(c(2, 5.75, 9.5, 13.25, 17), names = nq),
                 `3` = structure(c(3, 6, 9, 12, 15), names = nq),
                 `4` = NULL, `5` = NULL), dim=4, dimnames=list(as.character(2:5)))))

