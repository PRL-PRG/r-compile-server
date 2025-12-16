#? stdlib
`SSasymp` <- structure(function (input, Asym, R0, lrc) 
{
    .expr1 <- R0 - Asym
    .expr2 <- exp(lrc)
    .expr5 <- exp(((-.expr2) * input))
    .value <- Asym + (.expr1 * .expr5)
    .actualArgs <- as.list(match.call()[c("Asym", "R0", "lrc")])
    if (all(vapply(.actualArgs, is.name, NA))) {
        .grad <- array(0, c(length(.value), 3L), list(NULL, c("Asym", 
            "R0", "lrc")))
        .grad[, "Asym"] <- 1 - .expr5
        .grad[, "R0"] <- .expr5
        .grad[, "lrc"] <- -(.expr1 * (.expr5 * (.expr2 * input)))
        dimnames(.grad) <- list(NULL, .actualArgs)
        attr(.value, "gradient") <- .grad
    }
    .value
}, initial = function (mCall, data, LHS, ...) 
{
    xy <- sortedXyData(mCall[["input"]], LHS, data)
    if (nrow(xy) < 3) {
        stop("too few distinct input values to fit an asymptotic regression model")
    }
    if (nrow(xy) > 3) {
        xy$ydiff <- abs(xy$y - NLSstRtAsymptote(xy))
        xy <- data.frame(xy)
        lrc <- log(-coef(lm(log(ydiff) ~ x, data = xy))[[2L]])
        pars <- coef(nls(y ~ cbind(1 - exp(-exp(lrc) * x), exp(-exp(lrc) * 
            x)), data = xy, start = list(lrc = lrc), algorithm = "plinear", 
            ...))
    }
    else {
        ydiff <- diff(xy$y)
        if (prod(ydiff) <= 0) {
            stop("cannot fit an asymptotic regression model to these data")
        }
        avg.resp <- xy$y
        frac <- (avg.resp[3L] - avg.resp[1L])/(avg.resp[2L] - 
            avg.resp[1L])
        xunique <- unique(xy$x)
        xdiff <- diff(xunique)
        if (xdiff[1L] == xdiff[2L]) {
            expmRd <- frac - 1
            rc <- -log(expmRd)/xdiff[1L]
            lrc <- log(rc)
            expmRx1 <- exp(-rc * xunique[1L])
            bma <- ydiff[1L]/(expmRx1 * (expmRd - 1))
            Asym <- avg.resp[1L] - bma * expmRx1
            pars <- c(lrc = lrc, Asym = Asym, R0 = bma + Asym)
        }
        else {
            stop("too few observations to fit an asymptotic regression model")
        }
    }
    setNames(pars[c(2L, 3L, 1L)], mCall[c("Asym", "R0", "lrc")])
}, pnames = c("Asym", "R0", "lrc"), class = "selfStart")

# Examples
options(show.nls.convergence=FALSE)
Lob.329 <- Loblolly[ Loblolly$Seed == "329", ]
SSasymp( Lob.329$age, 100, -8.5, -3.2 )   # response only
local({
  Asym <- 100 ; resp0 <- -8.5 ; lrc <- -3.2
  SSasymp( Lob.329$age, Asym, resp0, lrc) # response _and_ gradient
})
getInitial(height ~ SSasymp( age, Asym, resp0, lrc), data = Lob.329)
## Initial values are in fact the converged values
fm1 <- nls(height ~ SSasymp( age, Asym, resp0, lrc), data = Lob.329)
summary(fm1)

## Visualize the SSasymp()  model  parametrization :

  xx <- seq(-.3, 5, length.out = 101)
  ##  Asym + (R0-Asym) * exp(-exp(lrc)* x) :
  yy <- 5 - 4 * exp(-xx / exp(3/4))
  stopifnot( all.equal(yy, SSasymp(xx, Asym = 5, R0 = 1, lrc = -3/4)) )
  require(graphics)
  op <- par(mar = c(0, .2, 4.1, 0))
  plot(xx, yy, type = "l", axes = FALSE, ylim = c(0,5.2), xlim = c(-.3, 5),
       xlab = "", ylab = "", lwd = 2,
       main = quote("Parameters in the SSasymp model " ~
                    {f[phi](x) == phi[1] + (phi[2]-phi[1])*~e^{-e^{phi[3]}*~x}}))
  mtext(quote(list(phi[1] == "Asym", phi[2] == "R0", phi[3] == "lrc")))
  usr <- par("usr")
  arrows(usr[1], 0, usr[2], 0, length = 0.1, angle = 25)
  arrows(0, usr[3], 0, usr[4], length = 0.1, angle = 25)
  text(usr[2] - 0.2, 0.1, "x", adj = c(1, 0))
  text(     -0.1, usr[4], "y", adj = c(1, 1))
  abline(h = 5, lty = 3)
  arrows(c(0.35, 0.65), 1,
         c(0  ,  1   ), 1, length = 0.08, angle = 25); text(0.5, 1, quote(1))
  y0 <- 1 + 4*exp(-3/4) ; t.5 <- log(2) / exp(-3/4) ; AR2 <- 3 # (Asym + R0)/2
  segments(c(1, 1), c( 1, y0),
           c(1, 0), c(y0,  1),  lty = 2, lwd = 0.75)
  text(1.1, 1/2+y0/2, quote((phi[1]-phi[2])*e^phi[3]), adj = c(0,.5))
  axis(2, at = c(1,AR2,5), labels= expression(phi[2], frac(phi[1]+phi[2],2), phi[1]),
       pos=0, las=1)
  arrows(c(.6,t.5-.6), AR2,
         c(0, t.5   ), AR2, length = 0.08, angle = 25)
  text(   t.5/2,   AR2, quote(t[0.5]))
  text(   t.5 +.4, AR2,
       quote({f(t[0.5]) == frac(phi[1]+phi[2],2)}~{} %=>% {}~~
                {t[0.5] == frac(log(2), e^{phi[3]})}), adj = c(0, 0.5))
  par(op)

