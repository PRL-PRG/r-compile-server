#? stdlib
`print.summaryDefault` <- function (x, digits = max(3L, getOption("digits") - 3L), ...) 
{
    xx <- x
    if (is.numeric(x) || is.complex(x)) {
        finite <- is.finite(x)
        xx[finite] <- zapsmall(x[finite])
    }
    class(xx) <- class(x)[-1]
    m <- match("NA's", names(xx), 0)
    if (inherits(x, "Date") || inherits(x, "POSIXct")) {
        xx <- if (length(a <- attr(x, "NAs"))) 
            c(format(xx, digits = digits), `NA's` = as.character(a))
        else format(xx, digits = digits)
        print(xx, digits = digits, ...)
        return(invisible(x))
    }
    else if (m && !is.character(x)) 
        xx <- c(format(xx[-m], digits = digits), `NA's` = as.character(xx[m]))
    print.table(xx, digits = digits, ...)
    invisible(x)
}
