#? stdlib
`ls.diag` <- function (ls.out) 
{
    resids <- as.matrix(ls.out$residuals)
    d0 <- dim(resids)
    xnames <- colnames(ls.out$qr$qr)
    yname <- colnames(resids)
    good <- complete.cases(resids, ls.out$wt)
    if (any(!good)) {
        warning("missing observations deleted")
        resids <- resids[good, , drop = FALSE]
    }
    if (!is.null(ls.out$wt)) {
        if (any(ls.out$wt[good] == 0)) 
            warning("observations with 0 weight not used in calculating standard deviation")
        resids <- resids * sqrt(ls.out$wt[good])
    }
    p <- ls.out$qr$rank
    n <- nrow(resids)
    hatdiag <- rep.int(NA_real_, d0[1L])
    stats <- array(NA_real_, dim = d0)
    colnames(stats) <- yname
    stdres <- studres <- dfits <- Cooks <- stats
    q <- qr.qy(ls.out$qr, rbind(diag(p), matrix(0, nrow = n - 
        p, ncol = p)))
    hatdiag[good] <- rowSums(as.matrix(q^2))
    stddev <- sqrt(colSums(as.matrix(resids^2))/(n - p))
    stddevmat <- matrix(stddev, nrow = sum(good), ncol = ncol(resids), 
        byrow = TRUE)
    stdres[good, ] <- resids/(sqrt(1 - hatdiag[good]) * stddevmat)
    studres[good, ] <- (stdres[good, ] * stddevmat)/sqrt(((n - 
        p) * stddevmat^2 - resids^2/(1 - hatdiag[good]))/(n - 
        p - 1))
    dfits[good, ] <- sqrt(hatdiag[good]/(1 - hatdiag[good])) * 
        studres[good, ]
    Cooks[good, ] <- ((stdres[good, ]^2 * hatdiag[good])/p)/(1 - 
        hatdiag[good])
    if (ncol(resids) == 1 && is.null(yname)) {
        stdres <- as.vector(stdres)
        Cooks <- as.vector(Cooks)
        studres <- as.vector(studres)
        dfits <- as.vector(dfits)
    }
    qr <- as.matrix(ls.out$qr$qr[1L:p, 1L:p])
    qr[row(qr) > col(qr)] <- 0
    covmat.unscaled <- tcrossprod(solve(qr))
    dimnames(covmat.unscaled) <- list(xnames, xnames)
    covmat.scaled <- sum(stddev^2) * covmat.unscaled
    cormat <- covmat.scaled/sqrt(outer(diag(covmat.scaled), diag(covmat.scaled)))
    stderr <- outer(sqrt(diag(covmat.unscaled)), stddev)
    dimnames(stderr) <- list(xnames, yname)
    return(list(std.dev = stddev, hat = hatdiag, std.res = stdres, 
        stud.res = studres, cooks = Cooks, dfits = dfits, correlation = cormat, 
        std.err = stderr, cov.scaled = covmat.scaled, cov.unscaled = covmat.unscaled))
}

# Examples
utils::example("lm", echo = FALSE)
##-- Using the same data as the lm(.) example:
lsD9 <- lsfit(x = as.numeric(gl(2, 10, 20)), y = weight)
dlsD9 <- ls.diag(lsD9)
\donttest{utils::str(dlsD9, give.attr = FALSE)}
abs(1 - sum(dlsD9$hat) / 2) < 10*.Machine$double.eps # sum(h.ii) = p
plot(dlsD9$hat, dlsD9$stud.res, xlim = c(0, 0.11))
abline(h = 0, lty = 2, col = "lightgray")

