#? stdlib
`print.dist` <- function (x, diag = NULL, upper = NULL, digits = getOption("digits"), 
    justify = "none", right = TRUE, ...) 
{
    if (length(x)) {
        if (is.null(diag)) 
            diag <- attr(x, "Diag") %||% FALSE
        if (is.null(upper)) 
            upper <- attr(x, "Upper") %||% FALSE
        m <- as.matrix(x)
        cf <- format(m, digits = digits, justify = justify)
        if (!upper) 
            cf[row(cf) < col(cf)] <- ""
        if (!diag) 
            cf[row(cf) == col(cf)] <- ""
        print(if (diag || upper) 
            cf
        else cf[-1, -attr(x, "Size"), drop = FALSE], quote = FALSE, 
            right = right, ...)
    }
    else {
        cat(data.class(x), "(0)\n", sep = "")
    }
    invisible(x)
}
