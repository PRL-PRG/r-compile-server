#? stdlib
`seq.default` <- function (from = 1, to = 1, by = ((to - from)/(length.out - 1)), 
    length.out = NULL, along.with = NULL, ...) 
{
    is.logint <- function(.) (is.integer(.) || is.logical(.)) && 
        !is.object(.)
    if ((One <- nargs() == 1L) && !missing(from)) {
        lf <- length(from)
        return(if (mode(from) == "numeric" && lf == 1L) {
            if (!is.finite(from)) stop("'from' must be a finite number")
            1L:from
        } else if (lf) 1L:lf else integer())
    }
    if (!missing(along.with)) {
        length.out <- length(along.with)
        if (One) 
            return(if (length.out) seq_len(length.out) else integer())
        intn1 <- is.integer(length.out)
    }
    else if (!missing(length.out)) {
        len <- length(length.out)
        if (!len) 
            stop("argument 'length.out' must be of length 1")
        if (len > 1L) {
            warning("first element used of 'length.out' argument")
            length.out <- length.out[1L]
        }
        if (!(intn1 <- is.logint(length.out))) 
            length.out <- as.numeric(ceiling(length.out))
    }
    chkDots(...)
    if (!missing(from) && length(from) != 1L) 
        stop("'from' must be of length 1")
    if (!missing(to) && length(to) != 1L) 
        stop("'to' must be of length 1")
    if (!missing(from) && !is.finite(if (is.character(from)) from <- as.numeric(from) else from)) 
        stop("'from' must be a finite number")
    if (!missing(to) && !is.finite(if (is.character(to)) to <- as.numeric(to) else to)) 
        stop("'to' must be a finite number")
    if (is.null(length.out)) 
        if (missing(by)) 
            from:to
        else {
            int <- is.logint(from) && is.logint(to)
            del <- to - if (int) 
                as.double(from)
            else from
            if (del == 0 && to == 0) 
                return(to)
            if (length(by) != 1L) 
                stop("'by' must be of length 1")
            if (!is.logint(by)) 
                int <- FALSE
            else if (!int) 
                storage.mode(by) <- "double"
            n <- if (finite.del <- is.finite(del)) 
                del/by
            else to/by - from/by
            if (!is.finite(n)) {
                if (!is.na(by) && by == 0 && del == 0) 
                  return(from)
                stop("invalid '(to - from)/by'")
            }
            if (n < 0L) 
                stop("wrong sign in 'by' argument")
            if (n > .Machine$integer.max) 
                stop("'by' argument is much too small")
            if (finite.del && abs(del)/max(abs(to), abs(from)) < 
                100 * .Machine$double.eps) 
                return(from)
            if (int) {
                n <- as.integer(n)
                if (n >= 2L) 
                  cumsum(rep.int(c(from, by), c(1L, n)))
                else from + (0L:n) * by
            }
            else {
                n <- as.integer(n + 1e-10)
                x <- if (finite.del) 
                  from + (0L:n) * by
                else (from/4 + (0L:n) * (by/4)) * 4
                if (by > 0) 
                  pmin(x, to)
                else pmax(x, to)
            }
        }
    else if (!is.finite(length.out) || length.out < 0L) 
        stop("'length.out' must be a non-negative number")
    else if (length.out == 0L) 
        integer()
    else if (One) 
        seq_len(length.out)
    else if (missing(by)) {
        if (missing(to)) {
            to <- from + (length.out - 1)
            intdel <- intn1 && is.logint(from) && to <= .Machine$integer.max
            if (intdel) 
                storage.mode(to) <- "integer"
        }
        else intdel <- is.logint(to)
        if (missing(from)) {
            from <- to - (length.out - 1)
            if (intdel) {
                intdel <- intn1 && from >= -.Machine$integer.max
                if (intdel) 
                  storage.mode(from) <- "integer"
            }
        }
        else if (intdel) 
            intdel <- is.logint(from)
        if (length.out > 2L) 
            if (from == to) 
                rep.int(from, length.out)
            else {
                n1 <- length.out - 1L
                if (intdel && intn1 && from%%n1 == to%%n1) {
                  by <- to%/%n1 - from%/%n1
                  cumsum(rep.int(c(from, by), c(1L, n1)))
                }
                else {
                  if (intdel) 
                    storage.mode(from) <- "double"
                  del <- to - from
                  if (is.finite(del)) {
                    as.vector(c(from, from + seq_len(length.out - 
                      2L) * (del/n1), to))
                  }
                  else {
                    from <- from/4
                    to <- to/4
                    as.vector(c(from, from + seq_len(length.out - 
                      2L) * ((to - from)/n1), to)) * 4
                  }
                }
            }
        else as.vector(c(from, to))[seq_len(length.out)]
    }
    else if (missing(to)) {
        int <- (intby <- is.logint(by)) && is.logint(from) && 
            (!(nby <- length(by)) || (naby <- is.na(by)) || ((to <- from + 
                (length.out - 1) * by) <= .Machine$integer.max && 
                to >= -.Machine$integer.max))
        if (int && length.out > 2L && nby == 1L && !naby) 
            cumsum(rep.int(c(from, by), c(1L, length.out - 1L)))
        else {
            if (intby && !(int || is.object(from))) 
                storage.mode(by) <- "double"
            from + (0L:(length.out - 1L)) * by
        }
    }
    else if (missing(from)) {
        int <- (intby <- is.logint(by)) && is.logint(to) && (!(nby <- length(by)) || 
            (naby <- is.na(by)) || ((from <- to - (length.out - 
            1) * by) >= -.Machine$integer.max && from <= .Machine$integer.max))
        if (int && length.out > 2L && nby == 1L && !naby) 
            cumsum(rep.int(c(as.integer(from), by), c(1L, length.out - 
                1L)))
        else {
            if (intby && !(int || is.object(to))) 
                storage.mode(by) <- "double"
            to - ((length.out - 1L):0L) * by
        }
    }
    else stop("too many arguments")
}
