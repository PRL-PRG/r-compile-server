#? stdlib
`unstack.default` <- function (x, form, ...) 
{
    x <- as.list(x)
    form <- stats::as.formula(form)
    if ((length(form) < 3) || (length(all.vars(form)) > 2)) 
        stop("'form' must be a two-sided formula with one term on each side")
    res <- c(tapply(eval(form[[2L]], x), eval(form[[3L]], x), 
        as.vector))
    if (length(res) >= 2L && any(diff(lengths(res)) != 0L)) 
        return(res)
    data.frame(res, stringsAsFactors = FALSE)
}
