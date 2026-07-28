#? stdlib
`ts.plot` <- function (..., gpars = list()) 
{
    dots <- list(...)
    pars <- c("xlab", "ylab", "xlim", "ylim", "col", "lty", "lwd", 
        "type", "main", "sub", "log")
    m <- names(dots) %in% pars
    if (length(m)) {
        gpars <- c(gpars, dots[m])
        dots <- dots[!m]
    }
    sers <- do.call("ts.union", dots)
    if (is.null(gpars$ylab)) 
        gpars$ylab <- if (NCOL(sers) > 1) 
            ""
        else deparse1(substitute(...))
    do.call("plot.ts", c(list(sers, plot.type = "single"), gpars))
}

# Examples
require(graphics)

ts.plot(ldeaths, mdeaths, fdeaths,
        gpars=list(xlab="year", ylab="deaths", lty=c(1:3)))

