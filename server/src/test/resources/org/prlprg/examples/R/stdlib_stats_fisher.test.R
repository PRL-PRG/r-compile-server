#? stdlib
`fisher.test` <- function (x, y = NULL, workspace = 2e+05, hybrid = FALSE, hybridPars = c(expect = 5, 
    percent = 80, Emin = 1), control = list(), or = 1, alternative = "two.sided", 
    conf.int = TRUE, conf.level = 0.95, simulate.p.value = FALSE, 
    B = 2000) 
{
    DNAME <- deparse1(substitute(x))
    METHOD <- "Fisher's Exact Test for Count Data"
    if (is.data.frame(x)) 
        x <- as.matrix(x)
    if (is.matrix(x)) {
        if (any(dim(x) < 2L)) 
            stop("'x' must have at least 2 rows and columns")
        if (!is.numeric(x) || any(x < 0) || anyNA(x)) 
            stop("all entries of 'x' must be nonnegative and finite")
        if (!is.integer(x)) {
            xo <- x
            x <- round(x)
            if (any(x > .Machine$integer.max)) 
                stop("'x' has entries too large to be integer")
            if (!identical(TRUE, (ax <- all.equal(xo, x)))) 
                warning(gettextf("'x' has been rounded to integer: %s", 
                  ax), domain = NA)
            storage.mode(x) <- "integer"
        }
    }
    else {
        if (is.null(y)) 
            stop("if 'x' is not a matrix, 'y' must be given")
        if (length(x) != length(y)) 
            stop("'x' and 'y' must have the same length")
        DNAME <- paste(DNAME, "and", deparse1(substitute(y)))
        OK <- complete.cases(x, y)
        x <- as.factor(x[OK])
        y <- as.factor(y[OK])
        if ((nlevels(x) < 2L) || (nlevels(y) < 2L)) 
            stop("'x' and 'y' must have at least 2 levels")
        x <- table(x, y)
    }
    con <- list(mult = 30)
    con[names(control)] <- control
    if ((mult <- as.integer(con$mult)) < 2) 
        stop("'mult' must be integer >= 2, typically = 30")
    nr <- nrow(x)
    nc <- ncol(x)
    have.2x2 <- (nr == 2) && (nc == 2)
    if (have.2x2) {
        alternative <- char.expand(alternative, c("two.sided", 
            "less", "greater"))
        if (length(alternative) > 1L || is.na(alternative)) 
            stop("alternative must be \"two.sided\", \"less\" or \"greater\"")
        if (!((length(conf.level) == 1L) && is.finite(conf.level) && 
            (conf.level > 0) && (conf.level < 1))) 
            stop("'conf.level' must be a single number between 0 and 1")
        if (!missing(or) && (length(or) > 1L || is.na(or) || 
            or < 0)) 
            stop("'or' must be a single number between 0 and Inf")
    }
    PVAL <- NULL
    if (!have.2x2) {
        if (simulate.p.value) {
            sr <- rowSums(x)
            sc <- colSums(x)
            x <- x[sr > 0, sc > 0, drop = FALSE]
            nr <- as.integer(nrow(x))
            nc <- as.integer(ncol(x))
            if (is.na(nr) || is.na(nc) || is.na(nr * nc)) 
                stop("invalid nrow(x) or ncol(x)", domain = NA)
            if (nr <= 1L) 
                stop("need 2 or more non-zero row marginals")
            if (nc <= 1L) 
                stop("need 2 or more non-zero column marginals")
            METHOD <- paste(METHOD, "with simulated p-value\n\t (based on", 
                B, "replicates)")
            STATISTIC <- -sum(lfactorial(x))
            tmp <- .Call(C_Fisher_sim, rowSums(x), colSums(x), 
                B)
            almost.1 <- 1 + 64 * .Machine$double.eps
            PVAL <- (1 + sum(tmp <= STATISTIC/almost.1))/(B + 
                1)
        }
        else if (hybrid) {
            if (!is.null(nhP <- names(hybridPars)) && !identical(nhP, 
                c("expect", "percent", "Emin"))) 
                stop("names(hybridPars) should be NULL or be identical to the default's")
            stopifnot(is.double(hypp <- as.double(hybridPars)), 
                length(hypp) == 3L, hypp[1] > 0, hypp[3] >= 0, 
                0 <= hypp[2], hypp[2] <= 100)
            PVAL <- .Call(C_Fexact, x, hypp, workspace, mult)
            METHOD <- paste(METHOD, sprintf("hybrid using asym.chisq. iff (exp=%g, perc=%g, Emin=%g)", 
                hypp[1], hypp[2], hypp[3]))
        }
        else {
            PVAL <- .Call(C_Fexact, x, c(-1, 100, 0), workspace, 
                mult)
        }
        RVAL <- list(p.value = max(0, min(1, PVAL)))
    }
    else {
        if (hybrid) 
            warning("'hybrid' is ignored for a 2 x 2 table")
        m <- sum(x[, 1L])
        n <- sum(x[, 2L])
        k <- sum(x[1L, ])
        x <- x[1L, 1L]
        lo <- max(0L, k - n)
        hi <- min(k, m)
        NVAL <- c(`odds ratio` = or)
        support <- lo:hi
        logdc <- dhyper(support, m, n, k, log = TRUE)
        dnhyper <- function(ncp) {
            d <- logdc + log(ncp) * support
            d <- exp(d - max(d))
            d/sum(d)
        }
        mnhyper <- function(ncp) {
            if (ncp == 0) 
                return(lo)
            if (ncp == Inf) 
                return(hi)
            sum(support * dnhyper(ncp))
        }
        pnhyper <- function(q, ncp = 1, upper.tail = FALSE) {
            if (ncp == 1) {
                return(if (upper.tail) phyper(x - 1, m, n, k, 
                  lower.tail = FALSE) else phyper(x, m, n, k))
            }
            if (ncp == 0) {
                return(as.numeric(if (upper.tail) q <= lo else q >= 
                  lo))
            }
            if (ncp == Inf) {
                return(as.numeric(if (upper.tail) q <= hi else q >= 
                  hi))
            }
            sum(dnhyper(ncp)[if (upper.tail) support >= q else support <= 
                q])
        }
        if (is.null(PVAL)) {
            PVAL <- switch(alternative, less = pnhyper(x, or), 
                greater = pnhyper(x, or, upper.tail = TRUE), 
                two.sided = {
                  if (or == 0) as.numeric(x == lo) else if (or == 
                    Inf) as.numeric(x == hi) else {
                    relErr <- 1 + 10^(-7)
                    d <- dnhyper(or)
                    sum(d[d <= d[x - lo + 1] * relErr])
                  }
                })
            RVAL <- list(p.value = PVAL)
        }
        mle <- function(x) {
            if (x == lo) 
                return(0)
            if (x == hi) 
                return(Inf)
            mu <- mnhyper(1)
            if (mu > x) 
                uniroot(function(t) mnhyper(t) - x, c(0, 1))$root
            else if (mu < x) 
                1/uniroot(function(t) mnhyper(1/t) - x, c(.Machine$double.eps, 
                  1))$root
            else 1
        }
        ESTIMATE <- c(`odds ratio` = mle(x))
        if (conf.int) {
            ncp.U <- function(x, alpha) {
                if (x == hi) 
                  return(Inf)
                p <- pnhyper(x, 1)
                if (p < alpha) 
                  uniroot(function(t) pnhyper(x, t) - alpha, 
                    c(0, 1))$root
                else if (p > alpha) 
                  1/uniroot(function(t) pnhyper(x, 1/t) - alpha, 
                    c(.Machine$double.eps, 1))$root
                else 1
            }
            ncp.L <- function(x, alpha) {
                if (x == lo) 
                  return(0)
                p <- pnhyper(x, 1, upper.tail = TRUE)
                if (p > alpha) 
                  uniroot(function(t) pnhyper(x, t, upper.tail = TRUE) - 
                    alpha, c(0, 1))$root
                else if (p < alpha) 
                  1/uniroot(function(t) pnhyper(x, 1/t, upper.tail = TRUE) - 
                    alpha, c(.Machine$double.eps, 1))$root
                else 1
            }
            CINT <- switch(alternative, less = c(0, ncp.U(x, 
                1 - conf.level)), greater = c(ncp.L(x, 1 - conf.level), 
                Inf), two.sided = {
                alpha <- (1 - conf.level)/2
                c(ncp.L(x, alpha), ncp.U(x, alpha))
            })
            attr(CINT, "conf.level") <- conf.level
        }
        RVAL <- c(RVAL, list(conf.int = if (conf.int) CINT, estimate = ESTIMATE, 
            null.value = NVAL))
    }
    structure(c(RVAL, alternative = alternative, method = METHOD, 
        data.name = DNAME), class = "htest")
}

# Examples
## Agresti (1990, p. 61f; 2002, p. 91) Fisher's Tea Drinker
## A British woman claimed to be able to distinguish whether milk or
##  tea was added to the cup first.  To test, she was given 8 cups of
##  tea, in four of which milk was added first.  The null hypothesis
##  is that there is no association between the true order of pouring
##  and the woman's guess, the alternative that there is a positive
##  association (that the odds ratio is greater than 1).
TeaTasting <-
matrix(c(3, 1, 1, 3),
       nrow = 2,
       dimnames = list(Guess = c("Milk", "Tea"),
                       Truth = c("Milk", "Tea")))
fisher.test(TeaTasting, alternative = "greater")
## => p = 0.2429, association could not be established

## Fisher (1962, 1970), Criminal convictions of like-sex twins
Convictions <- matrix(c(2, 10, 15, 3), nrow = 2,
	              dimnames =
	       list(c("Dizygotic", "Monozygotic"),
		    c("Convicted", "Not convicted")))
Convictions
fisher.test(Convictions, alternative = "less")
fisher.test(Convictions, conf.int = FALSE)
fisher.test(Convictions, conf.level = 0.95)$conf.int
fisher.test(Convictions, conf.level = 0.99)$conf.int

## A r x c table  Agresti (2002, p. 57) Job Satisfaction
Job <- matrix(c(1,2,1,0, 3,3,6,1, 10,10,14,9, 6,7,12,11), 4, 4,
           dimnames = list(income = c("< 15k", "15-25k", "25-40k", "> 40k"),
                     satisfaction = c("VeryD", "LittleD", "ModerateS", "VeryS")))
fisher.test(Job) # 0.7827
fisher.test(Job, simulate.p.value = TRUE, B = 1e5) # also close to 0.78

## 6th example in Mehta & Patel's JASA paper
MP6 <- rbind(
        c(1,2,2,1,1,0,1),
        c(2,0,0,2,3,0,0),
        c(0,1,1,1,2,7,3),
        c(1,1,2,0,0,0,1),
        c(0,1,1,1,1,0,0))
fisher.test(MP6)
# Exactly the same p-value, as Cochran's conditions are never met:
fisher.test(MP6, hybrid=TRUE)

