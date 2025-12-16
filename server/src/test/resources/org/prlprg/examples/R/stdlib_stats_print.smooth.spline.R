#? stdlib
`print.smooth.spline` <- function (x, digits = getOption("digits"), ...) 
{
    if (!is.null(cl <- x$call)) {
        cat("Call:\n")
        dput(cl, control = NULL)
    }
    ip <- x$iparms
    cat("\nSmoothing Parameter  spar=", format(x$spar, digits = digits), 
        " lambda=", format(x$lambda, digits = digits), if (ip["ispar"] != 
            1L) 
            paste0("(", ip["iter"], " iterations)"))
    cat("\n")
    cat("Equivalent Degrees of Freedom (Df):", format(x$df, digits = digits))
    cat("\n")
    cat(sprintf("Penalized Criterion (%sRSS): %s\n", if (x$no.weights) 
        ""
    else "weighted ", format(x$pen.crit, digits = digits)))
    if (!is.na(cv <- x$cv)) 
        cat(if (cv) 
            "PRESS(l.o.o. CV): "
        else "GCV: ", format(x$cv.crit, digits = digits), "\n", 
            sep = "")
    invisible(x)
}
