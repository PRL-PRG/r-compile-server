#? stdlib
`plot.xy` <- function (xy, type, pch = par("pch"), lty = par("lty"), col = par("col"), 
    bg = NA, cex = 1, lwd = par("lwd"), ...) 
{
    if (is.null(type)) 
        type <- "p"
    type <- as.character(type)
    if (length(type) != 1L || !nzchar(type) || is.na(type)) 
        stop(gettextf("invalid plot type"))
    if (nchar(type) > 1L) 
        warning(gettextf("plot type '%s' will be truncated to first character", 
            type))
    t <- substr(type, 1L, 1L)
    if (!isTRUE(t %in% c("l", "o", "b", "c", "s", "S", "h", "p", 
        "n"))) 
        stop(gettextf("invalid plot type '%s'", t))
    invisible(.External.graphics(C_plotXY, xy, t, pch, lty, col, 
        bg, cex, lwd, ...))
}

# Examples
points.default # to see how it calls "plot.xy(xy.coords(x, y), ...)"

