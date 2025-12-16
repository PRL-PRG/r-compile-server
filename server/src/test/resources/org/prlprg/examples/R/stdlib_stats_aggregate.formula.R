#? stdlib
`aggregate.formula` <- function (x, data, FUN, ..., subset, na.action = na.omit) 
{
    if (missing(x)) 
        stop("argument 'x' is  missing -- it has been renamed from 'formula'")
    if (!inherits(x, "formula")) 
        stop("argument 'x' must be a formula")
    if (length(x) != 3L) 
        stop("formula 'x' must have both left and right hand sides")
    m <- match.call(expand.dots = FALSE)
    if (is.matrix(eval(m$data, parent.frame()))) 
        m$data <- as.data.frame(data)
    m$... <- m$FUN <- NULL
    names(m)[match("x", names(m))] <- "formula"
    m[[1L]] <- quote(stats::model.frame)
    if (x[[2L]] == quote(.)) {
        rhs <- as.list(attr(terms(x[-2L]), "variables")[-1])
        lhs <- as.call(c(quote(cbind), setdiff(lapply(names(data), 
            as.name), rhs)))
        x[[2L]] <- lhs
        m[[2L]] <- x
    }
    mf <- eval(m, parent.frame())
    lhs <- if (is.matrix(mf[[1L]])) {
        as.data.frame(mf[[1L]])
    }
    else mf[1L]
    aggregate.data.frame(lhs, mf[-1L], FUN = FUN, ...)
}
