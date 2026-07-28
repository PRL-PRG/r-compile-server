#? stdlib
`order.dendrogram` <- function (x) 
{
    if (!inherits(x, "dendrogram")) 
        stop("'order.dendrogram' requires a dendrogram")
    if (is.list(x)) 
        unlist(x)
    else as.vector(x)
}

# Examples
set.seed(123)
x <- rnorm(10)
hc <- hclust(dist(x))
hc$order
dd <- as.dendrogram(hc)
order.dendrogram(dd) ## the same :
stopifnot(hc$order == order.dendrogram(dd))

d2 <- as.dendrogram(hclust(dist(USArrests)))
labels(d2) ## in this case the same as
stopifnot(identical(labels(d2),
   rownames(USArrests)[order.dendrogram(d2)]))

