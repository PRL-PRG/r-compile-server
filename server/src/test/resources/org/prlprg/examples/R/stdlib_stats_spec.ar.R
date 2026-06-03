#? stdlib
`spec.ar` <- function (x, n.freq, order = NULL, plot = TRUE, na.action = na.fail, 
    method = "yule-walker", ...) 
{
    if (!is.list(x)) {
        series <- deparse1(substitute(x))
        x <- na.action(as.ts(x))
        xfreq <- frequency(x)
        nser <- NCOL(x)
        x <- ar(x, is.null(order), order, na.action = na.action, 
            method = method)
    }
    else {
        cn <- match(c("ar", "var.pred", "order"), names(x))
        if (anyNA(cn)) 
            stop("'x' must be a time series or an ar() fit")
        series <- x$series
        xfreq <- x$frequency
        if (is.array(x$ar)) 
            nser <- dim(x$ar)[2L]
        else nser <- 1
    }
    order <- x$order
    if (missing(n.freq)) 
        n.freq <- 500
    freq <- seq.int(0, 0.5, length.out = n.freq)
    if (nser == 1) {
        coh <- phase <- NULL
        var.p <- as.vector(x$var.pred)
        spec <- if (order >= 1) {
            cs <- outer(freq, 1L:order, function(x, y) cos(2 * 
                pi * x * y)) %*% x$ar
            sn <- outer(freq, 1L:order, function(x, y) sin(2 * 
                pi * x * y)) %*% x$ar
            var.p/(xfreq * ((1 - cs)^2 + sn^2))
        }
        else rep.int(var.p/xfreq, length(freq))
    }
    else .NotYetImplemented()
    spg.out <- list(freq = freq * xfreq, spec = spec, coh = coh, 
        phase = phase, n.used = nrow(x), series = series, method = paste0("AR (", 
            order, ") spectrum "))
    class(spg.out) <- "spec"
    if (plot) {
        plot(spg.out, ci = 0, ...)
        invisible(spg.out)
    }
    else spg.out
}

# Examples
require(graphics)

spec.ar(lh)

spec.ar(ldeaths)
spec.ar(ldeaths, method = "burg")

spec.ar(log(lynx))
spec.ar(log(lynx), method = "burg", add = TRUE, col = "purple")
spec.ar(log(lynx), method = "mle", add = TRUE, col = "forest green")
spec.ar(log(lynx), method = "ols", add = TRUE, col = "blue")

