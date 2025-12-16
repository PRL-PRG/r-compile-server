#? stdlib
`influence.measures` <- function (model, infl = influence(model)) 
{
    is.influential <- function(infmat, n) {
        d <- dim(infmat)
        k <- d[[length(d)]] - 4L
        if (n <= k) 
            stop("too few cases i with h_ii > 0), n < k")
        absmat <- abs(infmat)
        r <- if (is.matrix(infmat)) {
            cbind(absmat[, 1L:k] > 1, absmat[, k + 1] > 3 * sqrt(k/(n - 
                k)), abs(1 - infmat[, k + 2]) > (3 * k)/(n - 
                k), pf(infmat[, k + 3], k, n - k) > 0.5, infmat[, 
                k + 4] > (3 * k)/n)
        }
        else {
            c(absmat[, , 1L:k] > 1, absmat[, , k + 1] > 3 * sqrt(k/(n - 
                k)), abs(1 - infmat[, , k + 2]) > (3 * k)/(n - 
                k), pf(infmat[, , k + 3], k, n - k) > 0.5, infmat[, 
                , k + 4] > (3 * k)/n)
        }
        attributes(r) <- attributes(infmat)
        r
    }
    p <- model$rank
    e <- weighted.residuals(model)
    s <- sqrt(sum(e^2, na.rm = TRUE)/df.residual(model))
    mqr <- qr.lm(model)
    xxi <- chol2inv(mqr$qr, mqr$rank)
    si <- infl$sigma
    h <- infl$hat
    is.mlm <- is.matrix(e)
    cf <- if (is.mlm) 
        aperm(infl$coefficients, c(1L, 3:2))
    else infl$coefficients
    dfbetas <- cf/outer(infl$sigma, sqrt(diag(xxi)))
    vn <- variable.names(model)
    vn[vn == "(Intercept)"] <- "1_"
    dimnames(dfbetas)[[length(dim(dfbetas))]] <- paste0("dfb.", 
        abbreviate(vn))
    dffits <- e * sqrt(h)/(si * (1 - h))
    if (any(ii <- is.infinite(dffits))) 
        dffits[ii] <- NaN
    cov.ratio <- (si/s)^(2 * p)/(1 - h)
    cooks.d <- if (inherits(model, "glm")) 
        (infl$pear.res/(1 - h))^2 * h/(summary(model)$dispersion * 
            p)
    else ((e/(s * (1 - h)))^2 * h)/p
    infmat <- if (is.mlm) {
        dns <- dimnames(dfbetas)
        dns[[3]] <- c(dns[[3]], "dffit", "cov.r", "cook.d", "hat")
        a <- array(dfbetas, dim = dim(dfbetas) + c(0, 0, 3 + 
            1), dimnames = dns)
        a[, , "dffit"] <- dffits
        a[, , "cov.r"] <- cov.ratio
        a[, , "cook.d"] <- cooks.d
        a[, , "hat"] <- h
        a
    }
    else {
        cbind(dfbetas, dffit = dffits, cov.r = cov.ratio, cook.d = cooks.d, 
            hat = h)
    }
    infmat[is.infinite(infmat)] <- NaN
    is.inf <- is.influential(infmat, sum(h > 0))
    ans <- list(infmat = infmat, is.inf = is.inf, call = model$call)
    class(ans) <- "infl"
    ans
}

# Examples
require(graphics)

## Analysis of the life-cycle savings data
## given in Belsley, Kuh and Welsch.
lm.SR <- lm(sr ~ pop15 + pop75 + dpi + ddpi, data = LifeCycleSavings)

inflm.SR <- influence.measures(lm.SR)
which(apply(inflm.SR$is.inf, 1, any))
# which observations 'are' influential
summary(inflm.SR) # only these
\donttest{inflm.SR          # all}
plot(rstudent(lm.SR) ~ hatvalues(lm.SR)) # recommended by some
plot(lm.SR, which = 5) # an enhanced version of that via plot(<lm>)

## The 'infl' argument is not needed, but avoids recomputation:
rs <- rstandard(lm.SR)
iflSR <- influence(lm.SR)
all.equal(rs, rstandard(lm.SR, infl = iflSR), tolerance = 1e-10)
## to "see" the larger values:
1000 * round(dfbetas(lm.SR, infl = iflSR), 3)
cat("PRESS :"); (PRESS <- sum( rstandard(lm.SR, type = "predictive")^2 ))
stopifnot(all.equal(PRESS, sum( (residuals(lm.SR) / (1 - iflSR$hat))^2)))

## Show that "PRE-residuals"  ==  L.O.O. Crossvalidation (CV) errors:
X <- model.matrix(lm.SR)
y <- model.response(model.frame(lm.SR))
## Leave-one-out CV least-squares prediction errors (relatively fast)
rCV <- vapply(seq_len(nrow(X)), function(i)
              y[i] - X[i,] %*% .lm.fit(X[-i,], y[-i])$coefficients,
              numeric(1))
## are the same as the *faster* rstandard(*, "pred") :
stopifnot(all.equal(rCV, unname(rstandard(lm.SR, type = "predictive"))))


## Huber's data [Atkinson 1985]
xh <- c(-4:0, 10)
yh <- c(2.48, .73, -.04, -1.44, -1.32, 0)
lmH <- lm(yh ~ xh)
\donttest{summary(lmH)}
im <- influence.measures(lmH)
\donttest{ im }
is.inf <- apply(im$is.inf, 1, any)
plot(xh,yh, main = "Huber's data: L.S. line and influential obs.")
abline(lmH); points(xh[is.inf], yh[is.inf], pch = 20, col = 2)

## Irwin's data [Williams 1987]
xi <- 1:5
yi <- c(0,2,14,19,30)    # number of mice responding to dose xi
mi <- rep(40, 5)         # number of mice exposed
glmI <- glm(cbind(yi, mi -yi) ~ xi, family = binomial)
\donttest{summary(glmI)}
signif(cooks.distance(glmI), 3)   # ~= Ci in Table 3, p.184
imI <- influence.measures(glmI)
\donttest{ imI }
stopifnot(all.equal(imI$infmat[,"cook.d"],
          cooks.distance(glmI)))

