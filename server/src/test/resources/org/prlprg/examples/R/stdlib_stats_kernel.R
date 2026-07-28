#? stdlib
`kernel` <- function (coef, m = 2, r, name = "unknown") 
{
    mkName <- function(name, args) paste0(name, "(", paste(args, 
        collapse = ","), ")")
    modified.daniell.kernel <- function(m) {
        if (length(m) == 1L) 
            k <- kernel(c(rep_len(1, m), 0.5)/(2 * m), m)
        else {
            k <- Recall(m[1L])
            for (i in 2L:length(m)) k <- kernapply(k, Recall(m[i]))
        }
        attr(k, "name") <- mkName("mDaniell", m)
        k
    }
    daniell.kernel <- function(m) {
        if (length(m) == 1L) 
            k <- kernel(rep_len(1/(2 * m + 1), m + 1), m)
        else {
            k <- Recall(m[1L])
            for (i in 2L:length(m)) k <- kernapply(k, Recall(m[i]))
        }
        attr(k, "name") <- mkName("Daniell", m)
        k
    }
    fejer.kernel <- function(m, r) {
        if (r < 1L) 
            stop("'r' is less than 1")
        if (m < 1L) 
            stop("'m' is less than 1")
        n <- 2L * m + 1L
        wn <- double(m + 1L)
        wj <- 2 * pi * (1L:m)/n
        wn[2L:(m + 1L)] <- sin(r * wj/2)^2/sin(wj/2)^2/r
        wn[1L] <- r
        wn <- wn/(wn[1L] + 2 * sum(wn[2L:(m + 1L)]))
        kernel(wn, m, name = mkName("Fejer", c(m, r)))
    }
    dirichlet.kernel <- function(m, r) {
        if (r < 0) 
            stop("'r' is less than 0")
        if (m < 1) 
            stop("'m' is less than 1")
        n <- 2L * m + 1L
        wn <- double(m + 1L)
        wj <- 2 * pi * (1L:m)/n
        wn[2L:(m + 1)] <- sin((r + 0.5) * wj)/sin(wj/2)
        wn[1L] <- 2 * r + 1
        wn <- wn/(wn[1L] + 2 * sum(wn[2L:(m + 1L)]))
        kernel(wn, m, name = mkName("Dirichlet", c(m, r)))
    }
    if (!missing(m)) 
        if (!is.numeric(m) || length(m) < 1L || any(m != round(m)) || 
            any(m < 0L)) 
            stop("'m' must be numeric with non-negative integers")
    if (is.character(coef)) {
        switch(coef, daniell = daniell.kernel(m), dirichlet = dirichlet.kernel(m, 
            r), fejer = fejer.kernel(m, r), modified.daniell = modified.daniell.kernel(m), 
            stop("unknown named kernel"))
    }
    else {
        if (!is.numeric(coef)) 
            stop("'coef' must be a vector")
        if (length(coef) < 1L) 
            stop("'coef' does not have the correct length")
        m <- length(coef) - 1L
        kernel <- list(coef = coef, m = m)
        attr(kernel, "name") <- name
        class(kernel) <- "tskernel"
        sk <- sum(kernel[-m:m])
        if (abs(sk - 1) > getOption("ts.eps")) 
            stop("coefficients do not add to 1")
        kernel
    }
}

# Examples
require(graphics)

## Demonstrate a simple trading strategy for the
## financial time series German stock index DAX.
x <- EuStockMarkets[,1]
k1 <- kernel("daniell", 50)  # a long moving average
k2 <- kernel("daniell", 10)  # and a short one
plot(k1)
plot(k2)
x1 <- kernapply(x, k1)
x2 <- kernapply(x, k2)
plot(x)
lines(x1, col = "red")    # go long if the short crosses the long upwards
lines(x2, col = "green")  # and go short otherwise

## More interesting kernels
kd <- kernel("daniell", c(3, 3))
kd # note the unusual indexing
kd[-2:2]
plot(kernel("fejer", 100, r = 6))
plot(kernel("modified.daniell", c(7,5,3)))

# Reproduce example 10.4.3 from Brockwell and Davis (1991)
spectrum(sunspot.year, kernel = kernel("daniell", c(11,7,3)), log = "no")

