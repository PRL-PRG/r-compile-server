#? stdlib
`wilcox.test.formula` <- function (formula, data, subset, na.action = na.pass, ...) 
{
    if (missing(formula) || (length(formula) != 3L)) 
        stop("'formula' missing or incorrect")
    if ("paired" %in% ...names()) 
        stop("cannot use 'paired' in formula method")
    oneSampleOrPaired <- FALSE
    if (length(attr(terms(formula[-2L]), "term.labels")) != 1L) 
        if (formula[[3L]] == 1L) 
            oneSampleOrPaired <- TRUE
        else stop("'formula' missing or incorrect")
    m <- match.call(expand.dots = FALSE)
    if (is.matrix(eval(m$data, parent.frame()))) 
        m$data <- as.data.frame(data)
    m[[1L]] <- quote(stats::model.frame)
    m$... <- NULL
    mf <- eval(m, parent.frame())
    DNAME <- paste(names(mf), collapse = " by ")
    names(mf) <- NULL
    response <- attr(attr(mf, "terms"), "response")
    if (!oneSampleOrPaired) {
        g <- factor(mf[[-response]])
        if (nlevels(g) != 2L) 
            stop("grouping factor must have exactly 2 levels")
        DATA <- split(mf[[response]], g)
        y <- wilcox.test(x = DATA[[1L]], y = DATA[[2L]], ...)
    }
    else {
        respVar <- mf[[response]]
        if (inherits(respVar, "Pair")) {
            y <- wilcox.test(x = respVar[, 1L], y = respVar[, 
                2L], paired = TRUE, ...)
        }
        else {
            y <- wilcox.test(x = respVar, ...)
        }
    }
    y$data.name <- DNAME
    y
}
