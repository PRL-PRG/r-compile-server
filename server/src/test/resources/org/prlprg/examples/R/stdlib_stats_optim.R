#? stdlib
`optim` <- function (par, fn, gr = NULL, ..., method = c("Nelder-Mead", 
    "BFGS", "CG", "L-BFGS-B", "SANN", "Brent"), lower = -Inf, 
    upper = Inf, control = list(), hessian = FALSE) 
{
    fn1 <- function(par) fn(par, ...)
    gr1 <- if (!is.null(gr)) 
        function(par) gr(par, ...)
    method <- match.arg(method)
    if ((any(lower > -Inf) || any(upper < Inf)) && !any(method == 
        c("L-BFGS-B", "Brent"))) {
        warning("bounds can only be used with method L-BFGS-B (or Brent)")
        method <- "L-BFGS-B"
    }
    npar <- length(par)
    con <- list(trace = 0, fnscale = 1, parscale = rep.int(1, 
        npar), ndeps = rep.int(0.001, npar), maxit = 100L, abstol = -Inf, 
        reltol = sqrt(.Machine$double.eps), alpha = 1, beta = 0.5, 
        gamma = 2, REPORT = 10, warn.1d.NelderMead = TRUE, type = 1, 
        lmm = 5, factr = 1e+07, pgtol = 0, tmax = 10, temp = 10)
    nmsC <- names(con)
    if (method == "Nelder-Mead") 
        con$maxit <- 500
    if (method == "SANN") {
        con$maxit <- 10000
        con$REPORT <- 100
    }
    con[(namc <- names(control))] <- control
    if (length(noNms <- namc[!namc %in% nmsC])) 
        warning("unknown names in control: ", paste(noNms, collapse = ", "))
    if (con$trace < 0) 
        warning("read the documentation for 'trace' more carefully")
    else if (method == "SANN" && con$trace && as.integer(con$REPORT) == 
        0) 
        stop("'trace != 0' needs 'REPORT >= 1'")
    if (method == "L-BFGS-B" && any(!is.na(match(c("reltol", 
        "abstol"), namc)))) 
        warning("method L-BFGS-B uses 'factr' (and 'pgtol') instead of 'reltol' and 'abstol'")
    if (npar == 1 && method == "Nelder-Mead" && isTRUE(con$warn.1d.NelderMead)) 
        warning("one-dimensional optimization by Nelder-Mead is unreliable:\nuse \"Brent\" or optimize() directly")
    if (npar > 1 && method == "Brent") 
        stop("method = \"Brent\" is only available for one-dimensional optimization")
    lower <- as.double(rep_len(lower, npar))
    upper <- as.double(rep_len(upper, npar))
    res <- if (method == "Brent") {
        if (any(!is.finite(c(upper, lower)))) 
            stop("'lower' and 'upper' must be finite values")
        res <- optimize(function(par) fn(par, ...)/con$fnscale, 
            lower = lower, upper = upper, tol = con$reltol)
        names(res)[names(res) == c("minimum", "objective")] <- c("par", 
            "value")
        res$value <- res$value * con$fnscale
        c(res, list(counts = c(`function` = NA, gradient = NA), 
            convergence = 0L, message = NULL))
    }
    else .External2(C_optim, par, fn1, gr1, method, con, lower, 
        upper)
    if (hessian) 
        res$hessian <- .External2(C_optimhess, res$par, fn1, 
            gr1, con)
    res
}

# Examples\donttest{
require(graphics)

fr <- function(x) {   ## Rosenbrock Banana function
    x1 <- x[1]
    x2 <- x[2]
    100 * (x2 - x1 * x1)^2 + (1 - x1)^2
}
grr <- function(x) { ## Gradient of 'fr'
    x1 <- x[1]
    x2 <- x[2]
    c(-400 * x1 * (x2 - x1 * x1) - 2 * (1 - x1),
       200 *      (x2 - x1 * x1))
}
optim(c(-1.2,1), fr)
(res <- optim(c(-1.2,1), fr, grr, method = "BFGS"))
optimHess(res$par, fr, grr)
optim(c(-1.2,1), fr, NULL, method = "BFGS", hessian = TRUE)
## These do not converge in the default number of steps
optim(c(-1.2,1), fr, grr, method = "CG")
optim(c(-1.2,1), fr, grr, method = "CG", control = list(type = 2))
optim(c(-1.2,1), fr, grr, method = "L-BFGS-B")

flb <- function(x)
    { p <- length(x); sum(c(1, rep(4, p-1)) * (x - c(1, x[-p])^2)^2) }
## 25-dimensional box constrained
optim(rep(3, 25), flb, NULL, method = "L-BFGS-B",
      lower = rep(2, 25), upper = rep(4, 25)) # par[24] is *not* at boundary


## "wild" function , global minimum at about -15.81515
fw <- function (x)
    10*sin(0.3*x)*sin(1.3*x^2) + 0.00001*x^4 + 0.2*x+80
plot(fw, -50, 50, n = 1000, main = "optim() minimising 'wild function'")

res <- optim(50, fw, method = "SANN",
             control = list(maxit = 20000, temp = 20, parscale = 20))
res
## Now improve locally {typically only by a small bit}:
(r2 <- optim(res$par, fw, method = "BFGS"))
points(r2$par,  r2$value,  pch = 8, col = "red", cex = 2)

## Combinatorial optimization: Traveling salesman problem
library(stats) # normally loaded

eurodistmat <- as.matrix(eurodist)

distance <- function(sq) {  # Target function
    sq2 <- embed(sq, 2)
    sum(eurodistmat[cbind(sq2[,2], sq2[,1])])
}

genseq <- function(sq) {  # Generate new candidate sequence
    idx <- seq(2, NROW(eurodistmat)-1)
    changepoints <- sample(idx, size = 2, replace = FALSE)
    tmp <- sq[changepoints[1]]
    sq[changepoints[1]] <- sq[changepoints[2]]
    sq[changepoints[2]] <- tmp
    sq
}

sq <- c(1:nrow(eurodistmat), 1)  # Initial sequence: alphabetic
distance(sq)
# rotate for conventional orientation
loc <- -cmdscale(eurodist, add = TRUE)$points
x <- loc[,1]; y <- loc[,2]
s <- seq_len(nrow(eurodistmat))
tspinit <- loc[sq,]

plot(x, y, type = "n", asp = 1, xlab = "", ylab = "",
     main = "initial solution of traveling salesman problem", axes = FALSE)
arrows(tspinit[s,1], tspinit[s,2], tspinit[s+1,1], tspinit[s+1,2],
       angle = 10, col = "green")
text(x, y, labels(eurodist), cex = 0.8)

set.seed(123) # chosen to get a good soln relatively quickly
res <- optim(sq, distance, genseq, method = "SANN",
             control = list(maxit = 30000, temp = 2000, trace = TRUE,
                            REPORT = 500))
res  # Near optimum distance around 12842

tspres <- loc[res$par,]
plot(x, y, type = "n", asp = 1, xlab = "", ylab = "",
     main = "optim() 'solving' traveling salesman problem", axes = FALSE)
arrows(tspres[s,1], tspres[s,2], tspres[s+1,1], tspres[s+1,2],
       angle = 10, col = "red")
text(x, y, labels(eurodist), cex = 0.8)

## 1-D minimization: "Brent" or optimize() being preferred.. but NM may be ok and "unavoidable",
## ----------------   so we can suppress the check+warning :
system.time(rO <- optimize(function(x) (x-pi)^2, c(0, 10)))
system.time(ro <- optim(1, function(x) (x-pi)^2, control=list(warn.1d.NelderMead = FALSE)))
rO$minimum - pi # 0 (perfect), on one platform
ro$par - pi     # ~= 1.9e-4    on one platform
utils::str(ro)
}
