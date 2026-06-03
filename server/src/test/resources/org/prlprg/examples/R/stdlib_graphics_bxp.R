#? stdlib
`bxp` <- function (z, notch = FALSE, width = NULL, varwidth = FALSE, outline = TRUE, 
    notch.frac = 0.5, log = "", border = par("fg"), pars = NULL, 
    frame.plot = axes, horizontal = FALSE, ann = TRUE, add = FALSE, 
    at = NULL, show.names = NULL, ...) 
{
    pars <- as.list(pars)
    if (...length()) {
        nmsA <- names(args <- list(...))
        if (anyDuplicated(nmsA)) {
            iD <- duplicated(nmsA)
            warning(sprintf(ngettext(sum(iD), "Duplicated argument %s is disregarded", 
                "Duplicated arguments %s are disregarded"), sub("^list\\((.*)\\)", 
                "\\1", deparse(args[iD]))), domain = NA)
            nmsA <- names(args <- args[!iD])
        }
        pars[nmsA] <- args
    }
    bplt <- function(x, wid, stats, out, conf, notch, xlog, i) {
        ok <- TRUE
        if (!anyNA(stats)) {
            xP <- if (xlog) 
                function(x, w) x * exp(w)
            else function(x, w) x + w
            wid <- wid/2
            if (notch) {
                ok <- stats[2L] <= conf[1L] && conf[2L] <= stats[4L]
                xx <- xP(x, wid * c(-1, 1, 1, notch.frac, 1, 
                  1, -1, -1, -notch.frac, -1))
                yy <- c(stats[c(2, 2)], conf[1L], stats[3L], 
                  conf[2L], stats[c(4, 4)], conf[2L], stats[3L], 
                  conf[1L])
            }
            else {
                xx <- xP(x, wid * c(-1, 1, 1, -1))
                yy <- stats[c(2, 2, 4, 4)]
            }
            if (!notch) 
                notch.frac <- 1
            wntch <- notch.frac * wid
            xypolygon(xx, yy, lty = "blank", col = boxfill[i])
            xysegments(xP(x, -wntch), stats[3L], xP(x, +wntch), 
                stats[3L], lty = medlty[i], lwd = medlwd[i], 
                col = medcol[i], lend = 1)
            xypoints(x, stats[3L], pch = medpch[i], cex = medcex[i], 
                col = medcol[i], bg = medbg[i])
            xysegments(rep.int(x, 2), stats[c(1, 5)], rep.int(x, 
                2), stats[c(2, 4)], lty = whisklty[i], lwd = whisklwd[i], 
                col = whiskcol[i])
            xysegments(rep.int(xP(x, -wid * staplewex[i]), 2), 
                stats[c(1, 5)], rep.int(xP(x, +wid * staplewex[i]), 
                  2), stats[c(1, 5)], lty = staplelty[i], lwd = staplelwd[i], 
                col = staplecol[i])
            xypolygon(xx, yy, lty = boxlty[i], lwd = boxlwd[i], 
                border = boxcol[i])
            if ((nout <- length(out))) {
                xysegments(rep(x - wid * outwex, nout), out, 
                  rep(x + wid * outwex, nout), out, lty = outlty[i], 
                  lwd = outlwd[i], col = outcol[i])
                xypoints(rep.int(x, nout), out, pch = outpch[i], 
                  lwd = outlwd[i], cex = outcex[i], col = outcol[i], 
                  bg = outbg[i])
            }
            if (any(inf <- !is.finite(out))) {
                warning(sprintf(ngettext(length(unique(out[inf])), 
                  "Outlier (%s) in boxplot %d is not drawn", 
                  "Outliers (%s) in boxplot %d are not drawn"), 
                  paste(unique(out[inf]), collapse = ", "), i), 
                  domain = NA)
            }
        }
        return(ok)
    }
    if (!is.list(z) || 0L == (n <- length(z$n))) 
        stop("invalid first argument")
    if (is.null(at)) 
        at <- 1L:n
    else if (length(at) != n) 
        stop(gettextf("'at' must have same length as 'z$n', i.e. %d", 
            n), domain = NA)
    if (is.null(z$out)) 
        z$out <- numeric()
    if (is.null(z$group) || !outline) 
        z$group <- integer()
    if (is.null(pars$ylim)) 
        ylim <- range(z$stats[is.finite(z$stats)], if (outline) z$out[is.finite(z$out)], 
            if (notch) z$conf[is.finite(z$conf)])
    else {
        ylim <- pars$ylim
        pars$ylim <- NULL
    }
    if (length(border) == 0L) 
        border <- par("fg")
    dev.hold()
    on.exit(dev.flush())
    if (!add) {
        if (is.null(pars$xlim)) 
            xlim <- range(at, finite = TRUE) + c(-0.5, 0.5)
        else {
            xlim <- pars$xlim
            pars$xlim <- NULL
        }
        plot.new()
        if (horizontal) 
            plot.window(ylim = xlim, xlim = ylim, log = log, 
                xaxs = pars$yaxs)
        else plot.window(xlim = xlim, ylim = ylim, log = log, 
            yaxs = pars$yaxs)
    }
    xlog <- (par("ylog") && horizontal) || (par("xlog") && !horizontal)
    pcycle <- function(p, def1, def2 = NULL) rep(if (length(p)) p else if (length(def1)) def1 else def2, 
        length.out = n)
    p <- function(sym) pars[[sym, exact = TRUE]]
    boxlty <- pcycle(pars$boxlty, p("lty"), par("lty"))
    boxlwd <- pcycle(pars$boxlwd, p("lwd"), par("lwd"))
    boxcol <- pcycle(pars$boxcol, border)
    boxfill <- pcycle(pars$boxfill, par("bg"))
    boxwex <- pcycle(pars$boxwex, 0.8 * {
        if (n <= 1) 
            1
        else stats::quantile(diff(sort(if (xlog) 
            log(at)
        else at)), 0.1)
    })
    medlty <- pcycle(pars$medlty, p("lty"), par("lty"))
    medlwd <- pcycle(pars$medlwd, 3 * p("lwd"), 3 * par("lwd"))
    medpch <- pcycle(pars$medpch, NA_integer_)
    medcex <- pcycle(pars$medcex, p("cex"), par("cex"))
    medcol <- pcycle(pars$medcol, border)
    medbg <- pcycle(pars$medbg, p("bg"), par("bg"))
    whisklty <- pcycle(pars$whisklty, p("lty"), "dashed")
    whisklwd <- pcycle(pars$whisklwd, p("lwd"), par("lwd"))
    whiskcol <- pcycle(pars$whiskcol, border)
    staplelty <- pcycle(pars$staplelty, p("lty"), par("lty"))
    staplelwd <- pcycle(pars$staplelwd, p("lwd"), par("lwd"))
    staplecol <- pcycle(pars$staplecol, border)
    staplewex <- pcycle(pars$staplewex, 0.5)
    outlty <- pcycle(pars$outlty, "blank")
    outlwd <- pcycle(pars$outlwd, p("lwd"), par("lwd"))
    outpch <- pcycle(pars$outpch, p("pch"), par("pch"))
    outcex <- pcycle(pars$outcex, p("cex"), par("cex"))
    outcol <- pcycle(pars$outcol, border)
    outbg <- pcycle(pars$outbg, p("bg"), par("bg"))
    outwex <- pcycle(pars$outwex, 0.5)
    width <- if (!is.null(width)) {
        if (length(width) != n || anyNA(width) || any(width <= 
            0)) 
            stop("invalid boxplot widths")
        boxwex * width/max(width)
    }
    else if (varwidth) 
        boxwex * sqrt(z$n/max(z$n))
    else if (n == 1) 
        0.5 * boxwex
    else rep.int(boxwex, n)
    if (horizontal) {
        xypoints <- function(x, y, ...) points(y, x, ...)
        xypolygon <- function(x, y, ...) polygon(y, x, ...)
        xysegments <- function(x0, y0, x1, y1, ...) segments(y0, 
            x0, y1, x1, ...)
    }
    else {
        xypoints <- points
        xypolygon <- polygon
        xysegments <- segments
    }
    ok <- TRUE
    for (i in 1L:n) ok <- ok & bplt(at[i], wid = width[i], stats = z$stats[, 
        i], out = z$out[z$group == i], conf = z$conf[, i], notch = notch, 
        xlog = xlog, i = i)
    if (!ok) 
        warning("some notches went outside hinges ('box'): maybe set notch=FALSE")
    axes <- is.null(pars$axes)
    if (!axes) {
        axes <- pars$axes
        pars$axes <- NULL
    }
    if (axes) {
        ax.pars <- pars[names(pars) %in% c("xaxt", "yaxt", "xaxp", 
            "yaxp", "gap.axis", "las", "cex.axis", "col.axis", 
            "format")]
        if (is.null(show.names)) 
            show.names <- n > 1
        if (show.names) 
            do.call("axis", c(list(side = 1 + horizontal, at = at, 
                labels = z$names), ax.pars), quote = TRUE)
        do.call("Axis", c(list(x = z$stats, side = 2 - horizontal), 
            ax.pars), quote = TRUE)
    }
    if (ann) 
        do.call(title, pars[names(pars) %in% c("main", "cex.main", 
            "col.main", "sub", "cex.sub", "col.sub", "xlab", 
            "ylab", "cex.lab", "col.lab")], quote = TRUE)
    if (frame.plot) 
        box()
    invisible(at)
}

# Examples
require(stats)
set.seed(753)
(bx.p <- boxplot(split(rt(100, 4), gl(5, 20))))
op <- par(mfrow =  c(2, 2))
bxp(bx.p, xaxt = "n")
bxp(bx.p, notch = TRUE, axes = FALSE, pch = 4, boxfill = 1:5)
bxp(bx.p, notch = TRUE, boxfill = "lightblue", frame.plot = FALSE,
    outline = FALSE, main = "bxp(*, frame.plot= FALSE, outline= FALSE)")
bxp(bx.p, notch = TRUE, boxfill = "lightblue", border = 2:6,
    ylim = c(-4,4), pch = 22, bg = "green", log = "x",
    main = "... log = 'x', ylim = *")
par(op)
op <- par(mfrow = c(1, 2))

## single group -- no label
boxplot (weight ~ group, data = PlantGrowth, subset = group == "ctrl")
## with label
bx <- boxplot(weight ~ group, data = PlantGrowth,
              subset = group == "ctrl", plot = FALSE)
bxp(bx, show.names=TRUE)
par(op)

## passing gap.axis=* to axis(), PR#18109:
boxplot(matrix(100*rnorm(1e3), 50, 20),
        cex.axis = 1.5, gap.axis = -1)# showing *all* labels


z <- split(rnorm(1000), rpois(1000, 2.2))
boxplot(z, whisklty = 3, main = "boxplot(z, whisklty = 3)")

## Colour support similar to plot.default:
op <- par(mfrow = 1:2, bg = "light gray", fg = "midnight blue")
boxplot(z,   col.axis = "skyblue3", main = "boxplot(*, col.axis=..,main=..)")
plot(z[[1]], col.axis = "skyblue3", main =    "plot(*, col.axis=..,main=..)")
mtext("par(bg=\"light gray\", fg=\"midnight blue\")",
      outer = TRUE, line = -1.2)
par(op)

## Mimic S-Plus:
splus <- list(boxwex = 0.4, staplewex = 1, outwex = 1, boxfill = "grey40",
              medlwd = 3, medcol = "white", whisklty = 3, outlty = 1, outpch = NA)
boxplot(z, pars = splus)
## Recycled and "sweeping" parameters
op <- par(mfrow = c(1,2))
 boxplot(z, border = 1:5, lty = 3, medlty = 1, medlwd = 2.5)
 boxplot(z, boxfill = 1:3, pch = 1:5, lwd = 1.5, medcol = "white")
par(op)
## too many possibilities
boxplot(z, boxfill = "light gray", outpch = 21:25, outlty = 2,
        bg = "pink", lwd = 2,
        medcol = "dark blue", medcex = 2, medpch = 20)

