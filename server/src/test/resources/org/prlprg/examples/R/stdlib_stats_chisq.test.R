#? stdlib
`chisq.test` <- function (x, y = NULL, correct = TRUE, p = rep(1/length(x), length(x)), 
    rescale.p = FALSE, simulate.p.value = FALSE, B = 2000) 
{
    DNAME <- deparse(substitute(x))
    if (is.data.frame(x)) 
        x <- as.matrix(x)
    if (is.matrix(x)) {
        if (min(dim(x)) == 1L) 
            x <- as.vector(x)
    }
    if (!is.matrix(x) && !is.null(y)) {
        if (length(x) != length(y)) 
            stop("'x' and 'y' must have the same length")
        DNAME2 <- deparse(substitute(y))
        xname <- if (length(DNAME) > 1L || nchar(DNAME, "w") > 
            30) 
            ""
        else DNAME
        yname <- if (length(DNAME2) > 1L || nchar(DNAME2, "w") > 
            30) 
            ""
        else DNAME2
        OK <- complete.cases(x, y)
        x <- factor(x[OK])
        y <- factor(y[OK])
        if ((nlevels(x) < 2L) || (nlevels(y) < 2L)) 
            stop("'x' and 'y' must have at least 2 levels")
        x <- table(x, y)
        names(dimnames(x)) <- c(xname, yname)
        DNAME <- paste(paste(DNAME, collapse = "\n"), "and", 
            paste(DNAME2, collapse = "\n"))
    }
    if (any(x < 0) || anyNA(x)) 
        stop("all entries of 'x' must be nonnegative and finite")
    if ((n <- sum(x)) == 0) 
        stop("at least one entry of 'x' must be positive")
    if (simulate.p.value) {
        setMETH <- function() METHOD <<- paste(METHOD, "with simulated p-value\n\t (based on", 
            B, "replicates)")
        almost.1 <- 1 - 64 * .Machine$double.eps
    }
    if (is.matrix(x)) {
        METHOD <- "Pearson's Chi-squared test"
        nr <- as.integer(nrow(x))
        nc <- as.integer(ncol(x))
        if (is.na(nr) || is.na(nc) || is.na(nr * nc)) 
            stop("invalid nrow(x) or ncol(x)", domain = NA)
        sr <- rowSums(x)
        sc <- colSums(x)
        E <- outer(sr, sc)/n
        v <- function(r, c, n) c * r * (n - r) * (n - c)/n^3
        V <- outer(sr, sc, v, n)
        dimnames(E) <- dimnames(x)
        if (simulate.p.value && all(sr > 0) && all(sc > 0)) {
            setMETH()
            tmp <- .Call(C_chisq_sim, sr, sc, B, E)
            STATISTIC <- sum(sort((x - E)^2/E, decreasing = TRUE))
            PARAMETER <- NA
            PVAL <- (1 + sum(tmp >= almost.1 * STATISTIC))/(B + 
                1)
        }
        else {
            if (simulate.p.value) 
                warning("cannot compute simulated p-value with zero marginals")
            if (correct && nrow(x) == 2L && ncol(x) == 2L) {
                YATES <- min(0.5, abs(x - E))
                if (YATES > 0) 
                  METHOD <- paste(METHOD, "with Yates' continuity correction")
            }
            else YATES <- 0
            STATISTIC <- sum((abs(x - E) - YATES)^2/E)
            PARAMETER <- (nr - 1L) * (nc - 1L)
            PVAL <- pchisq(STATISTIC, PARAMETER, lower.tail = FALSE)
        }
    }
    else {
        if (length(dim(x)) > 2L) 
            stop("invalid 'x'")
        if (length(x) == 1L) 
            stop("'x' must at least have 2 elements")
        if (length(x) != length(p)) 
            stop("'x' and 'p' must have the same number of elements")
        if (any(p < 0)) 
            stop("probabilities must be non-negative.")
        if (abs(sum(p) - 1) > sqrt(.Machine$double.eps)) {
            if (rescale.p) 
                p <- p/sum(p)
            else stop("probabilities must sum to 1.")
        }
        METHOD <- "Chi-squared test for given probabilities"
        E <- n * p
        V <- n * p * (1 - p)
        STATISTIC <- sum((x - E)^2/E)
        names(E) <- names(x)
        if (simulate.p.value) {
            setMETH()
            nx <- length(x)
            sm <- matrix(sample.int(nx, B * n, TRUE, prob = p), 
                nrow = n)
            ss <- apply(sm, 2L, function(x, E, k) {
                sum((table(factor(x, levels = 1L:k)) - E)^2/E)
            }, E = E, k = nx)
            PARAMETER <- NA
            PVAL <- (1 + sum(ss >= almost.1 * STATISTIC))/(B + 
                1)
        }
        else {
            PARAMETER <- length(x) - 1
            PVAL <- pchisq(STATISTIC, PARAMETER, lower.tail = FALSE)
        }
    }
    names(STATISTIC) <- "X-squared"
    names(PARAMETER) <- "df"
    if (any(E < 5) && is.finite(PARAMETER)) 
        warning("Chi-squared approximation may be incorrect")
    structure(list(statistic = STATISTIC, parameter = PARAMETER, 
        p.value = PVAL, method = METHOD, data.name = DNAME, observed = x, 
        expected = E, residuals = (x - E)/sqrt(E), stdres = (x - 
            E)/sqrt(V)), class = "htest")
}

# Examples

## From Agresti(2007) p.39
M <- as.table(rbind(c(762, 327, 468), c(484, 239, 477)))
dimnames(M) <- list(gender = c("F", "M"),
                    party = c("Democrat","Independent", "Republican"))
(Xsq <- chisq.test(M))  # Prints test summary
Xsq$observed   # observed counts (same as M)
Xsq$expected   # expected counts under the null
Xsq$residuals  # Pearson residuals
Xsq$stdres     # standardized residuals


## Effect of simulating p-values
x <- matrix(c(12, 5, 7, 7), ncol = 2)
chisq.test(x)$p.value           # 0.4233
chisq.test(x, simulate.p.value = TRUE, B = 10000)$p.value
                                # around 0.29!

## Testing for population probabilities
## Case A. Tabulated data
x <- c(A = 20, B = 15, C = 25)
chisq.test(x)
chisq.test(as.table(x))             # the same
x <- c(89,37,30,28,2)
p <- c(40,20,20,15,5)
try(
chisq.test(x, p = p)                # gives an error
)
chisq.test(x, p = p, rescale.p = TRUE)
                                # works
p <- c(0.40,0.20,0.20,0.19,0.01)
                                # Expected count in category 5
                                # is 1.86 < 5 ==> chi square approx.
chisq.test(x, p = p)            #               maybe doubtful, but is ok!
chisq.test(x, p = p, simulate.p.value = TRUE)

## Case B. Raw data
x <- trunc(5 * runif(100))
chisq.test(table(x))            # NOT 'chisq.test(x)'!

