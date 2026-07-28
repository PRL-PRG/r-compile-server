#? stdlib
`ftable.formula` <- function (formula, data = NULL, subset, na.action, ...) 
{
    if (missing(formula) || !inherits(formula, "formula")) 
        stop("'formula' missing or incorrect")
    if (length(formula) != 3L) 
        stop("'formula' must have both left and right hand sides")
    tt <- if (is.data.frame(data)) 
        terms(formula, data = data)
    else terms(formula, allowDotAsName = TRUE)
    if (any(attr(tt, "order") > 1)) 
        stop("interactions are not allowed")
    rvars <- attr(terms(formula[-2L], allowDotAsName = TRUE), 
        "term.labels")
    cvars <- attr(terms(formula[-3L], allowDotAsName = TRUE), 
        "term.labels")
    rhs.has.dot <- any(rvars == ".")
    lhs.has.dot <- any(cvars == ".")
    if (lhs.has.dot && rhs.has.dot) 
        stop("'formula' has '.' in both left and right hand sides")
    m <- match.call(expand.dots = FALSE)
    edata <- eval(m$data, parent.frame())
    if (inherits(edata, "ftable") || inherits(edata, "table") || 
        length(dim(edata)) > 2L) {
        if (inherits(edata, "ftable")) {
            data <- as.table(data)
        }
        varnames <- names(dimnames(data))
        if (rhs.has.dot) 
            rvars <- NULL
        else {
            i <- pmatch(rvars, varnames)
            if (anyNA(i)) 
                stop("incorrect variable names in rhs of formula")
            rvars <- i
        }
        if (lhs.has.dot) 
            cvars <- NULL
        else {
            i <- pmatch(cvars, varnames)
            if (anyNA(i)) 
                stop("incorrect variable names in lhs of formula")
            cvars <- i
        }
        ftable(data, row.vars = rvars, col.vars = cvars)
    }
    else {
        if (is.matrix(edata)) 
            m$data <- as.data.frame(data)
        m$... <- NULL
        if (!is.null(data) && is.environment(data)) {
            varnames <- names(data)
            if (rhs.has.dot) 
                rvars <- seq_along(varnames)[-cvars]
            if (lhs.has.dot) 
                cvars <- seq_along(varnames)[-rvars]
        }
        else {
            if (lhs.has.dot || rhs.has.dot) 
                stop("cannot use dots in formula with given data")
        }
        m$formula <- as.formula(paste("~", paste(c(rvars, cvars), 
            collapse = "+")), env = environment(formula))
        m[[1L]] <- quote(stats::model.frame)
        mf <- eval(m, parent.frame())
        ftable(mf, row.vars = rvars, col.vars = cvars, ...)
    }
}

# Examples
Titanic
x <- ftable(Survived ~ ., data = Titanic)
x
ftable(Sex ~ Class + Age, data = x)

