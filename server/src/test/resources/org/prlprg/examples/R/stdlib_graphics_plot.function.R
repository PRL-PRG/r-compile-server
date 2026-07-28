#? stdlib
`plot.function` <- function (x, y = 0, to = 1, from = y, xlim = NULL, ylab = NULL, 
    ...) 
{
    if (!missing(y) && missing(from)) 
        from <- y
    if (is.null(xlim)) {
        if (is.null(from)) 
            from <- 0
    }
    else {
        if (missing(from)) 
            from <- xlim[1L]
        if (missing(to)) 
            to <- xlim[2L]
    }
    if (is.null(ylab)) {
        sx <- substitute(x)
        ylab <- if (mode(x) != "name") 
            deparse(sx)[1L]
        else {
            xname <- list(...)[["xname"]]
            if (is.null(xname)) 
                xname <- "x"
            paste0(sx, "(", xname, ")")
        }
    }
    curve(expr = x, from = from, to = to, xlim = xlim, ylab = ylab, 
        ...)
}
