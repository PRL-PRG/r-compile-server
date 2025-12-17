#? stdlib
`order` <- function (..., na.last = TRUE, decreasing = FALSE, method = c("auto", 
    "shell", "radix")) 
{
    z <- list(...)
    decreasing <- as.logical(decreasing)
    if (length(z) == 1L && is.numeric(x <- z[[1L]]) && !is.object(x) && 
        length(x) > 0) {
        if (.Internal(sorted_fpass(x, decreasing, na.last))) 
            return(seq_along(x))
    }
    method <- match.arg(method)
    if (any(vapply(z, is.object, logical(1L)))) {
        z <- lapply(z, function(x) if (is.object(x)) 
            as.vector(xtfrm(x))
        else x)
        return(do.call("order", c(z, list(na.last = na.last, 
            decreasing = decreasing, method = method))))
    }
    if (method == "auto") {
        useRadix <- all(vapply(z, function(x) {
            (is.numeric(x) || is.factor(x) || is.logical(x)) && 
                is.integer(length(x))
        }, logical(1L)))
        method <- if (useRadix) 
            "radix"
        else "shell"
    }
    if (method != "radix" && !is.na(na.last)) {
        if (length(decreasing) > 1L) 
            stop("'decreasing' of length > 1 is only for method = \"radix\"")
        return(.Internal(order(na.last, decreasing, ...)))
    }
    if (method == "radix") {
        decreasing <- rep_len(as.logical(decreasing), length(z))
        return(.Internal(radixsort(na.last, decreasing, FALSE, 
            TRUE, ...)))
    }
    if (any(diff((l.z <- lengths(z)) != 0L))) 
        stop("argument lengths differ")
    na <- vapply(z, is.na, rep.int(NA, l.z[1L]))
    ok <- if (is.matrix(na)) 
        rowSums(na) == 0L
    else !any(na)
    if (all(!ok)) 
        return(integer())
    z[[1L]][!ok] <- NA
    ans <- do.call("order", c(z, list(decreasing = decreasing)))
    ans[ok[ans]]
}
