#? stdlib
`head.default` <- function (x, n = 6L, ...) 
{
    .checkHT(n, dx <- dim(x))
    if (!is.null(dx)) 
        head.array(x, n, ...)
    else if (length(n) == 1L) {
        n <- if (n < 0L) 
            max(length(x) + n, 0L)
        else min(n, length(x))
        x[seq_len(n)]
    }
    else stop(gettextf("no method found for %s(., n=%s) and class %s", 
        "head", deparse(n), sQuote(class(x))), domain = NA)
}
