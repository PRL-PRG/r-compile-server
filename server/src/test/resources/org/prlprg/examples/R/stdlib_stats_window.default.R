#? stdlib
`window.default` <- function (x, start = NULL, end = NULL, frequency = NULL, deltat = NULL, 
    extend = FALSE, ts.eps = getOption("ts.eps"), ...) 
{
    x <- hasTsp(x)
    xtsp <- tsp(x)
    xfreq <- xtsp[3L]
    xtime <- time(x)
    if (!is.null(frequency) && !is.null(deltat) && abs(frequency * 
        deltat - 1) > ts.eps) 
        stop("'frequency' and 'deltat' are both not NULL and are inconsistent")
    noFreq <- is.null(frequency) && is.null(deltat)
    yfreq <- if (noFreq) 
        xfreq
    else if (is.null(deltat)) 
        frequency
    else if (is.null(frequency)) 
        1/deltat
    eps_ <- ts.eps/xfreq
    thin <- round(xfreq/yfreq)
    if (yfreq > 0 && abs(xfreq/yfreq - thin) < ts.eps) {
        yfreq <- xfreq/thin
    }
    else if (!noFreq) {
        thin <- 1
        yfreq <- xfreq
        warning("'frequency' not changed")
    }
    start <- if (is.null(start)) 
        xtsp[1L]
    else switch(length(start), start, start[1L] + (start[2L] - 
        1)/xfreq, stop("bad value for 'start'"))
    if (start < xtsp[1L] - eps_ && !extend) {
        start <- xtsp[1L]
        warning("'start' value not changed")
    }
    end <- if (is.null(end)) 
        xtsp[2L]
    else switch(length(end), end, end[1L] + (end[2L] - 1)/xfreq, 
        stop("bad value for 'end'"))
    if (end > xtsp[2L] + eps_ && !extend) {
        end <- xtsp[2L]
        warning("'end' value not changed")
    }
    if (start > end + eps_) 
        stop("'start' cannot be after 'end'")
    if (!extend) {
        if (all(abs(start - xtime) > eps_)) 
            start <- xtime[(xtime > start) & ((start + 1/xfreq) > 
                xtime)]
        if (all(abs(end - xtime) > eps_)) 
            end <- xtime[(xtime < end) & ((end - 1/xfreq) < xtime)]
        i <- seq.int(trunc((start - xtsp[1L]) * xfreq + 1.5), 
            trunc((end - xtsp[1L]) * xfreq + 1.5), by = thin)
        y <- if (is.matrix(x)) 
            x[i, , drop = FALSE]
        else x[i]
        ystart <- xtime[i[1L]]
        yend <- xtime[i[length(i)]]
        attr(y, "tsp") <- c(ystart, yend, yfreq)
    }
    else {
        stoff <- ceiling((start - xtsp[1L]) * xfreq - ts.eps)
        enoff <- floor((end - xtsp[2L]) * xfreq + ts.eps)
        ystart <- stoff/xfreq + xtsp[1L]
        yend <- enoff/xfreq + xtsp[2L]
        if (ystart > yend && (ystart - yend) * xfreq < ts.eps) 
            yend <- ystart
        nold <- round(xfreq * (xtsp[2L] - xtsp[1L])) + 1
        i <- if (start > xtsp[2L] + eps_ || end < xtsp[1L] - 
            eps_) 
            rep(nold + 1, floor(1 + (end - start) * xfreq + ts.eps))
        else {
            i0 <- 1 + max(0, stoff)
            i1 <- nold + min(0, enoff)
            c(rep.int(nold + 1, max(0, -stoff)), if (i0 <= i1) i0:i1, 
                rep.int(nold + 1, max(0, enoff)))
        }
        y <- if (is.matrix(x)) 
            rbind(x, NA)[i, , drop = FALSE]
        else c(x, NA)[i]
        attr(y, "tsp") <- c(ystart, yend, xfreq)
        if (yfreq != xfreq) 
            y <- Recall(y, frequency = yfreq)
    }
    y
}
