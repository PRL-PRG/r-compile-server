#? stdlib
`merge.dendrogram` <- function (x, y, ..., height, adjust = c("auto", "add.max", "none")) 
{
    stopifnot(inherits(x, "dendrogram"), inherits(y, "dendrogram"))
    if ((adjust <- match.arg(adjust)) == "auto") 
        adjust <- if (min(unlist(x)) == 1 && min(unlist(y)) == 
            1) 
            "add.max"
        else "none"
    if (adjust == "add.max") {
        add.ifleaf <- function(i, add) if (is.leaf(i)) 
            i + add
        else i
        add <- max(unlist(x))
        y <- dendrapply(y, add.ifleaf, add = add)
    }
    r <- list(x, y)
    if (length(xtr <- list(...))) {
        if (!all(is.d <- vapply(xtr, inherits, NA, what = "dendrogram"))) {
            xpr <- substitute(c(...))
            nms <- sapply(xpr[-1][!is.d], deparse, nlines = 1L)
            msg <- ngettext(length(nms), "extra argument %s is not of class \"%s\"", 
                "extra arguments %s are not of class \"%s\"")
            stop(sprintf(msg, paste(nms, collapse = ", "), "dendrogram"), 
                domain = NA)
        }
        if (adjust == "add.max") {
            add <- max(add, unlist(y))
            for (i in seq_along(xtr)) {
                if (i > 1L) 
                  add <- max(add, unlist(xtr[i - 1L]))
                xtr[[i]] <- dendrapply(xtr[[i]], add.ifleaf, 
                  add = add)
            }
        }
        r <- c(r, xtr)
    }
    attr(r, "members") <- sum(vapply(r, attr, 0L, which = "members"))
    h.max <- max(vapply(r, attr, 0, which = "height"))
    if (missing(height) || is.null(height)) 
        height <- 1.1 * h.max
    else if (height < h.max) {
        msg <- gettextf("'height' must be at least %g, the maximal height of its components", 
            h.max)
        stop(msg, domain = NA)
    }
    attr(r, "height") <- height
    class(r) <- "dendrogram"
    midcache.dendrogram(r, quiet = TRUE)
}
