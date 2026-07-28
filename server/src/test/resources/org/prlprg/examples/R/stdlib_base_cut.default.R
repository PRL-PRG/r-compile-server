#? stdlib
`cut.default` <- function (x, breaks, labels = NULL, include.lowest = FALSE, right = TRUE, 
    dig.lab = 3L, ordered_result = FALSE, ...) 
{
    if (!is.numeric(x)) 
        stop("'x' must be numeric")
    if (length(breaks) == 1L) {
        if (is.na(breaks) || breaks < 2L) 
            stop("invalid number of intervals")
        nb <- as.integer(breaks + 1)
        dx <- diff(rx <- range(x, na.rm = TRUE))
        if (dx == 0) {
            dx <- if (rx[1L] != 0) 
                abs(rx[1L])
            else 1
            breaks <- seq.int(rx[1L] - dx/1000, rx[2L] + dx/1000, 
                length.out = nb)
        }
        else {
            breaks <- seq.int(rx[1L], rx[2L], length.out = nb)
            breaks[c(1L, nb)] <- c(rx[1L] - dx/1000, rx[2L] + 
                dx/1000)
        }
    }
    else nb <- length(breaks <- sort.int(as.double(breaks)))
    if (anyDuplicated(breaks)) 
        stop("'breaks' are not unique")
    codes.only <- FALSE
    if (is.null(labels)) {
        for (dig in dig.lab:max(12L, dig.lab)) {
            ch.br <- formatC(0 + breaks, digits = dig, width = 1L)
            if (ok <- all(ch.br[-1L] != ch.br[-nb])) 
                break
        }
        labels <- if (ok) 
            paste0(if (right) 
                "("
            else "[", ch.br[-nb], ",", ch.br[-1L], if (right) 
                "]"
            else ")")
        else paste0("Range_", seq_len(nb - 1L))
        if (ok && include.lowest) {
            if (right) 
                substr(labels[1L], 1L, 1L) <- "["
            else substring(labels[nb - 1L], nchar(labels[nb - 
                1L], "c")) <- "]"
        }
    }
    else if (is.logical(labels) && !labels) 
        codes.only <- TRUE
    else if (length(labels) != nb - 1L) 
        stop("number of intervals and length of 'labels' differ")
    code <- .bincode(x, breaks, right, include.lowest)
    if (codes.only) 
        code
    else factor(code, seq_along(labels), labels, ordered = ordered_result)
}
