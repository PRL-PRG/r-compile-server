#? stdlib
`interaction.plot` <- function (x.factor, trace.factor, response, fun = mean, type = c("l", 
    "p", "b", "o", "c"), legend = TRUE, trace.label = deparse1(substitute(trace.factor)), 
    fixed = FALSE, xlab = deparse1(substitute(x.factor)), ylab = ylabel, 
    ylim = range(cells, na.rm = TRUE), lty = nc:1, col = 1, pch = c(1L:9, 
        0, letters), xpd = NULL, leg.bg = par("bg"), leg.bty = "n", 
    xtick = FALSE, xaxt = par("xaxt"), axes = TRUE, ...) 
{
    ylabel <- paste(deparse1(substitute(fun)), "of ", deparse1(substitute(response)))
    type <- match.arg(type)
    cells <- tapply(response, list(x.factor, trace.factor), fun)
    nr <- nrow(cells)
    nc <- ncol(cells)
    xvals <- 1L:nr
    if (is.ordered(x.factor)) {
        wn <- getOption("warn")
        options(warn = -1)
        xnm <- as.numeric(levels(x.factor))
        options(warn = wn)
        if (!anyNA(xnm)) 
            xvals <- xnm
    }
    xlabs <- rownames(cells)
    ylabs <- colnames(cells)
    nch <- max(sapply(ylabs, nchar, type = "width"))
    if (is.null(xlabs)) 
        xlabs <- as.character(xvals)
    if (is.null(ylabs)) 
        ylabs <- as.character(1L:nc)
    xlim <- range(xvals)
    xleg <- xlim[2L] + 0.05 * diff(xlim)
    xlim <- xlim + c(-0.2/nr, if (legend) 0.2 + 0.02 * nch else 0.2/nr) * 
        diff(xlim)
    dev.hold()
    on.exit(dev.flush())
    matplot(xvals, cells, ..., type = type, xlim = xlim, ylim = ylim, 
        xlab = xlab, ylab = ylab, axes = axes, xaxt = "n", col = col, 
        lty = lty, pch = pch)
    if (axes && xaxt != "n") {
        axisInt <- function(main, sub, lwd, bg, log, asp, ...) axis(...)
        axisInt(side = 1, at = xvals, labels = xlabs, tick = xtick, 
            xaxt = xaxt, ...)
    }
    if (legend) {
        yrng <- diff(ylim)
        yleg <- ylim[2L] - 0.1 * yrng
        if (!is.null(xpd) || {
            xpd. <- par("xpd")
            !is.na(xpd.) && !xpd. && (xpd <- TRUE)
        }) {
            op <- par(xpd = xpd)
            on.exit(par(op), add = TRUE)
        }
        text(xleg, ylim[2L] - 0.05 * yrng, paste("  ", trace.label), 
            adj = 0)
        if (!fixed) {
            ord <- sort.list(cells[nr, ], decreasing = TRUE)
            ylabs <- ylabs[ord]
            lty <- lty[1 + (ord - 1)%%length(lty)]
            col <- col[1 + (ord - 1)%%length(col)]
            pch <- pch[ord]
        }
        legend(xleg, yleg, legend = ylabs, col = col, pch = if (type %in% 
            c("p", "b")) 
            pch, lty = if (type %in% c("l", "b")) 
            lty, bty = leg.bty, bg = leg.bg)
    }
    invisible()
}

# Examples
require(graphics)

with(ToothGrowth, {
interaction.plot(dose, supp, len, fixed = TRUE)
dose <- ordered(dose)
interaction.plot(dose, supp, len, fixed = TRUE,
                 col = 2:3, leg.bty = "o", xtick = TRUE)
interaction.plot(dose, supp, len, fixed = TRUE, col = 2:3, type = "p")
})

with(OrchardSprays, {
  interaction.plot(treatment, rowpos, decrease)
  interaction.plot(rowpos, treatment, decrease, cex.axis = 0.8)
  ## order the rows by their mean effect
  rowpos <- factor(rowpos,
                   levels = sort.list(tapply(decrease, rowpos, mean)))
  interaction.plot(rowpos, treatment, decrease, col = 2:9, lty = 1)
})





















