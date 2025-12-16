#? stdlib
`aggregate.data.frame` <- function (x, by, FUN, ..., simplify = TRUE, drop = TRUE) 
{
    if (!is.data.frame(x)) 
        x <- as.data.frame(x)
    FUN <- match.fun(FUN)
    if (inherits(by, "formula")) {
        return(aggregate.formula(x = by, data = x, FUN = FUN, 
            ...))
    }
    if (NROW(x) == 0L) 
        stop("no rows to aggregate")
    if (NCOL(x) == 0L) {
        x <- data.frame(x = rep(1, NROW(x)))
        return(aggregate.data.frame(x, by, function(x) 0L)[seq_along(by)])
    }
    if (!is.list(by)) 
        stop("'by' must be a list")
    if (is.null(names(by)) && length(by)) 
        names(by) <- paste0("Group.", seq_along(by))
    else {
        nam <- names(by)
        ind <- which(!nzchar(nam))
        names(by)[ind] <- paste0("Group.", ind)
    }
    if (any(lengths(by) != NROW(x))) 
        stop("arguments must have same length")
    y <- as.data.frame(by, stringsAsFactors = FALSE)
    keep <- complete.cases(by)
    y <- y[keep, , drop = FALSE]
    x <- x[keep, , drop = FALSE]
    nrx <- NROW(x)
    ident <- function(x) {
        y <- as.factor(x)
        l <- length(levels(y))
        s <- as.character(seq_len(l))
        n <- nchar(s)
        levels(y) <- paste0(strrep("0", n[l] - n), s)
        y
    }
    grp <- lapply(y, ident)
    multi.y <- !drop && ncol(y)
    if (multi.y) {
        lev <- lapply(grp, levels)
        y <- as.list(y)
        for (i in seq_along(y)) {
            z <- y[[i]][match(lev[[i]], grp[[i]])]
            if (is.factor(z) && any(keep <- is.na(z))) 
                z[keep] <- levels(z)[keep]
            y[[i]] <- z
        }
        eGrid <- function(L) expand.grid(L, KEEP.OUT.ATTRS = FALSE, 
            stringsAsFactors = FALSE)
        y <- eGrid(y)
    }
    grp <- if (ncol(y)) {
        names(grp) <- NULL
        do.call(paste, c(rev(grp), list(sep = ".")))
    }
    else integer(nrx)
    if (multi.y) {
        lev <- as.list(eGrid(lev))
        names(lev) <- NULL
        lev <- do.call(paste, c(rev(lev), list(sep = ".")))
    }
    else y <- y[match(sort(unique(grp)), grp, 0L), , drop = FALSE]
    z <- lapply(x, function(e) {
        ans <- lapply(X = unname(split(e, grp)), FUN = FUN, ...)
        if (simplify && length(len <- unique(lengths(ans))) == 
            1L) {
            if (len == 1L) {
                cl <- lapply(ans, oldClass)
                cl1 <- cl[[1L]]
                ans <- if (!is.null(cl1) && all(vapply(cl, identical, 
                  NA, y = cl1))) 
                  do.call(c, ans)
                else unlist(ans, recursive = FALSE, use.names = FALSE)
            }
            else if (len > 1L) 
                ans <- matrix(unlist(ans, recursive = FALSE, 
                  use.names = FALSE), ncol = len, byrow = TRUE, 
                  dimnames = if (!is.null(nms <- names(ans[[1L]]))) 
                    list(NULL, nms))
        }
        ans
    })
    len <- length(y)
    if (multi.y) {
        keep <- match(lev, sort(unique(grp)))
        for (i in seq_along(z)) y[[len + i]] <- if (is.matrix(z[[i]])) 
            z[[i]][keep, , drop = FALSE]
        else z[[i]][keep]
    }
    else for (i in seq_along(z)) y[[len + i]] <- z[[i]]
    names(y) <- c(names(by), names(x))
    row.names(y) <- NULL
    y
}
