#? stdlib
`print.summary.loess` <- function (x, digits = max(3L, getOption("digits") - 3L), ...) 
{
    print.loess(x, digits = digits, ...)
    prs <- x$pars
    cat("Trace of smoother matrix: ", format(round(x$trace.hat, 
        2L)), "  (", prs$trace.hat, ")\n", sep = "")
    cat("\nControl settings:\n")
    cat("  span     : ", format(prs$span), "\n")
    cat("  degree   : ", prs$degree, "\n")
    cat("  family   : ", prs$family)
    if (prs$family != "gaussian") 
        cat("\t    iterations =", prs$iterations)
    cat("\n  surface  : ", prs$surface)
    if (prs$surface == "interpolate") 
        cat("\t  cell =", format(prs$cell))
    cat("\n  normalize: ", prs$normalize)
    cat("\n parametric: ", prs$parametric)
    cat("\ndrop.square: ", prs$drop.square, "\n")
    invisible(x)
}
