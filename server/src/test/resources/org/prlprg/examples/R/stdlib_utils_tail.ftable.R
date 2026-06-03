#? stdlib
`tail.ftable` <- function (x, n = 6L, keepnums = FALSE, addrownums, ...) 
{
    if (!missing(addrownums)) {
        .Deprecated(msg = gettext("tail(., addrownums=.) is", 
            " deprecated.\nUse ", "tail(., keepnums=.) instead.\n"))
        if (missing(keepnums)) 
            keepnums <- addrownums
    }
    r <- format(x)
    dimnames(r) <- list(if (!keepnums) rep.int("", nrow(r)), 
        if (!keepnums) rep.int("", ncol(r)))
    noquote(tail.matrix(r, n = n, keepnums = keepnums, ...))
}
