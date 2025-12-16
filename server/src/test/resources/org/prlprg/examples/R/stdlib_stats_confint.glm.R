#? stdlib
`confint.glm` <- function (object, parm, level = 0.95, trace = FALSE, test = c("LRT", 
    "Rao"), ...) 
{
    test <- match.arg(test)
    pnames <- names(coef(object))
    if (missing(parm)) 
        parm <- seq_along(pnames)
    else if (is.character(parm)) 
        parm <- match(parm, pnames, nomatch = 0L)
    message("Waiting for profiling to be done...")
    utils::flush.console()
    object <- profile(object, which = parm, alpha = (1 - level)/4, 
        trace = trace, test = test)
    confint(object, parm = parm, level = level, trace = trace, 
        test = test, ...)
}
