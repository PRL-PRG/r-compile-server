#? stdlib
`confint.profile.glm` <- function (object, parm = seq_along(pnames), level = 0.95, trace = FALSE, 
    test = attr(object, "test"), ...) 
{
    if (is.null(test)) 
        test <- "LRT"
    of <- attr(object, "original.fit")
    pnames <- names(coef(of))
    if (is.character(parm)) 
        parm <- match(parm, pnames, nomatch = 0L)
    if (is.null(attr(object, "test"))) 
        attr(object, "test") <- "LRT"
    if (test != attr(object, "test")) {
        message("Reprofiling for ", test, " statistic. Waiting...")
        utils::flush.console()
        object <- profile(of, which = parm, alpha = (1 - level)/4, 
            trace = trace, test = test)
    }
    a <- (1 - level)/2
    a <- c(a, 1 - a)
    pct <- paste(round(100 * a, 1), "%")
    ci <- array(NA, dim = c(length(parm), 2L), dimnames = list(pnames[parm], 
        pct))
    cutoff <- qnorm(a)
    for (pm in parm) {
        pro <- object[[pnames[pm]]]
        if (is.null(pro)) 
            next
        if (length(pnames) > 1L) 
            sp <- spline(x = pro[, "par.vals"][, pm], y = pro[, 
                1])
        else sp <- spline(x = pro[, "par.vals"], y = pro[, 1])
        ci[pnames[pm], ] <- approx(sp$y, sp$x, xout = cutoff)$y
    }
    drop(ci)
}
