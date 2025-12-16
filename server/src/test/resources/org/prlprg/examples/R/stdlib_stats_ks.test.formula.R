#? stdlib
`ks.test.formula` <- function (formula, data, subset, na.action, ...) 
{
    if (missing(formula) || (length(formula) != 3L)) 
        stop("'formula' missing or incorrect")
    oneSample <- FALSE
    if (length(attr(terms(formula[-2L]), "term.labels")) != 1L) 
        if (formula[[3L]] == 1L) 
            oneSample <- TRUE
        else stop("'formula' missing or incorrect")
    m <- match.call(expand.dots = FALSE)
    if (is.matrix(eval(m$data, parent.frame()))) 
        m$data <- as.data.frame(data)
    m[[1L]] <- quote(stats::model.frame)
    m$... <- NULL
    mf <- eval(m, parent.frame())
    rname <- names(mf)[1L]
    DNAME <- paste(names(mf), collapse = " by ")
    names(mf) <- NULL
    response <- attr(attr(mf, "terms"), "response")
    if (!oneSample) {
        g <- factor(mf[[-response]])
        if (nlevels(g) != 2L) 
            stop("grouping factor must have exactly 2 levels")
        DATA <- split(mf[[response]], g)
        y <- ks.test(x = DATA[[1L]], y = DATA[[2L]], ...)
        y$alternative <- gsub("x", levels(g)[1L], y$alternative)
        y$alternative <- gsub("y", levels(g)[2L], y$alternative)
        y$response <- rname
        y$groups <- levels(g)
    }
    else {
        respVar <- mf[[response]]
        y <- ks.test(x = respVar, ...)
        y$alternative <- gsub("x", DNAME, y$alternative)
    }
    y$data.name <- DNAME
    y
}
