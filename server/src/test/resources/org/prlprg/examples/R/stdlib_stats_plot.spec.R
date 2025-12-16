#? stdlib
`plot.spec` <- function (x, add = FALSE, ci = 0.95, log = c("yes", "dB", "no"), 
    xlab = "frequency", ylab = NULL, type = "l", ci.col = "blue", 
    ci.lty = 3, main = NULL, sub = NULL, plot.type = c("marginal", 
        "coherency", "phase"), ...) 
{
    spec.ci <- function(spec.obj, coverage = 0.95) {
        if (coverage < 0 || coverage >= 1) 
            stop("coverage probability out of range [0,1)")
        tail <- (1 - coverage)
        df <- spec.obj$df
        upper.quantile <- 1 - tail * pchisq(df, df, lower.tail = FALSE)
        lower.quantile <- tail * pchisq(df, df)
        1/(qchisq(c(upper.quantile, lower.quantile), df)/df)
    }
    plot.type <- match.arg(plot.type)
    log <- match.arg(log)
    m <- match.call()
    if (plot.type == "coherency") {
        m[[1L]] <- quote(stats::plot.spec.coherency)
        m$plot.type <- m$log <- m$add <- NULL
        return(eval(m, parent.frame()))
    }
    if (plot.type == "phase") {
        m[[1L]] <- quote(stats::plot.spec.phase)
        m$plot.type <- m$log <- m$add <- NULL
        return(eval(m, parent.frame()))
    }
    if (is.null(ylab)) 
        ylab <- if (log == "dB") 
            "spectrum (dB)"
        else "spectrum"
    if (is.logical(log)) 
        log <- if (log) 
            "yes"
        else "no"
    if (missing(log) && getOption("ts.S.compat")) 
        log <- "dB"
    log <- match.arg(log)
    ylog <- ""
    if (log == "dB") 
        x$spec <- 10 * log10(x$spec)
    if (log == "yes") 
        ylog <- "y"
    dev.hold()
    on.exit(dev.flush())
    if (add) {
        matplot(x$freq, x$spec, type = type, add = TRUE, ...)
    }
    else {
        matplot(x$freq, x$spec, xlab = xlab, ylab = ylab, type = type, 
            log = ylog, ...)
        if (ci <= 0 || !is.numeric(x$df) || log == "no") {
            ci.text <- ""
        }
        else {
            conf.lim <- spec.ci(x, coverage = ci)
            if (log == "dB") {
                conf.lim <- 10 * log10(conf.lim)
                conf.y <- max(x$spec) - conf.lim[2L]
                conf.x <- max(x$freq) - x$bandwidth
                lines(rep(conf.x, 2), conf.y + conf.lim, col = ci.col)
                lines(conf.x + c(-0.5, 0.5) * x$bandwidth, rep(conf.y, 
                  2), col = ci.col)
                ci.text <- paste0(", ", round(100 * ci, 2), "% C.I. is (", 
                  paste(format(conf.lim, digits = 3), collapse = ","), 
                  ")dB")
            }
            else {
                ci.text <- ""
                conf.y <- max(x$spec)/conf.lim[2L]
                conf.x <- max(x$freq) - x$bandwidth
                lines(rep(conf.x, 2), conf.y * conf.lim, col = ci.col)
                lines(conf.x + c(-0.5, 0.5) * x$bandwidth, rep(conf.y, 
                  2), col = ci.col)
            }
        }
        if (is.null(main)) 
            main <- paste(if (!is.null(x$series)) 
                paste("Series:", x$series)
            else "from specified model", x$method, sep = "\n")
        if (is.null(sub) && is.numeric(x$bandwidth)) 
            sub <- paste0("bandwidth = ", format(x$bandwidth, 
                digits = 3), ci.text)
        title(main = main, sub = sub)
    }
    invisible(x)
}

# Examples
