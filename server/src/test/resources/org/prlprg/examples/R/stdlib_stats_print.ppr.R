#? stdlib
`print.ppr` <- function (x, ...) 
{
    if (!is.null(cl <- x$call)) {
        cat("Call:\n")
        dput(cl, control = NULL)
    }
    mu <- x$mu
    ml <- x$ml
    cat("\nGoodness of fit:\n")
    gof <- setNames(x$gofn, paste(1L:ml, "terms"))
    print(format(gof[mu:ml], ...), quote = FALSE)
    invisible(x)
}
