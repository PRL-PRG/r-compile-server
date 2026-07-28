#? stdlib
`legend` <- function (x, y = NULL, legend, fill = NULL, col = par("col"), 
    border = "black", lty, lwd, pch, angle = 45, density = NULL, 
    bty = "o", bg = par("bg"), box.lwd = par("lwd"), box.lty = par("lty"), 
    box.col = par("fg"), pt.bg = NA, cex = 1, pt.cex = cex, pt.lwd = lwd, 
    xjust = 0, yjust = 1, x.intersp = 1, y.intersp = 1, adj = c(0, 
        0.5), text.width = NULL, text.col = par("col"), text.font = NULL, 
    merge = do.lines && has.pch, trace = FALSE, plot = TRUE, 
    ncol = 1, horiz = FALSE, title = NULL, inset = 0, xpd, title.col = text.col[1], 
    title.adj = 0.5, title.cex = cex[1], title.font = text.font[1], 
    seg.len = 2) 
{
    if (missing(legend) && !missing(y) && (is.character(y) || 
        is.expression(y))) {
        legend <- y
        y <- NULL
    }
    mfill <- !missing(fill) || !missing(density)
    if (!missing(xpd)) {
        op <- par("xpd")
        on.exit(par(xpd = op))
        par(xpd = xpd)
    }
    if (is.null(text.font)) 
        text.font <- par("font")
    title <- as.graphicsAnnot(title)
    if (length(title) > 1) 
        stop("invalid 'title'")
    legend <- as.graphicsAnnot(legend)
    if (any(vapply(legend, is.language, NA))) 
        legend <- as.expression(legend)
    n.leg <- length(legend)
    if (n.leg == 0) 
        stop("'legend' is of length 0")
    auto <- if (is.character(x)) 
        match.arg(x, c("bottomright", "bottom", "bottomleft", 
            "left", "topleft", "top", "topright", "right", "center"))
    else NA
    if (is.na(auto)) {
        xy <- xy.coords(x, y, setLab = FALSE)
        x <- xy$x
        y <- xy$y
        nx <- length(x)
        if (nx < 1 || nx > 2) 
            stop("invalid coordinate lengths")
    }
    else nx <- 0
    reverse.xaxis <- par("xaxp")[1] > par("xaxp")[2]
    reverse.yaxis <- par("yaxp")[1] > par("yaxp")[2]
    xlog <- par("xlog")
    ylog <- par("ylog")
    cex <- rep(cex, length.out = n.leg)
    x.intersp <- rep(x.intersp, length.out = n.leg)
    seg.len <- rep(seg.len, length.out = n.leg)
    rect2 <- function(left, top, dx, dy, density = NULL, angle, 
        ...) {
        r <- left + dx
        if (xlog) {
            left <- 10^left
            r <- 10^r
        }
        b <- top - dy
        if (ylog) {
            top <- 10^top
            b <- 10^b
        }
        rect(left, top, r, b, angle = angle, density = density, 
            ...)
    }
    segments2 <- function(x1, y1, dx, dy, ...) {
        x2 <- x1 + dx
        if (xlog) {
            x1 <- 10^x1
            x2 <- 10^x2
        }
        y2 <- y1 + dy
        if (ylog) {
            y1 <- 10^y1
            y2 <- 10^y2
        }
        segments(x1, y1, x2, y2, ...)
    }
    points2 <- function(x, y, ...) {
        if (xlog) 
            x <- 10^x
        if (ylog) 
            y <- 10^y
        points(x, y, ...)
    }
    text2 <- function(x, y, ...) {
        if (xlog) 
            x <- 10^x
        if (ylog) 
            y <- 10^y
        text(x, y, ...)
    }
    colwise <- function(x, n, ncol, n.legpercol, fun, reverse = FALSE) {
        xmat <- matrix(c(rep(x, length.out = n), rep(0L, n.legpercol * 
            ncol - n)), ncol = ncol)
        res <- apply(xmat, 2, fun)
        res[res == 0L] <- max(res)
        if (reverse) 
            -res
        else res
    }
    rowwise <- function(x, n, ncol, n.legpercol, fun, reverse = FALSE) {
        xmat <- matrix(c(rep(x, length.out = n), rep(0L, n.legpercol * 
            ncol - n)), ncol = ncol)
        res <- apply(xmat, 1, fun)
        if (reverse) 
            -res
        else res
    }
    if (trace) {
        catn <- function(...) do.call(cat, c(lapply(list(...), 
            formatC), "\n"))
        fv <- function(...) paste(vapply(lapply(list(...), formatC), 
            paste, collapse = ",", ""), collapse = ", ")
    }
    n.legpercol <- if (horiz) {
        if (ncol != 1) 
            warning(gettextf("horizontal specification overrides: Number of columns := %d", 
                n.leg), domain = NA)
        ncol <- n.leg
        1
    }
    else ceiling(n.leg/ncol)
    Cex <- cex * par("cex")
    if (is.null(text.width)) 
        text.width <- max(abs(mapply(strwidth, legend, cex = cex, 
            font = text.font, MoreArgs = list(units = "user"))))
    else if ((length(text.width) > 1L && any(is.na(text.width))) || 
        (all(!is.na(text.width)) && (!is.numeric(text.width) || 
            any(text.width < 0)))) 
        stop("'text.width' must be numeric, >= 0, or a scalar NA")
    if (auto.text.width <- all(is.na(text.width))) {
        text.width <- abs(mapply(strwidth, legend, cex = cex, 
            font = text.font, MoreArgs = list(units = "user")))
        ncol <- ceiling(n.leg/n.legpercol)
    }
    xyc <- xyinch(par("cin"), warn.log = FALSE)
    xc <- Cex * xyc[1L]
    yc <- Cex * xyc[2L]
    if (any(xc < 0)) 
        text.width <- -text.width
    xchar <- xc
    xextra <- 0
    y.intersp <- rep(y.intersp, length.out = n.legpercol)
    yextra <- rowwise(yc, n = n.leg, ncol = ncol, n.legpercol = n.legpercol, 
        fun = function(x) max(abs(x)), reverse = reverse.yaxis) * 
        (y.intersp - 1)
    ymax <- sign(yc[1]) * max(abs(yc)) * max(1, mapply(strheight, 
        legend, cex = cex, font = text.font, MoreArgs = list(units = "user"))/yc)
    ychar <- yextra + ymax
    ymaxtitle <- title.cex * par("cex") * xyc[2L] * max(1, strheight(title, 
        cex = title.cex, font = title.font, units = "user")/(title.cex * 
        par("cex") * xyc[2L]))
    ychartitle <- yextra[1] + ymaxtitle
    if (trace) 
        catn("  xchar=", fv(xchar), "; (yextra, ychar)=", fv(yextra, 
            ychar))
    if (mfill) {
        xbox <- xc * 0.8
        ybox <- yc * 0.5
        dx.fill <- max(xbox)
    }
    do.lines <- (!missing(lty) && (is.character(lty) || any(lty > 
        0))) || !missing(lwd)
    has.pch <- !missing(pch) && length(pch) > 0
    if (do.lines) {
        x.off <- if (merge) 
            -0.7
        else 0
    }
    else if (merge) 
        warning("'merge = TRUE' has no effect when no line segments are drawn")
    if (has.pch) {
        if (is.character(pch) && !is.na(pch[1L]) && nchar(pch[1L], 
            type = "c") > 1) {
            if (length(pch) > 1) 
                warning("not using pch[2..] since pch[1L] has multiple chars")
            np <- nchar(pch[1L], type = "c")
            pch <- substr(rep.int(pch[1L], np), 1L:np, 1L:np)
        }
        if (!is.character(pch)) 
            pch <- as.integer(pch)
    }
    if (is.na(auto)) {
        if (xlog) 
            x <- log10(x)
        if (ylog) 
            y <- log10(y)
    }
    if (nx == 2) {
        x <- sort(x)
        y <- sort(y)
        left <- x[1L]
        top <- y[2L]
        w <- diff(x)
        h <- diff(y)
        w0 <- w/ncol
        x <- mean(x)
        y <- mean(y)
        if (missing(xjust)) 
            xjust <- 0.5
        if (missing(yjust)) 
            yjust <- 0.5
    }
    else {
        yc <- rowwise(yc, n.leg, ncol, n.legpercol, fun = function(x) max(abs(x)), 
            reverse = reverse.yaxis)
        h <- sum(ychar) + yc[length(yc)] + (!is.null(title)) * 
            ychartitle
        xch1 <- colwise(xchar, n.leg, ncol, n.legpercol, fun = function(x) max(abs(x)), 
            reverse = reverse.xaxis)
        x.interspCol <- colwise(x.intersp, n.leg, ncol, n.legpercol, 
            fun = max)
        seg.lenCol <- colwise(seg.len, n.leg, ncol, n.legpercol, 
            fun = max)
        text.width <- colwise(text.width, n = if (auto.text.width) 
            n.leg
        else ncol, ncol, n.legpercol = if (auto.text.width) 
            n.legpercol
        else 1, fun = function(x) max(abs(x)), reverse = reverse.xaxis)
        w0 <- text.width + (x.interspCol + 1) * xch1
        if (mfill) 
            w0 <- w0 + dx.fill
        if (do.lines) 
            w0 <- w0 + (seg.lenCol + x.off) * xch1
        w <- sum(w0) + 0.5 * xch1[ncol]
        if (!is.null(title) && (abs(tw <- strwidth(title, units = "user", 
            cex = title.cex, font = title.font) + 0.5 * title.cex * 
            par("cex") * xyc[1L])) > abs(w)) {
            xextra <- (tw - w)/2
            w <- tw
        }
        if (is.na(auto)) {
            left <- x - xjust * w
            top <- y + (1 - yjust) * h
        }
        else {
            usr <- par("usr")
            inset <- rep_len(inset, 2)
            insetx <- inset[1L] * (usr[2L] - usr[1L])
            left <- switch(auto, bottomright = , topright = , 
                right = usr[2L] - w - insetx, bottomleft = , 
                left = , topleft = usr[1L] + insetx, bottom = , 
                top = , center = (usr[1L] + usr[2L] - w)/2)
            insety <- inset[2L] * (usr[4L] - usr[3L])
            top <- switch(auto, bottomright = , bottom = , bottomleft = usr[3L] + 
                h + insety, topleft = , top = , topright = usr[4L] - 
                insety, left = , right = , center = (usr[3L] + 
                usr[4L] + h)/2)
        }
    }
    if (plot && bty != "n") {
        if (trace) 
            catn("  rect2(", left, ",", top, ", w=", w, ", h=", 
                h, ", ...)", sep = "")
        rect2(left, top, dx = w, dy = h, col = bg, density = NULL, 
            lwd = box.lwd, lty = box.lty, border = box.col)
    }
    xt <- left + xc + xextra + rep(c(0, cumsum(w0))[1L:ncol], 
        each = n.legpercol, length.out = n.leg)
    topspace <- 0.5 * ymax + (!is.null(title)) * ychartitle
    yt <- top - topspace - cumsum((c(0, ychar)/2 + c(ychar, 0)/2)[1L:n.legpercol])
    yt <- rep(yt, length.out = n.leg)
    if (mfill) {
        if (plot) {
            if (!is.null(fill)) 
                fill <- rep_len(fill, n.leg)
            rect2(left = xt, top = yt + ybox/2, dx = xbox, dy = ybox, 
                col = fill, density = density, angle = angle, 
                border = border)
        }
        xt <- xt + dx.fill
    }
    if (plot && (has.pch || do.lines)) 
        col <- rep_len(col, n.leg)
    if (missing(lwd) || is.null(lwd)) 
        lwd <- par("lwd")
    if (do.lines) {
        if (missing(lty) || is.null(lty)) 
            lty <- 1
        lty <- rep_len(lty, n.leg)
        lwd <- rep_len(lwd, n.leg)
        ok.l <- !is.na(lty) & (is.character(lty) | lty > 0) & 
            !is.na(lwd)
        if (trace) 
            catn("  segments2(", xt[ok.l] + x.off * xchar[ok.l], 
                ",", yt[ok.l], ", dx=", (seg.len * xchar)[ok.l], 
                ", dy=0, ...)")
        if (plot) 
            segments2(xt[ok.l] + x.off * xchar[ok.l], yt[ok.l], 
                dx = (seg.len * xchar)[ok.l], dy = 0, lty = lty[ok.l], 
                lwd = lwd[ok.l], col = col[ok.l])
        xt <- xt + (seg.len + x.off) * xchar
    }
    if (has.pch) {
        pch <- rep_len(pch, n.leg)
        pt.bg <- rep_len(pt.bg, n.leg)
        pt.cex <- rep_len(pt.cex, n.leg)
        pt.lwd <- rep_len(pt.lwd, n.leg)
        ok <- !is.na(pch)
        if (!is.character(pch)) {
            ok <- ok & (pch >= 0 | pch <= -32)
        }
        else {
            ok <- ok & nzchar(pch)
        }
        x1 <- (if (merge && do.lines) 
            xt - (seg.len/2) * xchar
        else xt)[ok]
        y1 <- yt[ok]
        if (trace) 
            catn("  points2(", x1, ",", y1, ", pch=", pch[ok], 
                ", ...)")
        if (plot) 
            points2(x1, y1, pch = pch[ok], col = col[ok], cex = pt.cex[ok], 
                bg = pt.bg[ok], lwd = pt.lwd[ok])
    }
    xt <- xt + x.intersp * xc
    if (plot) {
        if (!is.null(title)) 
            text2(left + w * title.adj, top - ymaxtitle, labels = title, 
                adj = c(title.adj, 0), cex = title.cex, col = title.col, 
                font = title.font)
        text2(xt, yt, labels = legend, adj = adj, cex = cex, 
            col = text.col, font = text.font)
    }
    invisible(list(rect = list(w = w, h = h, left = left, top = top), 
        text = list(x = xt, y = yt)))
}

# Examples
## Run the example in '?matplot' or the following:
leg.txt <- c("Setosa     Petals", "Setosa     Sepals",
             "Versicolor Petals", "Versicolor Sepals")
y.leg <- c(4.5, 3, 2.1, 1.4, .7)
cexv  <- c(1.2, 1, 4/5, 2/3, 1/2)
matplot(c(1, 8), c(0, 4.5), type = "n", xlab = "Length", ylab = "Width",
        main = "Petal and Sepal Dimensions in Iris Blossoms")
for (i in seq(cexv)) {
  text  (1, y.leg[i] - 0.1, paste("cex=", formatC(cexv[i])), cex = 0.8, adj = 0)
  legend(3, y.leg[i], leg.txt, pch = "sSvV", col = c(1, 3), cex = cexv[i])
}
## cex *vector* [in R <= 3.5.1 has 'if(xc < 0)' w/ length(xc) == 2]
legend("right", leg.txt, pch = "sSvV", col = c(1, 3),
       cex = 1+(-1:2)/8, trace = TRUE)# trace: show computed lengths & coords

## 'merge = TRUE' for merging lines & points:
x <- seq(-pi, pi, length.out = 65)
for(reverse in c(FALSE, TRUE)) {  ## normal *and* reverse axes:
  F <- if(reverse) rev else identity
  plot(x, sin(x), type = "l", col = 3, lty = 2,
       xlim = F(range(x)), ylim = F(c(-1.2, 1.8)))
  points(x, cos(x), pch = 3, col = 4)
  lines(x, tan(x), type = "b", lty = 1, pch = 4, col = 6)
  title("legend('top', lty = c(2, -1, 1), pch = c(NA, 3, 4), merge = TRUE)",
        cex.main = 1.1)
  legend("top", c("sin", "cos", "tan"), col = c(3, 4, 6),
       text.col = "green4", lty = c(2, -1, 1), pch = c(NA, 3, 4),
       merge = TRUE, bg = "gray90", trace=TRUE)
   if(!reverse && interactive()) {
    cat("waiting .."); Sys.sleep(2); cat(" done\n") }
  
} # for(..)

## right-justifying a set of labels: thanks to Uwe Ligges
x <- 1:5; y1 <- 1/x; y2 <- 2/x
plot(rep(x, 2), c(y1, y2), type = "n", xlab = "x", ylab = "y")
lines(x, y1); lines(x, y2, lty = 2)
temp <- legend("topright", legend = c(" ", " "),
               text.width = strwidth("1,000,000"),
               lty = 1:2, xjust = 1, yjust = 1, inset = 1/10,
               title = "Line Types", title.cex = 0.5, trace=TRUE)
text(temp$rect$left + temp$rect$w, temp$text$y,
     c("1,000", "1,000,000"), pos = 2)


##--- log scaled Examples ------------------------------
leg.txt <- c("a one", "a two")

par(mfrow = c(2, 2))
for(ll in c("","x","y","xy")) {
  plot(2:10, log = ll, main = paste0("log = '", ll, "'"))
  abline(1, 1)
  lines(2:3, 3:4, col = 2)
  points(2, 2, col = 3)
  rect(2, 3, 3, 2, col = 4)
  text(c(3,3), 2:3, c("rect(2,3,3,2, col=4)",
                      "text(c(3,3),2:3,\"c(rect(...)\")"), adj = c(0, 0.3))
  legend(list(x = 2,y = 8), legend = leg.txt, col = 2:3, pch = 1:2,
         lty = 1)  #, trace = TRUE)
} #      ^^^^^^^ to force lines -> automatic merge=TRUE
par(mfrow = c(1,1))

##-- Math expressions:  ------------------------------
x <- seq(-pi, pi, length.out = 65)
plot(x, sin(x), type = "l", col = 2, xlab = expression(phi),
     ylab = expression(f(phi)))
abline(h = -1:1, v = pi/2*(-6:6), col = "gray90")
lines(x, cos(x), col = 3, lty = 2)
ex.cs1 <- expression(plain(sin) * phi,  paste("cos", phi))  # 2 ways
utils::str(legend(-3, .9, ex.cs1, lty = 1:2, plot = FALSE,
           adj = c(0, 0.6)))  # adj y !
legend(-3, 0.9, ex.cs1, lty = 1:2, col = 2:3,  adj = c(0, 0.6))

require(stats)
x <- rexp(100, rate = .5)
hist(x, main = "Mean and Median of a Skewed Distribution")
abline(v = mean(x),   col = 2, lty = 2, lwd = 2)
abline(v = median(x), col = 3, lty = 3, lwd = 2)
ex12 <- expression(bar(x) == sum(over(x[i], n), i == 1, n),
                   hat(x) == median(x[i], i == 1, n))
utils::str(legend(4.1, 30, ex12, col = 2:3, lty = 2:3, lwd = 2))

## 'Filled' boxes -- see also example(barplot) which may call legend(*, fill=)
barplot(VADeaths)
legend("topright", rownames(VADeaths), fill = gray.colors(nrow(VADeaths)))

## Using 'ncol'
x <- 0:64/64
for(R in c(identity, rev)) { # normal *and* reverse x-axis works fine:
  xl <- R(range(x)); x1 <- xl[1]
matplot(x, outer(x, 1:7, function(x, k) sin(k * pi * x)), xlim=xl,
        type = "o", col = 1:7, ylim = c(-1, 1.5), pch = "*")
op <- par(bg = "antiquewhite1")
legend(x1, 1.5, paste("sin(", 1:7, "pi * x)"), col = 1:7, lty = 1:7,
       pch = "*", ncol = 4, cex = 0.8)
legend("bottomright", paste("sin(", 1:7, "pi * x)"), col = 1:7, lty = 1:7,
       pch = "*", cex = 0.8)
legend(x1, -.1, paste("sin(", 1:4, "pi * x)"), col = 1:4, lty = 1:4,
       ncol = 2, cex = 0.8)
legend(x1, -.4, paste("sin(", 5:7, "pi * x)"), col = 4:6,  pch = 24,
       ncol = 2, cex = 1.5, lwd = 2, pt.bg = "pink", pt.cex = 1:3)
par(op)
   if(interactive() && identical(R, identity)) {
     cat("waiting .."); Sys.sleep(2); cat(" done\n") }
} # for(..)

## point covering line :
y <- sin(3*pi*x)
plot(x, y, type = "l", col = "blue",
    main = "points with bg & legend(*, pt.bg)")
points(x, y, pch = 21, bg = "white")
legend(.4,1, "sin(c x)", pch = 21, pt.bg = "white", lty = 1, col = "blue")

## legends with titles at different locations
plot(x, y, type = "n")
legend("bottomright", "(x,y)", pch=1, title= "bottomright")
legend("bottom",      "(x,y)", pch=1, title= "bottom")
legend("bottomleft",  "(x,y)", pch=1, title= "bottomleft")
legend("left",        "(x,y)", pch=1, title= "left")
legend("topleft",     "(x,y)", pch=1, title= "topleft, inset = .05", inset = .05)
legend("top",         "(x,y)", pch=1, title= "top")
legend("topright",    "(x,y)", pch=1, title= "topright, inset = .02",inset = .02)
legend("right",       "(x,y)", pch=1, title= "right")
legend("center",      "(x,y)", pch=1, title= "center")

# using text.font (and text.col):
op <- par(mfrow = c(2, 2), mar = rep(2.1, 4))
c6 <- terrain.colors(10)[1:6]
for(i in 1:4) {
   plot(1, type = "n", axes = FALSE, ann = FALSE); title(paste("text.font =",i))
   legend("top", legend = LETTERS[1:6], col = c6,
          ncol = 2, cex = 2, lwd = 3, text.font = i, text.col = c6)
}
par(op)

# using text.width for several columns
plot(1, type="n")
legend("topleft", c("This legend", "has", "equally sized", "columns."),
       pch = 1:4, ncol = 4)
legend("bottomleft", c("This legend", "has", "optimally sized", "columns."),
       pch = 1:4, ncol = 4, text.width = NA)
legend("right", letters[1:4], pch = 1:4, ncol = 4,
       text.width = 1:4 / 50)

