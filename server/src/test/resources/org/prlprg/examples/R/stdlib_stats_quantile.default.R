#? stdlib
`quantile.default` <- function (x, probs = seq(0, 1, 0.25), na.rm = FALSE, names = TRUE, 
    type = 7, digits = 7, ...) 
{
    if (is.factor(x)) {
        if (is.ordered(x)) {
            if (!any(type == c(1L, 3L))) 
                stop("'type' must be 1 or 3 for ordered factors")
        }
        else stop("(unordered) factors are not allowed")
        lx <- levels(x)
        x <- as.integer(x)
    }
    else {
        if (is.null(x)) 
            x <- numeric()
        lx <- NULL
    }
    if (na.rm) 
        x <- x[!is.na(x)]
    else if (anyNA(x)) 
        stop("missing values and NaN's not allowed if 'na.rm' is FALSE")
    eps <- 100 * .Machine$double.eps
    if (any((p.ok <- !is.na(probs)) & (probs < -eps | probs > 
        1 + eps))) 
        stop("'probs' outside [0,1]")
    n <- length(x)
    probs <- pmax(0, pmin(1, probs))
    np <- length(probs)
    {
        if (type == 7) {
            index <- 1 + max(n - 1, 0) * probs
            lo <- floor(index)
            hi <- ceiling(index)
            x <- sort(x, partial = if (n == 0) 
                numeric()
            else unique(c(lo, hi)[p.ok]))
            qs <- x[lo]
            i <- which(!p.ok | (index > lo & x[hi] != qs))
            h <- (index - lo)[i]
            qs[i] <- (1 - h) * qs[i] + h * x[hi[i]]
        }
        else {
            if (type <= 3) {
                nppm <- if (type == 3) 
                  n * probs - 0.5
                else n * probs
                j <- floor(nppm)
                h <- switch(type, !p.ok | (nppm > j), ((nppm > 
                  j) + 1)/2, !p.ok | (nppm != j) | ((j%%2L) == 
                  1L))
            }
            else {
                switch(type - 3, {
                  a <- 0
                  b <- 1
                }, a <- b <- 0.5, a <- b <- 0, a <- b <- 1, a <- b <- 1/3, 
                  a <- b <- 3/8)
                fuzz <- 4 * .Machine$double.eps
                nppm <- a + probs * (n + 1 - a - b)
                j <- floor(nppm + fuzz)
                h <- nppm - j
                if (any(sml <- abs(h) < fuzz, na.rm = TRUE)) 
                  h[sml] <- 0
            }
            x <- sort(x, partial = if (n == 0) 
                numeric()
            else unique(c(1, j[p.ok & j > 0L & j <= n], (j + 
                1)[p.ok & j > 0L & j < n], n)))
            x <- c(x[1L], x[1L], x, x[n], x[n])
            qs <- x[j + 2L]
            qs[!is.na(h) & h == 1] <- x[j + 3L][!is.na(h) & h == 
                1]
            other <- (0 < h) & (h < 1) & (x[j + 2L] != x[j + 
                3L])
            other[is.na(other)] <- TRUE
            if (any(other)) 
                qs[other] <- ((1 - h) * x[j + 2L] + h * x[j + 
                  3L])[other]
        }
    }
    qs[!p.ok] <- probs[!p.ok]
    if (is.character(lx)) 
        qs <- factor(qs, levels = seq_along(lx), labels = lx, 
            ordered = TRUE)
    if (names && np > 0L) {
        stopifnot(is.numeric(digits), digits >= 1)
        names(qs) <- format_perc(probs, digits = digits)
    }
    qs
}
