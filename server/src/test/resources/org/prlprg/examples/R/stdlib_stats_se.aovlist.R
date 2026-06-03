#? stdlib
`se.aovlist` <- function (object, dn.proj, dn.strata, factors, mf, efficiency, 
    n, type = "diff.means", ...) 
{
    if (type != "effects") 
        stop(gettextf("SEs for type '%s' are not yet implemented", 
            type), domain = NA)
    RSS <- sapply(object, function(x) sum(x$residuals^2)/x$df.residual)
    res <- vector(length = length(n), mode = "list")
    names(res) <- names(n)
    for (i in names(n)) {
        sse <- RSS[[dn.strata[dn.proj[[i]]]]]
        if (any(efficiency)) 
            sse <- sse/efficiency[i]
        res[[i]] <- as.vector(sqrt(sse/n[i]))
        class(res[[i]]) <- "mtable"
    }
    attr(res, "type") <- type
    res
}
