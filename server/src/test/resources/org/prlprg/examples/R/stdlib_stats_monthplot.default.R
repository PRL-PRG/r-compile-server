#? stdlib
`monthplot.default` <- function (x, labels = 1L:12L, ylab = deparse1(substitute(x)), 
    times = seq_along(x), phase = (times - 1L)%%length(labels) + 
        1L, base = mean, axes = TRUE, type = c("l", "h"), box = TRUE, 
    add = FALSE, col = par("col"), lty = par("lty"), lwd = par("lwd"), 
    col.base = col, lty.base = lty, lwd.base = lwd, ...) 
{
    dots <- list(...)
    nmdots <- names(dots)
    type <- match.arg(type)
    if (is.null(labels) || (missing(labels) && !missing(phase))) {
        labels <- unique(phase)
        phase <- match(phase, labels)
    }
    f <- length(labels)
    if (!is.null(base)) 
        means <- tapply(x, phase, base)
    if (!add) {
        dev.hold()
        on.exit(dev.flush())
        Call <- match.call()
        Call[[1L]] <- quote(graphics::plot)
        Call$x <- NA
        Call$y <- NA
        Call$axes <- FALSE
        Call$xlim <- if ("xlim" %in% nmdots) 
            dots$xlim
        else c(0.55, f + 0.45)
        Call$ylim <- if ("ylim" %in% nmdots) 
            dots$ylim
        else range(x, na.rm = TRUE)
        Call$xlab <- if ("xlab" %in% nmdots) 
            dots$xlab
        else ""
        if (box) 
            Call$frame.plot <- TRUE
        Call$labels <- Call$times <- Call$phase <- Call$base <- Call$type <- Call$box <- Call$add <- Call$col.base <- Call$lty.base <- Call$lwd.base <- NULL
        eval(Call)
        if (axes) {
            axis(1, at = 1L:f, labels = labels, ...)
            axis(2, ...)
        }
        if (!is.null(base)) {
            segments(1L:f - 0.45, means, 1L:f + 0.45, means, 
                col = col.base, lty = lty.base, lwd = lwd.base)
        }
    }
    y <- as.numeric(times)
    scale <- 1/diff(range(y, na.rm = TRUE)) * 0.9
    for (i in 1L:f) {
        sub <- phase == i
        if (type != "h") 
            lines((y[sub] - min(y)) * scale - 0.45 + i, x[sub], 
                type = type, col = col, lty = lty, lwd = lwd, 
                ...)
        else segments((y[sub] - min(y)) * scale - 0.45 + i, means[i], 
            (y[sub] - min(y)) * scale - 0.45 + i, x[sub], col = col, 
            lty = lty, lwd = lwd, ...)
    }
    invisible()
}
