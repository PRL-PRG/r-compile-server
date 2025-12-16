#? stdlib
`ansari.test.default` <- function (x, y, alternative = c("two.sided", "less", "greater"), 
    exact = NULL, conf.int = FALSE, conf.level = 0.95, ...) 
{
    alternative <- match.arg(alternative)
    if (conf.int) {
        if (!((length(conf.level) == 1L) && is.finite(conf.level) && 
            (conf.level > 0) && (conf.level < 1))) 
            stop("'conf.level' must be a single number between 0 and 1")
    }
    DNAME <- paste(deparse1(substitute(x)), "and", deparse1(substitute(y)))
    x <- x[complete.cases(x)]
    y <- y[complete.cases(y)]
    m <- as.integer(length(x))
    if (is.na(m) || m < 1L) 
        stop("not enough 'x' observations")
    n <- as.integer(length(y))
    if (is.na(n) || n < 1L) 
        stop("not enough 'y' observations")
    N <- m + n
    r <- rank(c(x, y))
    STATISTIC <- sum(pmin(r, N - r + 1)[seq_along(x)])
    TIES <- (length(r) != length(unique(r)))
    if (is.null(exact)) 
        exact <- ((m < 50L) && (n < 50L))
    if (exact && !TIES) {
        pansari <- function(q, m, n) .Call(C_pAnsari, q, m, n)
        PVAL <- switch(alternative, two.sided = {
            if (STATISTIC > ((m + 1)^2%/%4 + ((m * n)%/%2)/2)) p <- 1 - 
                pansari(STATISTIC - 1, m, n) else p <- pansari(STATISTIC, 
                m, n)
            min(2 * p, 1)
        }, less = 1 - pansari(STATISTIC - 1, m, n), greater = pansari(STATISTIC, 
            m, n))
        if (conf.int) {
            qansari <- function(p, m, n) .Call(C_qAnsari, p, 
                m, n)
            alpha <- 1 - conf.level
            x <- sort(x)
            y <- sort(y)
            ab <- function(sig) {
                rab <- rank(c(x/sig, y))
                sum(pmin(rab, N - rab + 1)[seq_along(x)])
            }
            ratio <- outer(x, y, `/`)
            aratio <- ratio[ratio >= 0]
            sigma <- sort(aratio)
            cci <- function(alpha) {
                u <- absigma - qansari(alpha/2, m, n)
                l <- absigma - qansari(1 - alpha/2, m, n)
                if (length(u[u >= 0]) == 0L || length(l[l > 0]) == 
                  0L) {
                  warning("samples differ in location: cannot compute confidence set, returning NA")
                  return(c(NA, NA))
                }
                u[u < 0] <- NA
                uci <- min(sigma[which(u == min(u, na.rm = TRUE))])
                l[l <= 0] <- NA
                lci <- max(sigma[which(l == min(l, na.rm = TRUE))])
                if (uci > lci) {
                  l <- absigma - qansari(alpha/2, m, n)
                  u <- absigma - qansari(1 - alpha/2, m, n)
                  u[u < 0] <- NA
                  uci <- min(sigma[which(u == min(u, na.rm = TRUE))])
                  l[l <= 0] <- NA
                  lci <- max(sigma[which(l == min(l, na.rm = TRUE))])
                }
                c(uci, lci)
            }
            cint <- if (length(sigma) < 1L) {
                warning("cannot compute confidence set, returning NA")
                c(NA, NA)
            }
            else {
                absigma <- sapply(sigma + c(diff(sigma)/2, sigma[length(sigma)] * 
                  1.01), ab)
                switch(alternative, two.sided = cci(alpha), greater = c(cci(alpha * 
                  2)[1L], Inf), less = c(0, cci(alpha * 2)[2L]))
            }
            attr(cint, "conf.level") <- conf.level
            u <- absigma - qansari(0.5, m, n)
            sgr <- if (length(sgr <- sigma[u <= 0]) == 0L) 
                NA
            else max(sgr)
            sle <- if (length(sle <- sigma[u > 0]) == 0L) 
                NA
            else min(sle)
            ESTIMATE <- mean(c(sle, sgr))
        }
    }
    else {
        EVEN <- ((N%%2L) == 0L)
        normalize <- function(s, r, TIES, m = length(x), n = length(y)) {
            z <- if (EVEN) 
                s - m * (N + 2)/4
            else s - m * (N + 1)^2/(4 * N)
            if (!TIES) {
                SIGMA <- if (EVEN) 
                  sqrt((m * n * (N + 2) * (N - 2))/(48 * (N - 
                    1)))
                else sqrt((m * n * (N + 1) * (3 + N^2))/(48 * 
                  N^2))
            }
            else {
                r <- rle(sort(pmin(r, N - r + 1)))
                SIGMA <- if (EVEN) 
                  sqrt(m * n * (16 * sum(r$lengths * r$values^2) - 
                    N * (N + 2)^2)/(16 * N * (N - 1)))
                else sqrt(m * n * (16 * N * sum(r$lengths * r$values^2) - 
                  (N + 1)^4)/(16 * N^2 * (N - 1)))
            }
            z/SIGMA
        }
        p <- pnorm(normalize(STATISTIC, r, TIES))
        PVAL <- switch(alternative, two.sided = 2 * min(p, 1 - 
            p), less = 1 - p, greater = p)
        if (conf.int && !exact) {
            alpha <- 1 - conf.level
            ab2 <- function(sig, zq) {
                r <- rank(c(x/sig, y))
                s <- sum(pmin(r, N - r + 1)[seq_along(x)])
                TIES <- (length(r) != length(unique(r)))
                normalize(s, r, TIES, length(x), length(y)) - 
                  zq
            }
            srangepos <- NULL
            srangeneg <- NULL
            if (length(x[x > 0]) && length(y[y > 0])) 
                srangepos <- c(min(x[x > 0], na.rm = TRUE)/max(y[y > 
                  0], na.rm = TRUE), max(x[x > 0], na.rm = TRUE)/min(y[y > 
                  0], na.rm = TRUE))
            if (length(x[x <= 0]) && length(y[y < 0])) 
                srangeneg <- c(min(x[x <= 0], na.rm = TRUE)/max(y[y < 
                  0], na.rm = TRUE), max(x[x <= 0], na.rm = TRUE)/min(y[y < 
                  0], na.rm = TRUE))
            if (any(is.infinite(c(srangepos, srangeneg)))) {
                warning("cannot compute asymptotic confidence set or estimator")
                conf.int <- FALSE
            }
            else {
                ccia <- function(alpha) {
                  statu <- ab2(srange[1L], zq = qnorm(alpha/2))
                  statl <- ab2(srange[2L], zq = qnorm(alpha/2, 
                    lower.tail = FALSE))
                  if (statu > 0 || statl < 0) {
                    warning("samples differ in location: cannot compute confidence set, returning NA")
                    return(c(NA, NA))
                  }
                  u <- uniroot(ab2, srange, tol = 1e-04, zq = qnorm(alpha/2))$root
                  l <- uniroot(ab2, srange, tol = 1e-04, zq = qnorm(alpha/2, 
                    lower.tail = FALSE))$root
                  sort(c(u, l))
                }
                srange <- range(c(srangepos, srangeneg), na.rm = FALSE)
                cint <- switch(alternative, two.sided = ccia(alpha), 
                  greater = c(ccia(alpha * 2)[1L], Inf), less = c(0, 
                    ccia(alpha * 2)[2L]))
                attr(cint, "conf.level") <- conf.level
                statu <- ab2(srange[1L], zq = 0)
                statl <- ab2(srange[2L], zq = 0)
                if (statu > 0 || statl < 0) {
                  ESTIMATE <- NA
                  warning("cannot compute estimate, returning NA")
                }
                else ESTIMATE <- uniroot(ab2, srange, tol = 1e-04, 
                  zq = 0)$root
            }
        }
        if (exact && TIES) {
            warning("cannot compute exact p-value with ties")
            if (conf.int) 
                warning("cannot compute exact confidence intervals with ties")
        }
    }
    names(STATISTIC) <- "AB"
    RVAL <- list(statistic = STATISTIC, p.value = PVAL, null.value = c(`ratio of scales` = 1), 
        alternative = alternative, method = "Ansari-Bradley test", 
        data.name = DNAME)
    if (conf.int) 
        RVAL <- c(RVAL, list(conf.int = cint, estimate = c(`ratio of scales` = ESTIMATE)))
    class(RVAL) <- "htest"
    return(RVAL)
}
