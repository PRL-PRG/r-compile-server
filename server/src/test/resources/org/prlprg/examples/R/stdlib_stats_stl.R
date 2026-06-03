#? stdlib
`stl` <- function (x, s.window, s.degree = 0, t.window = NULL, t.degree = 1, 
    l.window = nextodd(period), l.degree = t.degree, s.jump = ceiling(s.window/10), 
    t.jump = ceiling(t.window/10), l.jump = ceiling(l.window/10), 
    robust = FALSE, inner = if (robust) 1 else 2, outer = if (robust) 15 else 0, 
    na.action = na.fail) 
{
    nextodd <- function(x) {
        x <- round(x)
        if (x%%2 == 0) 
            x <- x + 1
        as.integer(x)
    }
    deg.check <- function(deg) {
        degname <- deparse1(substitute(deg))
        deg <- as.integer(deg)
        if (deg < 0 || deg > 1) 
            stop(gettextf("%s must be 0 or 1", degname), domain = NA)
        deg
    }
    x <- na.action(as.ts(x))
    if (is.matrix(x)) 
        stop("only univariate series are allowed")
    n <- as.integer(length(x))
    if (is.na(n)) 
        stop("invalid length(x)")
    period <- frequency(x)
    if (period < 2 || n <= 2 * period) 
        stop("series is not periodic or has less than two periods")
    periodic <- FALSE
    if (is.character(s.window)) {
        if (is.na(pmatch(s.window, "periodic"))) 
            stop("unknown string value for s.window")
        else {
            periodic <- TRUE
            s.window <- 10 * n + 1
            s.degree <- 0
        }
    }
    s.degree <- deg.check(s.degree)
    t.degree <- deg.check(t.degree)
    l.degree <- deg.check(l.degree)
    if (is.null(t.window)) 
        t.window <- nextodd(ceiling(1.5 * period/(1 - 1.5/s.window)))
    storage.mode(x) <- "double"
    z <- .Fortran(C_stl, x, n, as.integer(period), as.integer(s.window), 
        as.integer(t.window), as.integer(l.window), s.degree, 
        t.degree, l.degree, nsjump = as.integer(s.jump), ntjump = as.integer(t.jump), 
        nljump = as.integer(l.jump), ni = as.integer(inner), 
        no = as.integer(outer), weights = double(n), seasonal = double(n), 
        trend = double(n), double((n + 2 * period) * 5))
    if (periodic) {
        which.cycle <- cycle(x)
        z$seasonal <- tapply(z$seasonal, which.cycle, mean)[which.cycle]
    }
    remainder <- as.vector(x) - z$seasonal - z$trend
    y <- cbind(seasonal = z$seasonal, trend = z$trend, remainder = remainder)
    res <- list(time.series = ts(y, start = start(x), frequency = period), 
        weights = z$weights, call = match.call(), win = c(s = s.window, 
            t = t.window, l = l.window), deg = c(s = s.degree, 
            t = t.degree, l = l.degree), jump = c(s = s.jump, 
            t = t.jump, l = l.jump), inner = z$ni, outer = z$no)
    class(res) <- "stl"
    res
}

# Examples
require(graphics)

plot(stl(nottem, "per"))
plot(stl(nottem, s.window = 7, t.window = 50, t.jump = 1))

plot(stllc <- stl(log(co2), s.window = 21))
summary(stllc)
## linear trend, strict period.
plot(stl(log(co2), s.window = "per", t.window = 1000))

## Two STL plotted side by side :
        stmd <- stl(mdeaths, s.window = "per") # non-robust
summary(stmR <- stl(mdeaths, s.window = "per", robust = TRUE))
op <- par(mar = c(0, 4, 0, 3), oma = c(5, 0, 4, 0), mfcol = c(4, 2))
plot(stmd, set.pars = NULL, labels  =  NULL,
     main = "stl(mdeaths, s.w = \"per\",  robust = FALSE / TRUE )")
plot(stmR, set.pars = NULL)
# mark the 'outliers' :
(iO <- which(stmR $ weights  < 1e-8)) # 10 were considered outliers
sts <- stmR$time.series
points(time(sts)[iO], 0.8* sts[,"remainder"][iO], pch = 4, col = "red")
par(op)   # reset

