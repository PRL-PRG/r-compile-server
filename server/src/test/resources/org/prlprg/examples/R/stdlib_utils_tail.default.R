#? stdlib
`tail.default` <- function (x, n = 6L, keepnums = FALSE, addrownums, ...) 
{
    .checkHT(n, dx <- dim(x))
    if (!is.null(dx)) 
        tail.array(x, n = n, keepnums = keepnums, addrownums = addrownums, 
            ...)
    else if (length(n) == 1L) {
        xlen <- length(x)
        n <- if (n < 0L) 
            max(xlen + n, 0L)
        else min(n, xlen)
        x[seq.int(to = xlen, length.out = n)]
    }
    else stop(gettextf("no method found for %s(., n=%s) and class %s", 
        "tail", deparse(n), sQuote(class(x))), domain = NA)
}
