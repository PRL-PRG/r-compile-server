#? stdlib
`wilcox.test.default` <- function (x, y = NULL, alternative = c("two.sided", "less", "greater"), 
    mu = 0, paired = FALSE, exact = NULL, correct = TRUE, conf.int = FALSE, 
    conf.level = 0.95, tol.root = 1e-04, digits.rank = Inf, ...) 
{
    alternative <- match.arg(alternative)
    if (!missing(mu) && ((length(mu) > 1L) || !is.finite(mu))) 
        stop("'mu' must be a single number")
    if (conf.int) {
        if (!((length(conf.level) == 1L) && is.finite(conf.level) && 
            (conf.level > 0) && (conf.level < 1))) 
            stop("'conf.level' must be a single number between 0 and 1")
    }
    if (!is.numeric(x)) 
        stop("'x' must be numeric")
    if (!is.null(y)) {
        if (!is.numeric(y)) 
            stop("'y' must be numeric")
        DNAME <- paste(deparse1(substitute(x)), "and", deparse1(substitute(y)))
        if (paired) {
            if (length(x) != length(y)) 
                stop("'x' and 'y' must have the same length")
            OK <- complete.cases(x, y)
            x <- x[OK] - y[OK]
            y <- NULL
        }
        else {
            y <- y[!is.na(y)]
        }
    }
    else {
        DNAME <- deparse1(substitute(x))
        if (paired) 
            stop("'y' is missing for paired test")
    }
    x <- x[!is.na(x)]
    if (length(x) < 1L) 
        stop("not enough (non-missing) 'x' observations")
    CORRECTION <- 0
    if (is.null(y)) {
        METHOD <- "Wilcoxon signed rank test"
        x <- x - mu
        ZEROES <- any(x == 0)
        if (ZEROES) 
            x <- x[x != 0]
        n <- as.double(length(x))
        if (is.null(exact)) 
            exact <- (n < 50)
        r <- rank(abs(if (is.finite(digits.rank)) signif(x, digits.rank) else x))
        STATISTIC <- setNames(sum(r[x > 0]), "V")
        TIES <- length(r) != length(unique(r))
        if (exact && !TIES && !ZEROES) {
            METHOD <- sub("test", "exact test", METHOD, fixed = TRUE)
            PVAL <- switch(alternative, two.sided = {
                p <- if (STATISTIC > (n * (n + 1)/4)) psignrank(STATISTIC - 
                  1, n, lower.tail = FALSE) else psignrank(STATISTIC, 
                  n)
                min(2 * p, 1)
            }, greater = psignrank(STATISTIC - 1, n, lower.tail = FALSE), 
                less = psignrank(STATISTIC, n))
            if (conf.int) {
                x <- x + mu
                alpha <- 1 - conf.level
                diffs <- outer(x, x, `+`)
                diffs <- sort(diffs[!lower.tri(diffs)])/2
                cint <- switch(alternative, two.sided = {
                  qu <- qsignrank(alpha/2, n)
                  if (qu == 0) qu <- 1
                  ql <- n * (n + 1)/2 - qu
                  achieved.alpha <- 2 * psignrank(trunc(qu) - 
                    1, n)
                  c(diffs[qu], diffs[ql + 1])
                }, greater = {
                  qu <- qsignrank(alpha, n)
                  if (qu == 0) qu <- 1
                  achieved.alpha <- psignrank(trunc(qu) - 1, 
                    n)
                  c(diffs[qu], +Inf)
                }, less = {
                  qu <- qsignrank(alpha, n)
                  if (qu == 0) qu <- 1
                  ql <- n * (n + 1)/2 - qu
                  achieved.alpha <- psignrank(trunc(qu) - 1, 
                    n)
                  c(-Inf, diffs[ql + 1])
                })
                if (achieved.alpha - alpha > alpha/2) {
                  warning("requested conf.level not achievable")
                  conf.level <- 1 - signif(achieved.alpha, 2)
                }
                attr(cint, "conf.level") <- conf.level
                ESTIMATE <- c(`(pseudo)median` = median(diffs))
            }
        }
        else {
            NTIES <- table(r)
            z <- STATISTIC - n * (n + 1)/4
            SIGMA <- sqrt(n * (n + 1) * (2 * n + 1)/24 - sum(NTIES^3 - 
                NTIES)/48)
            if (correct) {
                CORRECTION <- switch(alternative, two.sided = sign(z) * 
                  0.5, greater = 0.5, less = -0.5)
                METHOD <- paste(METHOD, "with continuity correction")
            }
            z <- (z - CORRECTION)/SIGMA
            PVAL <- switch(alternative, less = pnorm(z), greater = pnorm(z, 
                lower.tail = FALSE), two.sided = 2 * min(pnorm(z), 
                pnorm(z, lower.tail = FALSE)))
            if (conf.int) {
                x <- x + mu
                alpha <- 1 - conf.level
                if (n > 0) {
                  mumin <- min(x)
                  mumax <- max(x)
                  W <- function(d) {
                    xd <- x - d
                    xd <- xd[xd != 0]
                    nx <- length(xd)
                    dr <- rank(abs(if (is.finite(digits.rank)) signif(xd, 
                      digits.rank) else xd))
                    zd <- sum(dr[xd > 0]) - nx * (nx + 1)/4
                    NTIES.CI <- table(dr)
                    SIGMA.CI <- sqrt(nx * (nx + 1) * (2 * nx + 
                      1)/24 - sum(NTIES.CI^3 - NTIES.CI)/48)
                    if (SIGMA.CI == 0) 
                      warning("cannot compute confidence interval when all observations are zero or tied", 
                        call. = FALSE)
                    CORRECTION.CI <- if (correct) {
                      switch(alternative, two.sided = sign(zd) * 
                        0.5, greater = 0.5, less = -0.5)
                    }
                    else 0
                    (zd - CORRECTION.CI)/SIGMA.CI
                  }
                  Wmumin <- W(mumin)
                  Wmumax <- if (!is.finite(Wmumin)) 
                    NA
                  else W(mumax)
                }
                if (n == 0 || !is.finite(Wmumax)) {
                  cint <- structure(c(if (alternative == "less") -Inf else NaN, 
                    if (alternative == "greater") +Inf else NaN), 
                    conf.level = 0)
                  ESTIMATE <- if (n > 0) 
                    c(midrange = (mumin + mumax)/2)
                  else NaN
                }
                else {
                  wdiff <- function(d, zq) W(d) - zq
                  root <- function(zq) {
                    uniroot(wdiff, lower = mumin, upper = mumax, 
                      f.lower = Wmumin - zq, f.upper = Wmumax - 
                        zq, tol = tol.root, zq = zq)$root
                  }
                  cint <- switch(alternative, two.sided = {
                    repeat {
                      mindiff <- Wmumin - qnorm(alpha/2, lower.tail = FALSE)
                      maxdiff <- Wmumax - qnorm(alpha/2)
                      if (mindiff < 0 || maxdiff > 0) alpha <- alpha * 
                        2 else break
                    }
                    if (alpha >= 1 || 1 - conf.level < alpha * 
                      0.75) {
                      conf.level <- 1 - pmin(1, alpha)
                      warning("requested conf.level not achievable")
                    }
                    if (alpha < 1) {
                      l <- root(zq = qnorm(alpha/2, lower.tail = FALSE))
                      u <- root(zq = qnorm(alpha/2))
                      c(l, u)
                    } else {
                      rep(median(x), 2)
                    }
                  }, greater = {
                    repeat {
                      mindiff <- Wmumin - qnorm(alpha, lower.tail = FALSE)
                      if (mindiff < 0) alpha <- alpha * 2 else break
                    }
                    if (alpha >= 1 || 1 - conf.level < alpha * 
                      0.75) {
                      conf.level <- 1 - pmin(1, alpha)
                      warning("requested conf.level not achievable")
                    }
                    l <- if (alpha < 1) root(zq = qnorm(alpha, 
                      lower.tail = FALSE)) else median(x)
                    c(l, +Inf)
                  }, less = {
                    repeat {
                      maxdiff <- Wmumax - qnorm(alpha/2)
                      if (maxdiff > 0) alpha <- alpha * 2 else break
                    }
                    if (alpha >= 1 || 1 - conf.level < alpha * 
                      0.75) {
                      conf.level <- 1 - pmin(1, alpha)
                      warning("requested conf.level not achievable")
                    }
                    u <- if (alpha < 1) root(zq = qnorm(alpha)) else median(x)
                    c(-Inf, u)
                  })
                  attr(cint, "conf.level") <- conf.level
                  correct <- FALSE
                  ESTIMATE <- c(`(pseudo)median` = uniroot(W, 
                    lower = mumin, upper = mumax, tol = tol.root)$root)
                }
            }
            if (exact && TIES) {
                warning("cannot compute exact p-value with ties")
                if (conf.int) 
                  warning("cannot compute exact confidence interval with ties")
            }
            if (exact && ZEROES) {
                warning("cannot compute exact p-value with zeroes")
                if (conf.int) 
                  warning("cannot compute exact confidence interval with zeroes")
            }
        }
    }
    else {
        if (length(y) < 1L) 
            stop("not enough 'y' observations")
        METHOD <- "Wilcoxon rank sum test"
        r <- c(x - mu, y)
        r <- rank(if (is.finite(digits.rank)) 
            signif(r, digits.rank)
        else r)
        n.x <- as.double(length(x))
        n.y <- as.double(length(y))
        if (is.null(exact)) 
            exact <- (n.x < 50) && (n.y < 50)
        STATISTIC <- c(W = sum(r[seq_along(x)]) - n.x * (n.x + 
            1)/2)
        TIES <- (length(r) != length(unique(r)))
        if (exact && !TIES) {
            METHOD <- sub("test", "exact test", METHOD, fixed = TRUE)
            PVAL <- switch(alternative, two.sided = {
                p <- if (STATISTIC > (n.x * n.y/2)) pwilcox(STATISTIC - 
                  1, n.x, n.y, lower.tail = FALSE) else pwilcox(STATISTIC, 
                  n.x, n.y)
                min(2 * p, 1)
            }, greater = {
                pwilcox(STATISTIC - 1, n.x, n.y, lower.tail = FALSE)
            }, less = pwilcox(STATISTIC, n.x, n.y))
            if (conf.int) {
                alpha <- 1 - conf.level
                diffs <- sort(outer(x, y, `-`))
                cint <- switch(alternative, two.sided = {
                  qu <- qwilcox(alpha/2, n.x, n.y)
                  if (qu == 0) qu <- 1
                  ql <- n.x * n.y - qu
                  achieved.alpha <- 2 * pwilcox(trunc(qu) - 1, 
                    n.x, n.y)
                  c(diffs[qu], diffs[ql + 1])
                }, greater = {
                  qu <- qwilcox(alpha, n.x, n.y)
                  if (qu == 0) qu <- 1
                  achieved.alpha <- pwilcox(trunc(qu) - 1, n.x, 
                    n.y)
                  c(diffs[qu], +Inf)
                }, less = {
                  qu <- qwilcox(alpha, n.x, n.y)
                  if (qu == 0) qu <- 1
                  ql <- n.x * n.y - qu
                  achieved.alpha <- pwilcox(trunc(qu) - 1, n.x, 
                    n.y)
                  c(-Inf, diffs[ql + 1])
                })
                if (achieved.alpha - alpha > alpha/2) {
                  warning("Requested conf.level not achievable")
                  conf.level <- 1 - achieved.alpha
                }
                attr(cint, "conf.level") <- conf.level
                ESTIMATE <- c(`difference in location` = median(diffs))
            }
        }
        else {
            NTIES <- table(r)
            z <- STATISTIC - n.x * n.y/2
            SIGMA <- sqrt((n.x * n.y/12) * ((n.x + n.y + 1) - 
                sum(NTIES^3 - NTIES)/((n.x + n.y) * (n.x + n.y - 
                  1))))
            if (correct) {
                CORRECTION <- switch(alternative, two.sided = sign(z) * 
                  0.5, greater = 0.5, less = -0.5)
                METHOD <- paste(METHOD, "with continuity correction")
            }
            z <- (z - CORRECTION)/SIGMA
            PVAL <- switch(alternative, less = pnorm(z), greater = pnorm(z, 
                lower.tail = FALSE), two.sided = 2 * min(pnorm(z), 
                pnorm(z, lower.tail = FALSE)))
            if (conf.int) {
                alpha <- 1 - conf.level
                mumin <- min(x) - max(y)
                mumax <- max(x) - min(y)
                W <- function(d) {
                  dr <- c(x - d, y)
                  dr <- rank(if (is.finite(digits.rank)) 
                    signif(dr, digits.rank)
                  else dr)
                  NTIES.CI <- table(dr)
                  dz <- sum(dr[seq_along(x)]) - n.x * (n.x + 
                    1)/2 - n.x * n.y/2
                  CORRECTION.CI <- if (correct) {
                    switch(alternative, two.sided = sign(dz) * 
                      0.5, greater = 0.5, less = -0.5)
                  }
                  else 0
                  SIGMA.CI <- sqrt((n.x * n.y/12) * ((n.x + n.y + 
                    1) - sum(NTIES.CI^3 - NTIES.CI)/((n.x + n.y) * 
                    (n.x + n.y - 1))))
                  if (SIGMA.CI == 0) 
                    warning("cannot compute confidence interval when all observations are tied", 
                      call. = FALSE)
                  (dz - CORRECTION.CI)/SIGMA.CI
                }
                wdiff <- function(d, zq) W(d) - zq
                Wmumin <- W(mumin)
                Wmumax <- W(mumax)
                root <- function(zq) {
                  f.lower <- Wmumin - zq
                  if (f.lower <= 0) 
                    return(mumin)
                  f.upper <- Wmumax - zq
                  if (f.upper >= 0) 
                    return(mumax)
                  uniroot(wdiff, lower = mumin, upper = mumax, 
                    f.lower = f.lower, f.upper = f.upper, tol = tol.root, 
                    zq = zq)$root
                }
                cint <- switch(alternative, two.sided = {
                  l <- root(zq = qnorm(alpha/2, lower.tail = FALSE))
                  u <- root(zq = qnorm(alpha/2))
                  c(l, u)
                }, greater = {
                  l <- root(zq = qnorm(alpha, lower.tail = FALSE))
                  c(l, +Inf)
                }, less = {
                  u <- root(zq = qnorm(alpha))
                  c(-Inf, u)
                })
                attr(cint, "conf.level") <- conf.level
                correct <- FALSE
                ESTIMATE <- c(`difference in location` = uniroot(W, 
                  lower = mumin, upper = mumax, tol = tol.root)$root)
            }
            if (exact && TIES) {
                warning("cannot compute exact p-value with ties")
                if (conf.int) 
                  warning("cannot compute exact confidence intervals with ties")
            }
        }
    }
    names(mu) <- if (paired || !is.null(y)) 
        "location shift"
    else "location"
    RVAL <- list(statistic = STATISTIC, parameter = NULL, p.value = as.numeric(PVAL), 
        null.value = mu, alternative = alternative, method = METHOD, 
        data.name = DNAME)
    if (conf.int) 
        RVAL <- c(RVAL, list(conf.int = cint, estimate = ESTIMATE))
    class(RVAL) <- "htest"
    RVAL
}
