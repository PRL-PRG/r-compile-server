#? stdlib
`p.adjust` <- function (p, method = p.adjust.methods, n = length(p)) 
{
    method <- match.arg(method)
    if (method == "fdr") 
        method <- "BH"
    nm <- names(p)
    p <- as.numeric(p)
    p0 <- setNames(p, nm)
    if (all(nna <- !is.na(p))) 
        nna <- TRUE
    else p <- p[nna]
    lp <- length(p)
    stopifnot(n >= lp)
    if (n <= 1) 
        return(p0)
    if (n == 2 && method == "hommel") 
        method <- "hochberg"
    p0[nna] <- switch(method, bonferroni = pmin(1, n * p), holm = {
        i <- seq_len(lp)
        o <- order(p)
        ro <- order(o)
        pmin(1, cummax((n + 1L - i) * p[o]))[ro]
    }, hommel = {
        if (n > lp) p <- c(p, rep.int(1, n - lp))
        i <- seq_len(n)
        o <- order(p)
        p <- p[o]
        ro <- order(o)
        q <- pa <- rep.int(min(n * p/i), n)
        for (j in (n - 1L):2L) {
            ij <- seq_len(n - j + 1L)
            i2 <- (n - j + 2L):n
            q1 <- min(j * p[i2]/(2L:j))
            q[ij] <- pmin(j * p[ij], q1)
            q[i2] <- q[n - j + 1L]
            pa <- pmax(pa, q)
        }
        pmax(pa, p)[if (lp < n) ro[1L:lp] else ro]
    }, hochberg = {
        i <- lp:1L
        o <- order(p, decreasing = TRUE)
        ro <- order(o)
        pmin(1, cummin((n + 1L - i) * p[o]))[ro]
    }, BH = {
        i <- lp:1L
        o <- order(p, decreasing = TRUE)
        ro <- order(o)
        pmin(1, cummin(n/i * p[o]))[ro]
    }, BY = {
        i <- lp:1L
        o <- order(p, decreasing = TRUE)
        ro <- order(o)
        q <- sum(1/(1L:n))
        pmin(1, cummin(q * n/i * p[o]))[ro]
    }, none = p)
    p0
}

# Examples
require(graphics)

set.seed(123)
x <- rnorm(50, mean = c(rep(0, 25), rep(3, 25)))
p <- 2*pnorm(sort(-abs(x)))

round(p, 3)
round(p.adjust(p), 3)
round(p.adjust(p, "BH"), 3)

## or all of them at once (dropping the "fdr" alias):
p.adjust.M <- p.adjust.methods[p.adjust.methods != "fdr"]
p.adj    <- sapply(p.adjust.M, function(meth) p.adjust(p, meth))
p.adj.60 <- sapply(p.adjust.M, function(meth) p.adjust(p, meth, n = 60))
stopifnot(identical(p.adj[,"none"], p), p.adj <= p.adj.60)
round(p.adj, 3)
## or a bit nicer:
noquote(apply(p.adj, 2, format.pval, digits = 3))


## and a graphic:
matplot(p, p.adj, ylab="p.adjust(p, meth)", type = "l", asp = 1, lty = 1:6,
        main = "P-value adjustments")
legend(0.7, 0.6, p.adjust.M, col = 1:6, lty = 1:6)

## Can work with NA's:
pN <- p; iN <- c(46, 47); pN[iN] <- NA
pN.a <- sapply(p.adjust.M, function(meth) p.adjust(pN, meth))
## The smallest 20 P-values all affected by the NA's :
round((pN.a / p.adj)[1:20, ] , 4)

