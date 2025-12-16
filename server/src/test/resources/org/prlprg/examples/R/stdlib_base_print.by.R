#? stdlib
`print.by` <- function (x, ..., vsep) 
{
    d <- dim(x)
    dn <- dimnames(x)
    dnn <- names(dn)
    if (missing(vsep)) 
        vsep <- strrep("-", 0.75 * getOption("width"))
    lapply(X = seq_along(x), FUN = function(i, x, vsep, ...) {
        if (i != 1L && !is.null(vsep)) 
            cat(vsep, "\n")
        ii <- i - 1L
        for (j in seq_along(dn)) {
            iii <- ii%%d[j] + 1L
            ii <- ii%/%d[j]
            cat(dnn[j], ": ", dn[[j]][iii], "\n", sep = "")
        }
        print(x[[i]], ...)
    }, x, vsep, ...)
    invisible(x)
}
