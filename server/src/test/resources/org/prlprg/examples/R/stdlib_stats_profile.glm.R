#? stdlib
`profile.glm` <- function (fitted, which = 1:p, alpha = 0.01, maxsteps = 10, del = zmax/5, 
    trace = FALSE, test = c("LRT", "Rao"), ...) 
{
    test <- match.arg(test)
    Pnames <- names(B0 <- coef(fitted))
    nonA <- !is.na(B0)
    pv0 <- t(as.matrix(B0))
    p <- length(Pnames)
    if (is.character(which)) 
        which <- match(which, Pnames)
    summ <- summary(fitted)
    std.err <- summ$coefficients[, "Std. Error", drop = FALSE]
    mf <- model.frame(fitted)
    Y <- model.response(mf)
    n <- NROW(Y)
    O <- model.offset(mf)
    if (!length(O)) 
        O <- rep(0, n)
    W <- model.weights(mf)
    if (length(W) == 0L) 
        W <- rep(1, n)
    OriginalDeviance <- deviance(fitted)
    DispersionParameter <- summ$dispersion
    X <- model.matrix(fitted)
    fam <- family(fitted)
    switch(fam$family, binomial = , poisson = , `Negative Binomial` = {
        zmax <- sqrt(qchisq(1 - alpha, 1))
        profName <- "z"
    }, gaussian = , quasi = , inverse.gaussian = , quasibinomial = , 
        quasipoisson = , {
            zmax <- sqrt(qf(1 - alpha, 1, n - p))
            profName <- "tau"
        })
    prof <- vector("list", length = length(which))
    names(prof) <- Pnames[which]
    for (i in which) {
        if (!nonA[i]) 
            next
        zi <- 0
        pvi <- pv0
        a <- nonA
        a[i] <- FALSE
        Xi <- X[, a, drop = FALSE]
        pi <- Pnames[i]
        for (sgn in c(-1, 1)) {
            if (trace) 
                message("\nParameter: ", pi, " ", c("down", "up")[(sgn + 
                  1)/2 + 1])
            step <- 0
            z <- 0
            LP <- X[, nonA, drop = FALSE] %*% B0[nonA] + O
            while ((step <- step + 1) < maxsteps && abs(z) < 
                zmax) {
                bi <- B0[i] + sgn * step * del * std.err[Pnames[i], 
                  1]
                o <- O + X[, i] * bi
                fm <- glm.fit(x = Xi, y = Y, weights = W, etastart = LP, 
                  offset = o, family = fam, control = fitted$control)
                LP <- Xi %*% fm$coefficients + o
                ri <- pv0
                ri[, names(coef(fm))] <- coef(fm)
                ri[, pi] <- bi
                pvi <- rbind(pvi, ri)
                zz <- (fm$deviance - OriginalDeviance)/DispersionParameter
                if (zz > -0.001) 
                  zz <- max(zz, 0)
                else stop("profiling has found a better solution, so original fit had not converged")
                if (test == "Rao") {
                  r <- fm$residuals
                  w <- fm$weights
                  fml <- glm.fit(x = X, y = r, weights = w, control = fitted$control, 
                    intercept = FALSE)
                  zz <- (fml$null.deviance - fml$deviance)/DispersionParameter
                  zz <- max(zz, 0)
                }
                z <- sgn * sqrt(zz)
                zi <- c(zi, z)
            }
        }
        si <- order(zi)
        prof[[pi]] <- structure(data.frame(zi[si]), names = profName)
        prof[[pi]]$par.vals <- pvi[si, , drop = FALSE]
    }
    val <- structure(prof, original.fit = fitted, summary = summ)
    class(val) <- c("profile.glm", "profile")
    attr(val, "test") <- test
    val
}

# Examples
options(contrasts = c("contr.treatment", "contr.poly"))
ldose <- rep(0:5, 2)
numdead <- c(1, 4, 9, 13, 18, 20, 0, 2, 6, 10, 12, 16)
sex <- factor(rep(c("M", "F"), c(6, 6)))
SF <- cbind(numdead, numalive = 20 - numdead)
budworm.lg <- glm(SF ~ sex*ldose, family = binomial)
pr1 <- profile(budworm.lg)
plot(pr1)
pairs(pr1)

