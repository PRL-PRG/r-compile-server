#? stdlib
`effects.lm` <- function (object, set.sign = FALSE, ...) 
{
    eff <- object$effects
    if (is.null(eff)) 
        stop("'object' has no 'effects' component")
    if (set.sign) {
        dd <- coef(object)
        if (is.matrix(eff)) {
            r <- 1L:dim(dd)[1L]
            eff[r, ] <- sign(dd) * abs(eff[r, ])
        }
        else {
            r <- seq_along(dd)
            eff[r] <- sign(dd) * abs(eff[r])
        }
    }
    structure(eff, assign = object$assign, class = "coef")
}
