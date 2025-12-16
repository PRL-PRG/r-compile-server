#? stdlib
`bw.SJ` <- function (x, nb = 1000L, lower = 0.1 * hmax, upper = hmax, method = c("ste", 
    "dpi"), tol = 0.1 * lower) 
{
    if ((n <- length(x)) < 2L) 
        stop("need at least 2 data points")
    n <- as.integer(n)
    if (is.na(n)) 
        stop("invalid length(x)")
    if (!is.numeric(x)) 
        stop("invalid 'x'")
    nb <- as.integer(nb)
    if (is.na(nb) || nb <= 0L) 
        stop("invalid 'nb'")
    storage.mode(x) <- "double"
    method <- match.arg(method)
    SDh <- function(h) .Call(C_bw_phi4, n, d, cnt, h)
    TDh <- function(h) .Call(C_bw_phi6, n, d, cnt, h)
    Z <- bw_pair_cnts(x, nb, n > nb/2)
    d <- Z[[1L]]
    cnt <- Z[[2L]]
    scale <- min(sd(x), IQR(x)/1.349)
    a <- 1.24 * scale * n^(-1/7)
    b <- 1.23 * scale * n^(-1/9)
    c1 <- 1/(2 * sqrt(pi) * n)
    TD <- -TDh(b)
    if (!is.finite(TD) || TD <= 0) 
        stop("sample is too sparse to find TD", domain = NA)
    if (method == "dpi") 
        res <- (c1/SDh((2.394/(n * TD))^(1/7)))^(1/5)
    else {
        if (bnd.Miss <- missing(lower) || missing(upper)) {
            hmax <- 1.144 * scale * n^(-1/5)
        }
        alph2 <- 1.357 * (SDh(a)/TD)^(1/7)
        if (!is.finite(alph2)) 
            stop("sample is too sparse to find alph2", domain = NA)
        itry <- 1L
        fSD <- function(h) (c1/SDh(alph2 * h^(5/7)))^(1/5) - 
            h
        while (fSD(lower) * fSD(upper) > 0) {
            if (itry > 99L || !bnd.Miss) 
                stop("no solution in the specified range of bandwidths")
            if (itry%%2) 
                upper <- upper * 1.2
            else lower <- lower/1.2
            if (getOption("verbose")) 
                message(gettextf("increasing bw.SJ() search interval (%d) to [%.4g,%.4g]", 
                  itry, lower, upper), domain = NA)
            itry <- itry + 1L
        }
        res <- uniroot(fSD, c(lower, upper), tol = tol)$root
    }
    res
}
