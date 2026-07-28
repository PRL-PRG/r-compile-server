#? stdlib
`plot.profile.nls` <- function (x, levels, conf = c(99, 95, 90, 80, 50)/100, absVal = TRUE, 
    ylab = NULL, lty = 2, ...) 
{
    obj <- x
    dfres <- attr(obj, "summary")$df[2L]
    if (missing(levels)) 
        levels <- sqrt(qf(pmax(0, pmin(1, conf)), 1, dfres))
    if (any(levels <= 0)) {
        levels <- levels[levels > 0]
        warning("levels truncated to positive values only")
    }
    mlev <- max(levels) * 1.05
    nm <- names(obj)
    opar <- par(mar = c(5, 4, 1, 1) + 0.1)
    if (absVal) {
        for (i in nm) {
            sp <- splines::interpSpline(obj[[i]]$par.vals[, i], 
                obj[[i]]$tau)
            bsp <- splines::backSpline(sp)
            xlim <- predict(bsp, c(-mlev, mlev))$y
            if (is.na(xlim[1L])) 
                xlim[1L] <- min(x[[i]]$par.vals[, i])
            if (is.na(xlim[2L])) 
                xlim[2L] <- max(x[[i]]$par.vals[, i])
            dev.hold()
            if (is.null(ylab)) 
                ylab <- expression(abs(tau))
            plot(abs(tau) ~ par.vals[, i], data = obj[[i]], xlab = i, 
                ylim = c(0, mlev), xlim = xlim, ylab = ylab, 
                type = "n", ...)
            avals <- rbind(as.data.frame(predict(sp)), data.frame(x = obj[[i]]$par.vals[, 
                i], y = obj[[i]]$tau))
            avals$y <- abs(avals$y)
            lines(avals[order(avals$x), ], col = 4)
            abline(v = predict(bsp, 0)$y, col = 3, lty = lty)
            for (lev in levels) {
                pred <- predict(bsp, c(-lev, lev))$y
                lines(pred, rep.int(lev, 2), type = "h", col = 6, 
                  lty = lty)
                lines(pred, rep.int(lev, 2), type = "l", col = 6, 
                  lty = lty)
            }
            dev.flush()
        }
    }
    else {
        for (i in nm) {
            sp <- splines::interpSpline(obj[[i]]$par.vals[, i], 
                obj[[i]]$tau)
            bsp <- splines::backSpline(sp)
            xlim <- predict(bsp, c(-mlev, mlev))$y
            if (is.na(xlim[1L])) 
                xlim[1L] <- min(x[[i]]$par.vals[, i])
            if (is.na(xlim[2L])) 
                xlim[2L] <- max(x[[i]]$par.vals[, i])
            dev.hold()
            if (is.null(ylab)) 
                ylab <- expression(tau)
            plot(tau ~ par.vals[, i], data = obj[[i]], xlab = i, 
                ylim = c(-mlev, mlev), xlim = xlim, ylab = ylab, 
                type = "n", ...)
            lines(predict(sp), col = 4)
            abline(h = 0, col = 3, lty = lty)
            for (lev in levels) {
                pred <- predict(bsp, c(-lev, lev))$y
                lines(pred, c(-lev, lev), type = "h", col = 6, 
                  lty = lty)
            }
            dev.flush()
        }
    }
    par(opar)
}

# Examples
require(graphics)

# obtain the fitted object
fm1 <- nls(demand ~ SSasympOrig(Time, A, lrc), data = BOD)
# get the profile for the fitted model
pr1 <- profile(fm1, alphamax = 0.05)
opar <- par(mfrow = c(2,2), oma = c(1.1, 0, 1.1, 0), las = 1)
plot(pr1, conf = c(95, 90, 80, 50)/100)
plot(pr1, conf = c(95, 90, 80, 50)/100, absVal = FALSE)
mtext("Confidence intervals based on the profile sum of squares",
      side = 3, outer = TRUE)
mtext("BOD data - confidence levels of 50%, 80%, 90% and 95%",
      side = 1, outer = TRUE)
par(opar)

