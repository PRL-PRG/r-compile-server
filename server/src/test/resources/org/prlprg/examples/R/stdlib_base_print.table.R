#? stdlib
`print.table` <- function (x, digits = getOption("digits"), quote = FALSE, na.print = "", 
    zero.print = "0", right = is.numeric(x) || is.complex(x), 
    justify = "none", ...) 
{
    d <- dim(x)
    if (any(d == 0)) {
        cat("< table of extent", paste(d, collapse = " x "), 
            ">\n")
        return(invisible(x))
    }
    xx <- format(unclass(x), digits = digits, justify = justify)
    if (any(ina <- is.na(x))) 
        xx[ina] <- na.print
    if (zero.print != "0" && any(i0 <- !ina & x == 0)) 
        xx[i0] <- zero.print
    print(xx, quote = quote, right = right, ...)
    invisible(x)
}
