#? stdlib
`axTicks` <- function (side, axp = NULL, usr = NULL, log = NULL, nintLog = NULL) 
{
    if (!(side <- as.integer(side)) %in% 1L:4L) 
        stop("'side' must be in {1:4}")
    is.x <- side%%2 == 1
    XY <- function(ch) paste0(if (is.x) 
        "x"
    else "y", ch)
    if (is.null(axp)) 
        axp <- par(XY("axp"))
    else if (!is.numeric(axp) || length(axp) != 3) 
        stop("invalid 'axp'")
    if (is.null(log)) 
        log <- par(XY("log"))
    else if (!is.logical(log) || anyNA(log)) 
        stop("invalid 'log'")
    if (log && axp[3L] > 0) {
        if (!any((iC <- as.integer(axp[3L])) == 1L:3L)) 
            stop("invalid positive 'axp[3]'")
        if (is.null(usr)) 
            usr <- par("usr")[if (is.x) 
                1:2
            else 3:4]
        else if (!is.numeric(usr) || length(usr) != 2) 
            stop("invalid 'usr'")
        if (is.null(nintLog)) 
            nintLog <- par("lab")[2L - is.x]
        if (is.finite(nintLog)) {
            axisTicks(usr, log = log, axp = axp, nint = nintLog)
        }
        else {
            if (needSort <- is.unsorted(usr)) {
                usr <- usr[2:1]
                axp <- axp[2:1]
            }
            else axp <- axp[1:2]
            ii <- round(log10(axp))
            x10 <- 10^((ii[1L] - (iC >= 2L)):ii[2L])
            r <- switch(iC, x10, c(outer(c(1, 5), x10))[-1L], 
                c(outer(c(1, 2, 5), x10))[-1L])
            if (needSort) 
                r <- rev(r)
            r[usr[1L] <= log10(r) & log10(r) <= usr[2L]]
        }
    }
    else {
        n <- as.integer(abs(axp[3L]) + 0.25)
        r <- seq.int(axp[1L], axp[2L], length.out = n + 1L)
        n. <- max(1L, n)
        N <- 100 * n.
        r[abs(r) < abs(axp[2L]/N - axp[1L]/N)] <- 0
        r
    }
}

# Examples
 plot(1:7, 10*21:27)
 axTicks(1)
 axTicks(2)
 stopifnot(identical(axTicks(1), axTicks(3)),
           identical(axTicks(2), axTicks(4)))

## Show how axTicks() and axis() correspond :
op <- par(mfrow = c(3, 1))
for(x in 9999 * c(1, 2, 8)) {
    plot(x, 9, log = "x")
    cat(formatC(par("xaxp"), width = 5),";", T <- axTicks(1),"\n")
    rug(T, col =  adjustcolor("red", 0.5), lwd = 4)
}
par(op)

x <- 9.9*10^(-3:10)
plot(x, 1:14, log = "x")
axTicks(1) # now length 7
axTicks(1, nintLog = Inf) # rather too many

## An example using axTicks() without reference to an existing plot
## (copying R's internal procedures for setting axis ranges etc.),
## You do need to supply _all_ of axp, usr, log, nintLog
## standard logarithmic y axis labels
ylims <- c(0.2, 88)
get_axp <- function(x) 10^c(ceiling(x[1]), floor(x[2]))
## mimic par("yaxs") == "i"
usr.i <- log10(ylims)
(aT.i <- axTicks(side = 2, usr = usr.i,
                 axp = c(get_axp(usr.i), n = 3), log = TRUE, nintLog = 5))
## mimic (default) par("yaxs") == "r"
usr.r <- extendrange(r = log10(ylims), f = 0.04)
(aT.r <- axTicks(side = 2, usr = usr.r,
                 axp = c(get_axp(usr.r), 3), log = TRUE, nintLog = 5))

## Prove that we got it right :
plot(0:1, ylims, log = "y", yaxs = "i")
stopifnot(all.equal(aT.i, axTicks(side = 2)))

plot(0:1, ylims, log = "y", yaxs = "r")
stopifnot(all.equal(aT.r, axTicks(side = 2)))

