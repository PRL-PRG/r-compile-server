#? stdlib
`summary.manova` <- function (object, test = c("Pillai", "Wilks", "Hotelling-Lawley", 
    "Roy"), intercept = FALSE, tol = 1e-07, ...) 
{
    if (!inherits(object, "maov")) 
        stop(gettextf("object must be of class %s or %s", dQuote("manova"), 
            dQuote("maov")), domain = NA)
    test <- match.arg(test)
    asgn <- object$assign[object$qr$pivot[1L:object$rank]]
    uasgn <- unique(asgn)
    nterms <- length(uasgn)
    effects <- object$effects
    if (!is.null(effects)) 
        effects <- as.matrix(effects)[seq_along(asgn), , drop = FALSE]
    rdf <- object$df.residual
    nmeffect <- c("(Intercept)", attr(object$terms, "term.labels"))
    resid <- as.matrix(object$residuals)
    wt <- object$weights
    if (!is.null(wt)) 
        resid <- resid * sqrt(wt)
    nresp <- NCOL(resid)
    if (nresp <= 1) 
        stop("need multiple responses")
    if (is.null(effects)) {
        df <- nterms <- 0
        ss <- list(0)
        nmrows <- character()
    }
    else {
        df <- numeric(nterms)
        ss <- list(nterms)
        nmrows <- character(nterms)
        for (i in seq(nterms)) {
            ai <- (asgn == uasgn[i])
            nmrows[i] <- nmeffect[1 + uasgn[i]]
            df[i] <- sum(ai)
            ss[[i]] <- crossprod(effects[ai, , drop = FALSE])
        }
    }
    pm <- pmatch("(Intercept)", nmrows, 0L)
    if (!intercept && pm > 0) {
        nterms <- nterms - 1
        df <- df[-pm]
        nmrows <- nmrows[-pm]
        ss <- ss[-pm]
    }
    names(ss) <- nmrows
    nt <- nterms
    if (rdf > 0) {
        nt <- nterms + 1
        df[nt] <- rdf
        ss[[nt]] <- crossprod(resid)
        names(ss)[nt] <- nmrows[nt] <- "Residuals"
        ok <- df[-nt] > 0
        eigs <- array(NA, c(nterms, nresp), dimnames = list(nmrows[-nt], 
            NULL))
        stats <- matrix(NA, nt, 5, dimnames = list(nmrows, c(test, 
            "approx F", "num Df", "den Df", "Pr(>F)")))
        sc <- sqrt(sss <- diag(ss[[nt]]))
        for (i in seq_len(nterms)[ok]) sss <- sss + diag(ss[[i]])
        sc[sc < sqrt(sss) * 1e-06] <- 1
        D <- diag(1/sc)
        rss.qr <- qr(D %*% ss[[nt]] %*% D, tol = tol)
        if (rss.qr$rank < ncol(resid)) 
            stop(gettextf("residuals have rank %d < %d", rss.qr$rank, 
                ncol(resid)), domain = NA)
        if (!is.null(rss.qr)) 
            for (i in seq_len(nterms)[ok]) {
                A1 <- qr.coef(rss.qr, D %*% ss[[i]] %*% D)
                eigs[i, ] <- Re(eigen(A1, symmetric = FALSE, 
                  only.values = TRUE)$values)
                stats[i, 1L:4L] <- switch(test, Pillai = Pillai(eigs[i, 
                  ], df[i], df[nt]), Wilks = Wilks(eigs[i, ], 
                  df[i], df[nt]), `Hotelling-Lawley` = HL(eigs[i, 
                  ], df[i], df[nt]), Roy = Roy(eigs[i, ], df[i], 
                  df[nt]))
                ok <- stats[, 2L] >= 0 & stats[, 3L] > 0 & stats[, 
                  4L] > 0
                ok <- !is.na(ok) & ok
                stats[ok, 5L] <- pf(stats[ok, 2L], stats[ok, 
                  3L], stats[ok, 4L], lower.tail = FALSE)
            }
        x <- list(row.names = nmrows, SS = ss, Eigenvalues = eigs, 
            stats = cbind(Df = df, stats = stats))
    }
    else x <- list(row.names = nmrows, SS = ss, Df = df)
    class(x) <- "summary.manova"
    x
}

# Examples\donttest{
## Example on producing plastic film from Krzanowski (1998, p. 381)
tear <- c(6.5, 6.2, 5.8, 6.5, 6.5, 6.9, 7.2, 6.9, 6.1, 6.3,
          6.7, 6.6, 7.2, 7.1, 6.8, 7.1, 7.0, 7.2, 7.5, 7.6)
gloss <- c(9.5, 9.9, 9.6, 9.6, 9.2, 9.1, 10.0, 9.9, 9.5, 9.4,
           9.1, 9.3, 8.3, 8.4, 8.5, 9.2, 8.8, 9.7, 10.1, 9.2)
opacity <- c(4.4, 6.4, 3.0, 4.1, 0.8, 5.7, 2.0, 3.9, 1.9, 5.7,
             2.8, 4.1, 3.8, 1.6, 3.4, 8.4, 5.2, 6.9, 2.7, 1.9)
Y <- cbind(tear, gloss, opacity)
rate     <- gl(2,10, labels = c("Low", "High"))
additive <- gl(2, 5, length = 20, labels = c("Low", "High"))

fit <- manova(Y ~ rate * additive)
summary.aov(fit)             # univariate ANOVA tables
summary(fit, test = "Wilks") # ANOVA table of Wilks' lambda
summary(fit)                # same F statistics as single-df terms
}
