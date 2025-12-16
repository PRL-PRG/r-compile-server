#? stdlib
`print.summary.nls` <- function (x, digits = max(3L, getOption("digits") - 3L), symbolic.cor = x$symbolic.cor, 
    signif.stars = getOption("show.signif.stars"), ...) 
{
    cat("\nFormula: ", paste(deparse(x$formula), sep = "\n", 
        collapse = "\n"), "\n", sep = "")
    df <- x$df
    rdf <- df[2L]
    cat("\nParameters:\n")
    printCoefmat(x$coefficients, digits = digits, signif.stars = signif.stars, 
        ...)
    cat("\nResidual standard error:", format(signif(x$sigma, 
        digits)), "on", rdf, "degrees of freedom")
    cat("\n")
    correl <- x$correlation
    if (!is.null(correl)) {
        p <- NCOL(correl)
        if (p > 1) {
            cat("\nCorrelation of Parameter Estimates:\n")
            if (is.logical(symbolic.cor) && symbolic.cor) {
                print(symnum(correl, abbr.colnames = NULL))
            }
            else {
                correl <- format(round(correl, 2), nsmall = 2L, 
                  digits = digits)
                correl[!lower.tri(correl)] <- ""
                print(correl[-1, -p, drop = FALSE], quote = FALSE)
            }
        }
    }
    .p.nls.convInfo(x, digits = digits)
    if (nzchar(mess <- naprint(x$na.action))) 
        cat("  (", mess, ")\n", sep = "")
    cat("\n")
    invisible(x)
}
