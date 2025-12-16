#? stdlib
`confint.profile.nls` <- function (object, parm = seq_along(pnames), level = 0.95, ...) 
{
    pnames <- names(object)
    ncoefs <- length(coef(attr(object, "original.fit")))
    of <- attr(object, "original.fit")
    if (is.numeric(parm)) 
        parm <- pnames[parm]
    parm <- parm[parm %in% pnames]
    n <- length(fitted(of)) - length(of$m$getPars())
    a <- (1 - level)/2
    a <- c(a, 1 - a)
    pct <- paste(round(100 * a, 1), "%", sep = "")
    ci <- array(NA, dim = c(length(parm), 2L), dimnames = list(parm, 
        pct))
    cutoff <- qt(a, n)
    for (pm in parm) {
        pro <- object[[pm]]
        sp <- if (ncoefs > 1) 
            spline(x = pro[, "par.vals"][, pm], y = pro$tau)
        else spline(x = pro[, "par.vals"], y = pro$tau)
        ci[pm, ] <- approx(sp$y, sp$x, xout = cutoff)$y
    }
    drop(ci)
}
