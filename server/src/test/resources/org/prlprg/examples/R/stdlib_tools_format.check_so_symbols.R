#? stdlib
`format.check_so_symbols` <- function (x, ...) 
{
    if (!length(x)) 
        return(character())
    entries <- split.data.frame(x, x[, "osname"])
    objects <- vector("list", length(entries))
    names(objects) <- names(entries)
    if (length(objs <- attr(x, "objects"))) 
        objects[names(objs)] <- objs
    c(gettextf("File %s:", sQuote(attr(x, "file"))), unlist(Map(function(u, 
        v, w) c(strwrap(gettextf("Found %s, possibly from %s", 
        sQuote(v), paste(sprintf("%s (%s)", sQuote(u[, "ssname"]), 
            u[, "language"]), collapse = ", ")), indent = 2L, 
        exdent = 4L), if (length(w) > 1L) {
        strwrap(sprintf("Objects: %s", paste(sQuote(w), collapse = ", ")), 
            indent = 4L, exdent = 6L)
    } else if (length(w)) {
        strwrap(sprintf("Object: %s", sQuote(w)), indent = 4L, 
            exdent = 6L)
    }), entries, names(entries), objects)))
}
