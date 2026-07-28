#? stdlib
`sort.int` <- function (x, partial = NULL, na.last = NA, decreasing = FALSE, 
    method = c("auto", "shell", "quick", "radix"), index.return = FALSE) 
{
    decreasing <- as.logical(decreasing)
    if (is.null(partial) && !index.return && is.numeric(x)) {
        if (.Internal(sorted_fpass(x, decreasing, na.last))) {
            attr <- attributes(x)
            if (!is.null(attr) && !identical(names(attr), "names")) 
                attributes(x) <- list(names = names(x))
            return(x)
        }
    }
    method <- match.arg(method)
    if (method == "auto" && is.null(partial) && (is.numeric(x) || 
        is.factor(x) || is.logical(x)) && is.integer(length(x))) 
        method <- "radix"
    if (method == "radix") {
        if (!is.null(partial)) {
            stop("'partial' sorting not supported by radix method")
        }
        if (index.return && is.na(na.last)) {
            x <- x[!is.na(x)]
            na.last <- TRUE
        }
        o <- order(x, na.last = na.last, decreasing = decreasing, 
            method = "radix")
        y <- x[o]
        y <- .doSortWrap(y, decreasing, na.last)
        return(if (index.return) list(x = y, ix = o) else y)
    }
    else if (method == "auto" || !is.numeric(x)) 
        method <- "shell"
    if (isfact <- is.factor(x)) {
        if (index.return) 
            stop("'index.return' only for non-factors")
        lev <- levels(x)
        nlev <- nlevels(x)
        isord <- is.ordered(x)
        x <- c(x)
    }
    else if (is.null(x)) 
        return(x)
    else if (!is.atomic(x)) 
        stop("'x' must be atomic")
    if (has.na <- any(ina <- is.na(x))) {
        nas <- x[ina]
        x <- x[!ina]
    }
    if (index.return && !is.na(na.last)) 
        stop("'index.return' only for 'na.last = NA'")
    if (!is.null(partial)) {
        if (index.return || decreasing || isfact || method != 
            "shell") 
            stop("unsupported options for partial sorting")
        if (!all(is.finite(partial))) 
            stop("non-finite 'partial'")
        if (has.na && !is.na(na.last)) 
            partial <- if (na.last) 
                partial[partial <= length(x)]
            else {
                k <- sum(ina)
                partial[partial > k] - k
            }
        y <- if (length(partial) <= 10L) {
            partial <- .Internal(qsort(partial, FALSE))
            .Internal(psort(x, partial))
        }
        else if (is.double(x)) 
            .Internal(qsort(x, FALSE))
        else .Internal(sort(x, FALSE))
    }
    else {
        nms <- names(x)
        switch(method, quick = {
            if (!is.null(nms)) {
                if (decreasing) x <- -x
                y <- .Internal(qsort(x, TRUE))
                if (decreasing) y$x <- -y$x
                names(y$x) <- nms[y$ix]
                if (!index.return) y <- y$x
            } else {
                if (decreasing) x <- -x
                y <- .Internal(qsort(x, index.return))
                if (decreasing) if (index.return) y$x <- -y$x else y <- -y
            }
        }, shell = {
            if (index.return || !is.null(nms)) {
                o <- sort.list(x, decreasing = decreasing)
                y <- if (index.return) list(x = x[o], ix = o) else x[o]
            } else y <- .Internal(sort(x, decreasing))
        })
    }
    if (!is.na(na.last) && has.na) 
        y <- if (!na.last) 
            c(nas, y)
        else c(y, nas)
    if (isfact) 
        y <- (if (isord) 
            ordered
        else factor)(y, levels = seq_len(nlev), labels = lev)
    if (is.null(partial)) 
        .doSortWrap(y, decreasing, na.last)
    else y
}
