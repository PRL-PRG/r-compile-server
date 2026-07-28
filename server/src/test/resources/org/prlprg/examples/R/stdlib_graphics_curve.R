#? stdlib
`curve` <- function (expr, from = NULL, to = NULL, n = 101, add = FALSE, 
    type = "l", xname = "x", xlab = xname, ylab = NULL, log = NULL, 
    xlim = NULL, ...) 
{
    sexpr <- substitute(expr)
    if (is.name(sexpr)) {
        expr <- call(as.character(sexpr), as.name(xname))
    }
    else {
        if (!((is.call(sexpr) || is.expression(sexpr)) && xname %in% 
            all.vars(sexpr))) 
            stop(gettextf("'expr' must be a function, or a call or an expression containing '%s'", 
                xname), domain = NA)
        expr <- sexpr
    }
    if (dev.cur() == 1L && !isFALSE(add)) {
        warning("'add' will be ignored as there is no existing plot")
        add <- FALSE
    }
    addF <- isFALSE(add)
    if (is.null(ylab)) 
        ylab <- deparse(expr)
    if (is.null(from) || is.null(to)) {
        xl <- xlim %||% if (!addF) {
            pu <- par("usr")[1L:2L]
            if (par("xaxs") == "r") 
                pu <- extendrange(pu, f = -1/27)
            if (par("xlog")) 
                10^pu
            else pu
        }
        else c(0, 1)
        if (is.null(from)) 
            from <- xl[1L]
        if (is.null(to)) 
            to <- xl[2L]
    }
    lg <- if (length(log)) 
        log
    else if (!addF && par("xlog")) 
        "x"
    else ""
    if (length(lg) == 0) 
        lg <- ""
    if (grepl("x", lg, fixed = TRUE)) {
        if (from <= 0 || to <= 0) 
            stop("'from' and 'to' must be > 0 with log=\"x\"")
        x <- exp(seq.int(log(from), log(to), length.out = n))
    }
    else x <- seq.int(from, to, length.out = n)
    ll <- list(x = x)
    names(ll) <- xname
    y <- eval(expr, envir = ll, enclos = parent.frame())
    if (length(y) != length(x)) 
        stop("'expr' did not evaluate to an object of length 'n'")
    if (isTRUE(add)) 
        lines(x = x, y = y, type = type, ...)
    else plot(x = x, y = y, type = type, xlab = xlab, ylab = ylab, 
        xlim = xlim, log = lg, ...)
    invisible(list(x = x, y = y))
}

# Examples
plot(qnorm) # default range c(0, 1) is appropriate here,
            # but end values are -/+Inf and so are omitted.
plot(qlogis, main = "The Inverse Logit : qlogis()")
abline(h = 0, v = 0:2/2, lty = 3, col = "gray")

curve(sin, -2*pi, 2*pi, xname = "t")
curve(tan, xname = "t", add = NA,
      main = "curve(tan)  --> same x-scale as previous plot")

op <- par(mfrow = c(2, 2))
curve(x^3 - 3*x, -2, 2)
curve(x^2 - 2, add = TRUE, col = "violet")

## simple and advanced versions, quite similar:
plot(cos, -pi,  3*pi)
curve(cos, xlim = c(-pi, 3*pi), n = 1001, col = "blue", add = TRUE)

chippy <- function(x) sin(cos(x)*exp(-x/2))
curve(chippy, -8, 7, n = 2001)
plot (chippy, -8, -5)

for(ll in c("", "x", "y", "xy"))
   curve(log(1+x), 1, 100, log = ll, sub = paste0("log = '", ll, "'"))
par(op)

