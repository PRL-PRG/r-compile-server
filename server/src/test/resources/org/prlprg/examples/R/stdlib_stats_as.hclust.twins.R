#? stdlib
`as.hclust.twins` <- function (x, ...) 
{
    r <- list(merge = x$merge, height = sort(x$height), order = x$order, 
        labels = if (!is.null(lb <- x$order.lab)) {
            lb[sort.list(x$order)]
        } else rownames(x$data), call = x$call %||% match.call(), 
        method = x$method %||% NA, dist.method = attr(x$diss, 
            "Metric"))
    class(r) <- "hclust"
    r
}
