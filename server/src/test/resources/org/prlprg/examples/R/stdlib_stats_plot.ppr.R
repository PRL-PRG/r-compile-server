#? stdlib
`plot.ppr` <- function (x, ask, type = "o", cex = 1/2, main = quote(bquote("term"[.(i)] * 
    ":" ~ ~hat(beta[.(i)]) == .(bet.i))), xlab = quote(bquote(bold(alpha)[.(i)]^T * 
    bold(x))), ylab = "", ...) 
{
    ppr.funs <- function(obj) {
        p <- obj$p
        q <- obj$q
        sm <- obj$smod
        n <- sm[4L]
        mu <- sm[5L]
        m <- sm[1L]
        jf <- q + 6 + m * (p + q)
        jt <- jf + m * n
        f <- matrix(sm[jf + 1L:(mu * n)], n, mu)
        t <- matrix(sm[jt + 1L:(mu * n)], n, mu)
        list(x = t, y = f)
    }
    obj <- ppr.funs(x)
    if (!missing(ask)) {
        oask <- devAskNewPage(ask)
        on.exit(devAskNewPage(oask))
    }
    for (i in 1L:x$mu) {
        ord <- order(obj$x[, i])
        bet.i <- format(x$beta[[i]], digits = 3)
        plot(obj$x[ord, i], obj$y[ord, i], type = type, cex = cex, 
            main = if (is.call(main)) 
                eval(main)
            else main, xlab = if (is.call(xlab)) 
                eval(xlab)
            else xlab, ylab = ylab, ...)
    }
    force(bet.i)
    invisible()
}

# Examples
require(graphics)

rock1 <- within(rock, { area1 <- area/10000; peri1 <- peri/10000 })
par(mfrow = c(3,2)) # maybe: , pty = "s"
rock.ppr <- ppr(log(perm) ~ area1 + peri1 + shape,
                data = rock1, nterms = 2, max.terms = 5)
plot(rock.ppr, main = "ppr(log(perm)~ ., nterms=2, max.terms=5)")
plot(update(rock.ppr, bass = 5), main = "update(..., bass = 5)")
plot(update(rock.ppr, sm.method = "gcv", gcvpen = 2),
     main = "update(..., sm.method=\"gcv\", gcvpen=2)")

