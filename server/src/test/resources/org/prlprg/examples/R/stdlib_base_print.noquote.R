#? stdlib
`print.noquote` <- function (x, quote = FALSE, right = FALSE, ...) 
{
    if (copy <- !is.null(cl <- attr(x, "class"))) {
        isNQ <- cl == "noquote"
        if (missing(right)) 
            right <- any("right" == names(cl[isNQ]))
        if (copy <- any(isNQ)) {
            ox <- x
            cl <- cl[!isNQ]
            attr(x, "class") <- if (length(cl)) 
                cl
        }
    }
    print(x, quote = quote, right = right, ...)
    invisible(if (copy) ox else x)
}
