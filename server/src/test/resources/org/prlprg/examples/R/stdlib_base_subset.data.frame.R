#? stdlib
`subset.data.frame` <- function (x, subset, select, drop = FALSE, ...) 
{
    chkDots(...)
    r <- if (missing(subset)) 
        rep_len(TRUE, nrow(x))
    else {
        e <- substitute(subset)
        r <- eval(e, x, parent.frame())
        if (!is.logical(r)) 
            stop("'subset' must be logical")
        r & !is.na(r)
    }
    vars <- if (missing(select)) 
        rep_len(TRUE, ncol(x))
    else {
        nl <- as.list(seq_along(x))
        names(nl) <- names(x)
        eval(substitute(select), nl, parent.frame())
    }
    x[r, vars, drop = drop]
}
