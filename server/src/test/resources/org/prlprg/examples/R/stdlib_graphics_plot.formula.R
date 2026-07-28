#? stdlib
`plot.formula` <- function (formula, data = parent.frame(), ..., subset, ylab = varnames[response], 
    ask = dev.interactive()) 
{
    m <- match.call(expand.dots = FALSE)
    eframe <- parent.frame()
    md <- eval(m$data, eframe)
    if (is.matrix(md)) 
        m$data <- md <- as.data.frame(data)
    dots <- lapply(m$..., eval, md, eframe)
    nmdots <- names(dots)
    for (nm in nmdots[match(c("main", "sub", "xlab"), nmdots, 
        0L)]) dots[[nm]] <- enquote(dots[[nm]])
    if (!missing(ylab)) 
        ylab <- enquote(ylab)
    m$ylab <- m$... <- m$ask <- NULL
    subset.expr <- m$subset
    m$subset <- NULL
    m <- as.list(m)
    m[[1L]] <- stats::model.frame.default
    m <- as.call(c(m, list(na.action = NULL)))
    mf <- eval(m, eframe)
    if (!missing(subset)) {
        s <- eval(subset.expr, data, eframe)
        l <- nrow(mf)
        dosub <- function(x) if (length(x) == l) 
            x[s]
        else x
        dots <- lapply(dots, dosub)
        mf <- mf[s, , drop = FALSE]
    }
    horizontal <- FALSE
    if ("horizontal" %in% names(dots)) 
        horizontal <- dots[["horizontal"]]
    response <- attr(attr(mf, "terms"), "response")
    if (response) {
        varnames <- names(mf)
        y <- mf[[response]]
        funname <- NULL
        xn <- varnames[-response]
        if (is.object(y)) {
            found <- FALSE
            for (j in class(y)) {
                funname <- paste0("plot.", j)
                if (exists(funname)) {
                  found <- TRUE
                  break
                }
            }
            if (!found) 
                funname <- NULL
        }
        if (is.null(funname)) 
            funname <- "plot"
        if (length(varnames) > 2L) {
            oask <- devAskNewPage(ask)
            on.exit(devAskNewPage(oask))
        }
        if (length(xn)) {
            if (!is.null(xlab <- dots[["xlab"]])) 
                dots <- dots[-match("xlab", names(dots))]
            for (i in xn) {
                xl <- xlab %||% i
                yl <- ylab
                if (horizontal && is.factor(mf[[i]])) {
                  yl <- xl
                  xl <- ylab
                }
                do.call(funname, c(list(mf[[i]], y, ylab = yl, 
                  xlab = xl), dots))
            }
        }
        else {
            if (length(varnames) == 1L && length(formula) == 
                3L && identical(formula[[2L]], formula[[3L]])) 
                warning(gettextf("the formula '%s' is treated as '%s'", 
                  format(formula), format(local({
                    f <- formula
                    f[[3L]] <- quote(1)
                    f
                  }))), domain = NA)
            do.call(funname, c(list(y, ylab = ylab), dots))
        }
    }
    else do.call("plot.data.frame", c(list(mf), dots))
    invisible()
}

# Examples
op <- par(mfrow = c(2,1))
plot(Ozone ~ Wind, data = airquality, pch = as.character(Month))
plot(Ozone ~ Wind, data = airquality, pch = as.character(Month),
     subset = Month != 7)
par(op)

## text.formula() can be very natural:
wb <- within(warpbreaks, {
    time <- seq_along(breaks); W.T <- wool:tension })
plot(breaks ~ time, data = wb, type = "b")
text(breaks ~ time, data = wb, labels = W.T, col = 1+as.integer(wool))

