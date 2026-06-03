#? stdlib
`lines.formula` <- function (formula, data = parent.frame(), ..., subset) 
{
    m <- match.call(expand.dots = FALSE)
    eframe <- parent.frame()
    md <- eval(m$data, eframe)
    if (is.matrix(md)) 
        m$data <- md <- as.data.frame(data)
    dots <- lapply(m$..., eval, md, eframe)
    m$... <- NULL
    m <- as.list(m)
    m[[1L]] <- stats::model.frame.default
    m <- as.call(c(m, list(na.action = NULL)))
    mf <- eval(m, eframe)
    if (!missing(subset)) {
        s <- eval(m$subset, data, eframe)
        if (!missing(data)) {
            l <- nrow(data)
        }
        else {
            mtmp <- m
            mtmp$subset <- NULL
            l <- nrow(eval(mtmp, eframe))
        }
        dosub <- function(x) if (length(x) == l) 
            x[s]
        else x
        dots <- lapply(dots, dosub)
    }
    response <- attr(attr(mf, "terms"), "response")
    if (response) {
        varnames <- names(mf)
        y <- mf[[response]]
        if (length(varnames) > 2L) 
            stop("cannot handle more than one 'x' coordinate")
        xn <- varnames[-response]
        if (length(xn) == 0L) 
            do.call("lines", c(list(y), dots))
        else do.call("lines", c(list(mf[[xn]], y), dots))
    }
    else stop("must have a response variable")
}
