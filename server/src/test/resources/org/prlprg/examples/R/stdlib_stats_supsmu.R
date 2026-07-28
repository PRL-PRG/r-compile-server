#? stdlib
`supsmu` <- function (x, y, wt = rep(1, n), span = "cv", periodic = FALSE, 
    bass = 0, trace = FALSE) 
{
    if (span == "cv") 
        span <- 0
    else if (span < 0 || span > 1) 
        stop("'span' must be between 0 and 1.")
    n <- length(y)
    if (!n || !is.numeric(y)) 
        stop("'y' must be numeric vector")
    if (length(x) != n) 
        stop("number of observations in 'x' and 'y' must match.")
    if (length(wt) != n) 
        stop("number of weights must match number of observations.")
    if (periodic) {
        iper <- 2L
        xrange <- range(x)
        if (xrange[1L] < 0 || xrange[2L] > 1) 
            stop("'x' must be between 0 and 1 for periodic smooth")
    }
    else iper <- 1L
    okay <- is.finite(x + y + wt)
    ord <- order(x[okay], y[okay])
    ord <- cumsum(!okay)[okay][ord] + ord
    xo <- x[ord]
    leno <- length(ord)
    if (leno == 0L) 
        stop("no finite observations")
    if (diff <- n - leno) 
        warning(sprintf(ngettext(diff, "%d observation with NA, NaN or Inf deleted", 
            "%d observations with NAs, NaNs and/or Infs deleted"), 
            diff), domain = NA)
    .Fortran(C_setsmu, as.integer(trace))
    smo <- .Fortran(C_supsmu, as.integer(leno), as.double(xo), 
        as.double(y[ord]), as.double(wt[ord]), as.integer(iper), 
        as.double(span), as.double(bass), smo = double(leno), 
        double(n * 7L), double(1L))$smo
    dupx <- duplicated(xo)
    list(x = xo[!dupx], y = smo[!dupx])
}

# Examples
require(graphics)

with(cars, {
    plot(speed, dist)
    lines(supsmu(speed, dist))
    lines(supsmu(speed, dist, bass = 7), lty = 2)
    })

