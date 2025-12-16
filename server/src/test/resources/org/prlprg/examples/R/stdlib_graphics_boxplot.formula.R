#? stdlib
`boxplot.formula` <- function (formula, data = NULL, ..., subset, na.action = NULL, 
    xlab = mklab(y_var = horizontal), ylab = mklab(y_var = !horizontal), 
    add = FALSE, ann = !add, horizontal = FALSE, drop = FALSE, 
    sep = ".", lex.order = FALSE) 
{
    if (missing(formula) || (length(formula) != 3L)) 
        stop("'formula' missing or incorrect")
    if (missing(xlab) || missing(ylab)) 
        mklab <- function(y_var) if (y_var) 
            names(mf)[response]
        else paste(names(mf)[-response], collapse = " : ")
    m <- match.call(expand.dots = FALSE)
    if (is.matrix(eval(m$data, parent.frame()))) 
        m$data <- as.data.frame(data)
    m$... <- m$drop <- m$sep <- m$lex.order <- NULL
    m$xlab <- m$ylab <- m$add <- m$ann <- m$horizontal <- NULL
    m$na.action <- na.action
    m[[1L]] <- quote(stats::model.frame.default)
    mf <- eval(m, parent.frame())
    response <- attr(attr(mf, "terms"), "response")
    boxplot(split(mf[[response]], mf[-response], drop = drop, 
        sep = sep, lex.order = lex.order), xlab = xlab, ylab = ylab, 
        add = add, ann = ann, horizontal = horizontal, ...)
}
