#? stdlib
`assert_NULL_or_prob` <- function (x) 
{
    if (!is.null(x) && (!is.numeric(x) || any(0 > x | x > 1))) 
        stop(gettextf("'%s' must be numeric in [0, 1]", deparse1(substitute(x))), 
            call. = FALSE)
    invisible(x)
}
