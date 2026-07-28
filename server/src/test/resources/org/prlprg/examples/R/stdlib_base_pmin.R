#? stdlib
`pmin` <- function (..., na.rm = FALSE) 
{
    elts <- list(...)
    if (length(elts) == 0L) 
        stop("no arguments")
    if (all(vapply(elts, function(x) is.null(x) || (is.atomic(x) && 
        !is.object(x)), NA))) {
        mmm <- .Internal(pmin(na.rm, ...))
        mostattributes(mmm) <- attributes(elts[[1L]])
    }
    else {
        mmm <- elts[[1L]]
        has.na <- FALSE
        as <- methods::as
        asL <- function(x) if (isS4(x)) 
            as(x, "logical")
        else x
        for (each in elts[-1L]) {
            l1 <- length(each)
            l2 <- length(mmm)
            if (l2 && (l2 < l1 || !l1)) {
                if (l1%%l2) 
                  warning("an argument will be fractionally recycled")
                mmm <- rep(mmm, length.out = l1)
            }
            else if (l1 && (l1 < l2 || !l2)) {
                if (l2%%l1) 
                  warning("an argument will be fractionally recycled")
                each <- rep(each, length.out = l2)
            }
            na.m <- is.na(mmm)
            na.e <- is.na(each)
            if (has.na || (has.na <- any(na.m) || any(na.e))) {
                if (any(na.m <- asL(na.m))) 
                  mmm[na.m] <- each[na.m]
                if (any(na.e <- asL(na.e))) 
                  each[na.e] <- mmm[na.e]
            }
            nS4 <- !isS4(mmm)
            if (isS4(change <- mmm > each) && (nS4 || !isS4(each))) 
                change <- as(change, "logical")
            change <- change & !is.na(change)
            mmm[change] <- each[change]
            if (has.na && !na.rm) 
                mmm[na.m | na.e] <- NA
            if (nS4) 
                mostattributes(mmm) <- attributes(elts[[1L]])
        }
    }
    mmm
}
