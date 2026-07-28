#? stdlib
`plot.lm` <- function (x, which = c(1, 2, 3, 5), caption = list("Residuals vs Fitted", 
    "Q-Q Residuals", "Scale-Location", "Cook's distance", "Residuals vs Leverage", 
    expression("Cook's dist vs Leverage* " * h[ii]/(1 - h[ii]))), 
    panel = if (add.smooth) function(x, y, ...) panel.smooth(x, 
        y, iter = iter.smooth, ...) else points, sub.caption = NULL, 
    main = "", ask = prod(par("mfcol")) < length(which) && dev.interactive(), 
    ..., id.n = 3, labels.id = names(residuals(x)), cex.id = 0.75, 
    qqline = TRUE, cook.levels = c(0.5, 1), cook.col = 8, cook.lty = 2, 
    cook.legendChanges = list(), add.smooth = getOption("add.smooth"), 
    iter.smooth = if (isGlm) 0 else 3, label.pos = c(4, 2), cex.caption = 1, 
    cex.oma.main = 1.25, extend.ylim.f = 0.08) 
{
    dropInf <- function(x, h) {
        if (any(isInf <- h >= 1)) {
            warning(gettextf("not plotting observations with leverage one:\n  %s", 
                paste(which(isInf), collapse = ", ")), call. = FALSE, 
                domain = NA)
            x[isInf] <- NaN
        }
        x
    }
    if (!inherits(x, "lm")) 
        stop("use only with \"lm\" objects")
    if (!is.numeric(which) || any(which < 1) || any(which > 6)) 
        stop("'which' must be in 1:6")
    if ((isGlm <- inherits(x, "glm"))) 
        binomialLike <- family(x)$family == "binomial"
    show <- rep(FALSE, 6)
    show[which] <- TRUE
    r <- if (isGlm) 
        residuals(x, type = "pearson")
    else residuals(x)
    yh <- predict(x)
    w <- weights(x)
    if (!is.null(w)) {
        wind <- w != 0
        r <- r[wind]
        yh <- yh[wind]
        w <- w[wind]
        labels.id <- labels.id[wind]
    }
    n <- length(r)
    if (any(show[2L:6L])) {
        s <- if (inherits(x, "rlm")) 
            x$s
        else if (isGlm) 
            sqrt(summary(x)$dispersion)
        else sqrt(deviance(x)/df.residual(x))
        hii <- (infl <- influence(x, do.coef = FALSE))$hat
        if (any(show[4L:6L])) {
            cook <- cooks.distance(x, infl)
        }
    }
    if (any(show[c(2L, 3L, 5L)])) {
        ylab5 <- ylab3 <- if (isGlm) 
            "Std. Pearson resid."
        else "Standardized residuals"
        ylab2 <- if (isGlm) 
            "Std. Deviance resid."
        else ylab3
        rs <- dropInf(if (isGlm) 
            rstandard(x, type = "pearson")
        else (if (is.null(w)) 
            r
        else sqrt(w) * r)/(s * sqrt(1 - hii)), hii)
        rds <- if (isGlm) 
            suppressWarnings(dropInf(rstandard(x, type = "deviance"), 
                hii))
        else rs
    }
    if (any(show[5L:6L])) {
        r.hat <- range(hii, na.rm = TRUE)
        isConst.hat <- all(r.hat == 0) || diff(r.hat) < 1e-10 * 
            mean(hii, na.rm = TRUE)
    }
    if (any(show[c(1L, 3L)])) 
        l.fit <- if (isGlm) 
            "Predicted values"
        else "Fitted values"
    if (is.null(id.n)) 
        id.n <- 0L
    else {
        id.n <- as.integer(id.n)
        if (id.n < 0L || id.n > n) 
            stop(gettextf("'id.n' must be in {1,..,%d}", n), 
                domain = NA)
    }
    if (id.n > 0L) {
        if (is.null(labels.id)) 
            labels.id <- paste(1L:n)
        iid <- 1L:id.n
        show.r <- sort.list(abs(r), decreasing = TRUE)[iid]
        if (any(show[2L:3L])) {
            show.rs <- sort.list(abs(rs), decreasing = TRUE)[iid]
            show.rds <- sort.list(abs(rds), decreasing = TRUE)[iid]
        }
        text.id <- function(x, y, ind, adj.x = TRUE, usr = par("usr")) {
            labpos <- if (adj.x) 
                label.pos[(x > mean(usr[1:2])) + 1L]
            else 3
            text(x, y, labels.id[ind], cex = cex.id, xpd = TRUE, 
                pos = labpos, offset = 0.25)
        }
    }
    getCaption <- function(k) if (length(caption) < k) 
        NA_character_
    else as.graphicsAnnot(caption[[k]])
    if (is.null(sub.caption)) {
        cal <- x$call
        if (!is.na(m.f <- match("formula", names(cal)))) {
            cal <- cal[c(1, m.f)]
            names(cal)[2L] <- ""
        }
        cc <- deparse(cal, 80)
        nc <- nchar(cc[1L], "c")
        abbr <- length(cc) > 1 || nc > 75
        sub.caption <- if (abbr) 
            paste(substr(cc[1L], 1L, min(75L, nc)), "...")
        else cc[1L]
    }
    one.fig <- prod(par("mfcol")) == 1
    if (ask) {
        oask <- devAskNewPage(TRUE)
        on.exit(devAskNewPage(oask))
    }
    if (show[1L]) {
        ylim <- range(r, na.rm = TRUE)
        if (id.n > 0) 
            ylim <- extendrange(r = ylim, f = extend.ylim.f)
        dev.hold()
        ylab1 <- if (isGlm) 
            "Pearson Residuals"
        else "Residuals"
        plot(yh, r, xlab = l.fit, ylab = ylab1, main = main, 
            ylim = ylim, type = "n", ...)
        panel(yh, r, ...)
        if (one.fig) 
            title(sub = sub.caption, ...)
        mtext(getCaption(1), 3, 0.25, cex = cex.caption)
        if (id.n > 0) {
            y.id <- r[show.r]
            y.id[y.id < 0] <- y.id[y.id < 0] - strheight(" ")/3
            text.id(yh[show.r], y.id, show.r)
        }
        abline(h = 0, lty = 3, col = "gray")
        dev.flush()
    }
    if (show[2L]) {
        if (isGlm) {
            qhalfnorm <- function(p) qnorm((p + 1)/2)
            qqhalfnorm <- function(y, xlab = "Theoretical Quantiles", 
                ...) {
                if (has.na <- any(ina <- is.na(y))) {
                  yN <- y
                  y <- y[!ina]
                }
                if (0 == (n <- length(y))) 
                  stop("y is empty or has only NAs")
                x <- qhalfnorm(ppoints(n))[order(order(y))]
                if (has.na) {
                  y <- x
                  x <- rep.int(NA_real_, length(ina))
                  x[!ina] <- y
                  y <- yN
                }
                plot(x, y, xlab = xlab, ...)
                invisible(list(x = x, y = y))
            }
            absr <- abs(rds)
            ylim <- c(0, max(absr, na.rm = TRUE) * 1.075)
            yl <- as.expression(substitute(abs(YL), list(YL = as.name(ylab2))))
            dev.hold()
            qq <- qqhalfnorm(absr, main = main, ylab = yl, ylim = ylim, 
                ...)
            if (qqline) 
                qqline(absr, distribution = qhalfnorm, lty = 3, 
                  col = "gray50")
        }
        else {
            ylim <- range(rds, na.rm = TRUE)
            ylim[2L] <- ylim[2L] + diff(ylim) * 0.075
            dev.hold()
            qq <- qqnorm(rds, main = main, ylab = ylab2, ylim = ylim, 
                ...)
            if (qqline) 
                qqline(rds, lty = 3, col = "gray50")
        }
        if (one.fig) 
            title(sub = sub.caption, ...)
        mtext(getCaption(2), 3, 0.25, cex = cex.caption)
        if (id.n > 0) 
            text.id(qq$x[show.rds], qq$y[show.rds], show.rds)
        dev.flush()
    }
    if (show[3L]) {
        sqrtabsr <- sqrt(abs(rs))
        ylim <- c(0, max(sqrtabsr, na.rm = TRUE))
        yl <- as.expression(substitute(sqrt(abs(YL)), list(YL = as.name(ylab3))))
        yhn0 <- if (is.null(w)) 
            yh
        else yh[w != 0]
        dev.hold()
        plot(yhn0, sqrtabsr, xlab = l.fit, ylab = yl, main = main, 
            ylim = ylim, type = "n", ...)
        panel(yhn0, sqrtabsr, ...)
        if (one.fig) 
            title(sub = sub.caption, ...)
        mtext(getCaption(3), 3, 0.25, cex = cex.caption)
        if (id.n > 0) 
            text.id(yhn0[show.rs], sqrtabsr[show.rs], show.rs)
        dev.flush()
    }
    if (show[4L]) {
        if (id.n > 0) {
            show.r <- order(-cook)[iid]
            ymx <- cook[show.r[1L]] * 1.075
        }
        else ymx <- max(cook, na.rm = TRUE)
        dev.hold()
        plot(cook, type = "h", ylim = c(0, ymx), main = main, 
            xlab = "Obs. number", ylab = "Cook's distance", ...)
        if (one.fig) 
            title(sub = sub.caption, ...)
        mtext(getCaption(4), 3, 0.25, cex = cex.caption)
        if (id.n > 0) 
            text.id(show.r, cook[show.r], show.r, adj.x = FALSE)
        dev.flush()
    }
    if (show[5L]) {
        ylim <- range(rs, na.rm = TRUE)
        if (id.n > 0) {
            ylim <- extendrange(r = ylim, f = extend.ylim.f)
            show.rs <- order(-cook)[iid]
        }
        do.plot <- TRUE
        if (isConst.hat) {
            if (missing(caption)) 
                caption[[5L]] <- "Constant Leverage:\n Residuals vs Factor Levels"
            if (nf <- length(xlev <- x$xlevels)) {
                facvars <- names(xlev)
                mf <- model.frame(x)[facvars]
                dm <- data.matrix(mf)
                nlev <- unname(lengths(xlev))
                ff <- if (nf == 1) 
                  1
                else rev(cumprod(c(1, nlev[nf:2])))
                facval <- (dm - 1) %*% ff
                xx <- facval
                dev.hold()
                plot(facval, rs, xlim = c(-1/2, sum((nlev - 1) * 
                  ff) + 1/2), ylim = ylim, xaxt = "n", main = main, 
                  xlab = "Factor Level Combinations", ylab = ylab5, 
                  type = "n", ...)
                axis(1, at = ff[1L] * (1L:nlev[1L] - 1/2) - 1/2, 
                  labels = xlev[[1L]])
                mtext(paste(facvars[1L], ":"), side = 1, line = 0.25, 
                  adj = -0.05)
                abline(v = ff[1L] * (0:nlev[1L]) - 1/2, col = "gray", 
                  lty = "F4")
                panel(facval, rs, ...)
                abline(h = 0, lty = 3, col = "gray")
                dev.flush()
            }
            else {
                message(gettextf("hat values (leverages) are all = %s\n and there are no factor predictors; no plot no. 5", 
                  format(mean(r.hat))), domain = NA)
                frame()
                do.plot <- FALSE
            }
        }
        else {
            xx <- hii
            xx[xx >= 1] <- NA
            dev.hold()
            plot(xx, rs, xlim = c(0, max(xx, na.rm = TRUE)), 
                ylim = ylim, main = main, xlab = "Leverage", 
                ylab = ylab5, type = "n", ...)
            panel(xx, rs, ...)
            abline(h = 0, v = 0, lty = 3, col = "gray")
            if (one.fig) 
                title(sub = sub.caption, ...)
            if (length(cook.levels)) {
                p <- x$rank
                usr2 <- par("usr")[2L]
                hh <- seq.int(min(r.hat[1L], r.hat[2L]/100), 
                  usr2, length.out = 101)
                for (crit in cook.levels) {
                  cl.h <- sqrt(crit * p * (1 - hh)/hh)
                  lines(hh, cl.h, lty = cook.lty, col = cook.col)
                  lines(hh, -cl.h, lty = cook.lty, col = cook.col)
                }
                if (!is.null(cook.legendChanges)) 
                  do.call(legend, modifyList(list(x = "bottomleft", 
                    legend = "Cook's distance", lty = cook.lty, 
                    col = cook.col, text.col = cook.col, bty = "n", 
                    x.intersp = 1/4, y.intersp = 1/8), cook.legendChanges))
                xmax <- min(0.99, usr2)
                ymult <- sqrt(p * (1 - xmax)/xmax)
                aty <- sqrt(cook.levels) * ymult
                axis(4, at = c(-rev(aty), aty), labels = paste(c(rev(cook.levels), 
                  cook.levels)), mgp = c(0.25, 0.25, 0), las = 2, 
                  tck = 0, cex.axis = cex.id, col.axis = cook.col)
            }
            dev.flush()
        }
        if (do.plot) {
            mtext(getCaption(5), 3, 0.25, cex = cex.caption)
            if (id.n > 0) {
                y.id <- rs[show.rs]
                y.id[y.id < 0] <- y.id[y.id < 0] - strheight(" ")/3
                text.id(xx[show.rs], y.id, show.rs)
            }
        }
    }
    if (show[6L]) {
        g <- dropInf(hii/(1 - hii), hii)
        ymx <- max(cook, na.rm = TRUE) * 1.025
        dev.hold()
        plot(g, cook, xlim = c(0, max(g, na.rm = TRUE)), ylim = c(0, 
            ymx), main = main, ylab = "Cook's distance", xlab = expression("Leverage  " * 
            h[ii]), xaxt = "n", type = "n", ...)
        panel(g, cook, ...)
        athat <- pretty(hii)
        axis(1, at = athat/(1 - athat), labels = paste(athat))
        if (one.fig) 
            title(sub = sub.caption, ...)
        p <- x$rank
        bval <- pretty(sqrt(p * cook/g), 5)
        usr <- par("usr")
        xmax <- usr[2L]
        ymax <- usr[4L]
        for (i in seq_along(bval)) {
            bi2 <- bval[i]^2
            if (p * ymax > bi2 * xmax) {
                xi <- xmax + strwidth(" ")/3
                yi <- bi2 * xi/p
                abline(0, bi2, lty = cook.lty)
                text(xi, yi, paste(bval[i]), adj = 0, xpd = TRUE)
            }
            else {
                yi <- ymax - 1.5 * strheight(" ")
                xi <- p * yi/bi2
                lines(c(0, xi), c(0, yi), lty = cook.lty)
                text(xi, ymax - 0.8 * strheight(" "), paste(bval[i]), 
                  adj = 0.5, xpd = TRUE)
            }
        }
        mtext(getCaption(6), 3, 0.25, cex = cex.caption)
        if (id.n > 0) {
            show.r <- order(-cook)[iid]
            text.id(g[show.r], cook[show.r], show.r, usr = usr)
        }
        dev.flush()
    }
    if (!one.fig && par("oma")[3L] >= 1) 
        mtext(sub.caption, outer = TRUE, cex = cex.oma.main)
    invisible()
}

# Examples
require(graphics)

## Analysis of the life-cycle savings data
## given in Belsley, Kuh and Welsch.
lm.SR <- lm(sr ~ pop15 + pop75 + dpi + ddpi, data = LifeCycleSavings)
plot(lm.SR)

## 4 plots on 1 page;
## allow room for printing model formula in outer margin:
par(mfrow = c(2, 2), oma = c(0, 0, 2, 0)) -> opar
plot(lm.SR)
plot(lm.SR, id.n = NULL)                 # no id's
plot(lm.SR, id.n = 5, labels.id = NULL)  # 5 id numbers

## Was default in R <= 2.1.x:
## Cook's distances instead of Residual-Leverage plot
plot(lm.SR, which = 1:4)

## All the above fit a smooth curve where applicable
## by default unless "add.smooth" is changed.
## Give a smoother curve by increasing the lowess span :
plot(lm.SR, panel = function(x, y) panel.smooth(x, y, span = 1))

par(mfrow = c(2,1)) # same oma as above
plot(lm.SR, which = 1:2, sub.caption = "Saving Rates, n=50, p=5")

## Cook's distance tweaking
par(mfrow = c(2,3)) # same oma ...
plot(lm.SR, which = 1:6, cook.col = "royalblue")

## A case where over plotting of the "legend" is to be avoided:
if(dev.interactive(TRUE)) getOption("device")(height = 6, width = 4)
par(mfrow = c(3,1), mar = c(5,5,4,2)/2 +.1, mgp = c(1.4, .5, 0))
plot(lm.SR, which = 5, extend.ylim.f = c(0.2, 0.08))
plot(lm.SR, which = 5, cook.lty = "dotdash",
     cook.legendChanges = list(x = "bottomright", legend = "Cook"))
plot(lm.SR, which = 5, cook.legendChanges = NULL)  # no "legend"


## An example with *long* formula that needs abbreviation:
par(mfrow = c(2,2))
for(i in 1:5) assign(paste("long.var.name", i, sep = "."), runif(10))
plot(lm(long.var.name.1 ~
        long.var.name.2 + long.var.name.3 + long.var.name.4 + long.var.name.5))

par(opar) # reset par()s

