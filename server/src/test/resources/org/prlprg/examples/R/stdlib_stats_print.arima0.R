#? stdlib
`print.arima0` <- function (x, digits = max(3L, getOption("digits") - 3L), se = TRUE, 
    ...) 
{
    cat("\nCall:", deparse(x$call, width.cutoff = 75L), "", sep = "\n")
    cat("Coefficients:\n")
    coef <- round(x$coef, digits = digits)
    if (se && nrow(x$var.coef)) {
        ses <- rep_len(0, length(coef))
        ses[x$mask] <- round(sqrt(diag(x$var.coef)), digits = digits)
        coef <- matrix(coef, 1, dimnames = list(NULL, names(coef)))
        coef <- rbind(coef, s.e. = ses)
    }
    print.default(coef, print.gap = 2)
    cm <- x$call$method
    if (is.null(cm) || cm != "CSS") 
        cat("\nsigma^2 estimated as ", format(x$sigma2, digits = digits), 
            ":  log likelihood = ", format(round(x$loglik, 2)), 
            ",  aic = ", format(round(x$aic, 2)), "\n", sep = "")
    else cat("\nsigma^2 estimated as ", format(x$sigma2, digits = digits), 
        ":  part log likelihood = ", format(round(x$loglik, 2)), 
        "\n", sep = "")
    invisible(x)
}
