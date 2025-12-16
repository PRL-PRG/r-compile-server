#? stdlib
`SSmicmen` <- structure(function (input, Vm, K) 
{
    .expr1 <- Vm * input
    .expr2 <- K + input
    .value <- .expr1/.expr2
    .actualArgs <- as.list(match.call()[c("Vm", "K")])
    if (all(vapply(.actualArgs, is.name, NA))) {
        .grad <- array(0, c(length(.value), 2L), list(NULL, c("Vm", 
            "K")))
        .grad[, "Vm"] <- input/.expr2
        .grad[, "K"] <- -(.expr1/.expr2^2)
        dimnames(.grad) <- list(NULL, .actualArgs)
        attr(.value, "gradient") <- .grad
    }
    .value
}, initial = function (mCall, data, LHS, ...) 
{
    xy <- sortedXyData(mCall[["input"]], LHS, data)
    if (nrow(xy) < 3) {
        stop("too few distinct input values to fit a Michaelis-Menten model")
    }
    pars <- as.vector(coef(lm(1/y ~ I(1/x), data = xy)))
    pars <- coef(nls(y ~ x/(K + x), data = xy, start = list(K = abs(pars[2L]/pars[1L])), 
        algorithm = "plinear", ...))
    setNames(pars[c(".lin", "K")], mCall[c("Vm", "K")])
}, pnames = c("Vm", "K"), class = "selfStart")

# Examples
PurTrt <- Puromycin[ Puromycin$state == "treated", ]
SSmicmen(PurTrt$conc, 200, 0.05)  # response only
local({  Vm <- 200; K <- 0.05
  SSmicmen(PurTrt$conc, Vm, K)    # response _and_ gradient
})
print(getInitial(rate ~ SSmicmen(conc, Vm, K), data = PurTrt), digits = 3)
## Initial values are in fact the converged values
fm1 <- nls(rate ~ SSmicmen(conc, Vm, K), data = PurTrt)
summary(fm1)
## Alternative call using the subset argument
fm2 <- nls(rate ~ SSmicmen(conc, Vm, K), data = Puromycin,
           subset = state == "treated")
summary(fm2) # The same indeed:
stopifnot(all.equal(coef(summary(fm1)), coef(summary(fm2))))

## Visualize the SSmicmen()  Michaelis-Menton model parametrization :

  xx <- seq(0, 5, length.out = 101)
  yy <- 5 * xx/(1+xx)
  stopifnot(all.equal(yy, SSmicmen(xx, Vm = 5, K = 1)))
  require(graphics)
  op <- par(mar = c(0, 0, 3.5, 0))
  plot(xx, yy, type = "l", lwd = 2, ylim = c(-1/4,6), xlim = c(-1, 5),
       ann = FALSE, axes = FALSE, main = "Parameters in the SSmicmen model")
  mtext(quote(list(phi[1] == "Vm", phi[2] == "K")))
  usr <- par("usr")
  arrows(usr[1], 0, usr[2], 0, length = 0.1, angle = 25)
  arrows(0, usr[3], 0, usr[4], length = 0.1, angle = 25)
  text(usr[2] - 0.2, 0.1, "x", adj = c(1, 0))
  text(     -0.1, usr[4], "y", adj = c(1, 1))
  abline(h = 5, lty = 3)
  arrows(-0.8, c(2.1, 2.9),
         -0.8, c(0,   5  ),  length = 0.1, angle = 25)
  text(  -0.8,     2.5, quote(phi[1]))
  segments(1, 0, 1, 2.7, lty = 2, lwd = 0.75)
  text(1, 2.7, quote(phi[2]))
  par(op)

