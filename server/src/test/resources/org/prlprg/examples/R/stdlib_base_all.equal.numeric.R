#? stdlib
`all.equal.numeric` <- function (target, current, tolerance = sqrt(.Machine$double.eps), 
    scale = NULL, countEQ = FALSE, formatFUN = function(err, 
        what) format(err), ..., check.attributes = TRUE, check.class = TRUE, 
    giveErr = FALSE) 
{
    if (!is.numeric(tolerance)) 
        stop("'tolerance' should be numeric")
    stopifnot(length(tolerance) == 1L)
    if (!is.numeric(scale) && !is.null(scale)) 
        stop("'scale' should be numeric or NULL")
    if (!is.logical(check.attributes)) 
        stop(gettextf("'%s' must be logical", "check.attributes"), 
            domain = NA)
    msg <- if (check.attributes) 
        attr.all.equal(target, current, tolerance = tolerance, 
            scale = scale, ...)
    if (check.class && data.class(target) != data.class(current)) {
        msg <- c(msg, paste0("target is ", data.class(target), 
            ", current is ", data.class(current)))
        return(msg)
    }
    lt <- length(target)
    lc <- length(current)
    cplx <- is.complex(target)
    if (lt != lc) {
        if (!is.null(msg)) 
            msg <- msg[-grep("\\bLengths\\b", msg)]
        msg <- c(msg, paste0(if (cplx) "Complex" else "Numeric", 
            ": lengths (", lt, ", ", lc, ") differ"))
        return(msg)
    }
    target <- as.vector(target)
    current <- as.vector(current)
    out <- is.na(target)
    if (any(out != is.na(current))) {
        msg <- c(msg, paste("'is.NA' value mismatch:", sum(is.na(current)), 
            "in current", sum(out), "in target"))
        return(msg)
    }
    out <- out | target == current
    if (all(out)) 
        return(if (is.null(msg)) TRUE else msg)
    anyO <- any(out)
    sabst0 <- if (countEQ && anyO) 
        mean(abs(target[out]))
    else 0
    if (anyO) {
        keep <- which(!out)
        target <- target[keep]
        current <- current[keep]
        if (!is.null(scale) && length(scale) > 1L) 
            scale <- rep_len(scale, length(out))[keep]
    }
    N <- length(target)
    if (is.integer(target) && is.integer(current)) 
        target <- as.double(target)
    what <- if (is.null(scale)) {
        scale <- (sabst0 + sum(abs(target)/N))
        if (is.finite(scale) && scale > tolerance) {
            "relative"
        }
        else {
            scale <- 1
            "absolute"
        }
    }
    else {
        stopifnot(all(scale > 0))
        if (all(abs(scale - 1) < 1e-07)) 
            "absolute"
        else "scaled"
    }
    xy <- sum(abs(target - current)/(N * scale))
    if (cplx) 
        what <- paste(what, "Mod")
    if (is.na(xy) || xy > tolerance) 
        msg <- c(msg, paste("Mean", what, "difference:", formatFUN(xy, 
            what)))
    r <- if (is.null(msg)) 
        TRUE
    else msg
    if (giveErr) 
        structure(r, err = xy, what = what)
    else r
}
