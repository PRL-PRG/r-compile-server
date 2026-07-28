#? stdlib
`regmatches<-` <- function (x, m, invert = FALSE, value) 
{
    if (!length(x)) 
        return(x)
    ili <- is.list(m)
    if (!ili && invert && any(m == -1L)) {
        y <- rep_len(list(character()), length(x))
        y[m > -1L] <- as.list(regmatches(x, m, FALSE))
    }
    else {
        y <- regmatches(x, m, !invert)
    }
    if (!ili && !invert) {
        value <- as.character(value)
        if (anyNA(value)) 
            stop("missing replacement values are not allowed")
        pos <- which(lengths(y) == 2L)
        np <- length(pos)
        nv <- length(value)
        if (np != nv) {
            if (!nv) 
                stop("must have replacement values for matches")
            value <- rep_len(value, np)
        }
        y <- y[pos]
        x[pos] <- paste0(sapply(y, `[`, 1L), value, sapply(y, 
            `[`, 2L))
        return(x)
    }
    value <- lapply(value, as.character)
    if (anyNA(value)) 
        stop("missing replacement values are not allowed")
    if (!length(value)) 
        stop("value does not provide any replacement values")
    value <- rep_len(value, length(x))
    y <- if (invert) {
        Map(function(u, v) {
            nu <- length(u)
            nv <- length(v)
            if (nv != (nu + 1L)) {
                if (!nv) 
                  stop("must have replacements for non-matches")
                v <- rep_len(v, nu + 1L)
            }
            paste0(v, c(u, ""), collapse = "")
        }, y, value, USE.NAMES = FALSE)
    }
    else {
        Map(function(u, v) {
            nu <- length(u)
            nv <- length(v)
            if (nv != (nu - 1L)) {
                if (!nv) 
                  stop("must have replacements for matches")
                v <- rep_len(v, nu - 1L)
            }
            paste0(u, c(v, ""), collapse = "")
        }, y, value, USE.NAMES = FALSE)
    }
    y <- unlist(y)
    names(y) <- names(x)
    y
}
