#? stdlib
`unstack.data.frame` <- function (x, form, ...) 
{
    form <- if (missing(form)) 
        stats::formula(x)
    else stats::as.formula(form)
    if (length(form) < 3) 
        stop("'form' must be a two-sided formula")
    res <- c(tapply(eval(form[[2L]], x), eval(form[[3L]], x), 
        as.vector))
    if (length(res) >= 2L && any(diff(lengths(res)) != 0L)) 
        return(res)
    data.frame(res, stringsAsFactors = FALSE)
}
