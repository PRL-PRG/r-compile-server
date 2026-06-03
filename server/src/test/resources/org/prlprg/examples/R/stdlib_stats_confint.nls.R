#? stdlib
`confint.nls` <- function (object, parm, level = 0.95, ...) 
{
    pnames <- names(coef(object))
    if (missing(parm)) 
        parm <- seq_along(pnames)
    if (is.numeric(parm)) 
        parm <- pnames[parm]
    message("Waiting for profiling to be done...")
    utils::flush.console()
    object <- profile(object, which = parm, alphamax = (1 - level)/4)
    confint(object, parm = parm, level = level, ...)
}
