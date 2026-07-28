#? stdlib
`print.mtable` <- function (x, ..., digits = getOption("digits"), quote = FALSE, 
    right = FALSE) 
{
    xxx <- x
    xx <- attr(x, "Notes")
    a.ind <- match(names(a <- attributes(x)), c("dim", "dimnames", 
        "names"))
    a <- a[!is.na(a.ind)]
    class(x) <- attributes(x) <- NULL
    attributes(x) <- a
    if (length(x) == 1 && is.null(names(x)) && is.null(dimnames(x))) 
        names(x) <- rep("", length(x))
    if (length(dim(x)) && is.numeric(x)) {
        xna <- is.na(x)
        x <- format(zapsmall(x, digits))
        x[xna] <- "  "
    }
    print(x, quote = quote, right = right, ...)
    if (length(xx)) {
        cat("\nNotes:\n")
        print(xx)
    }
    invisible(xxx)
}
