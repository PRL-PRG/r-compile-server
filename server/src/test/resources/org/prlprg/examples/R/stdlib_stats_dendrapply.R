#? stdlib
`dendrapply` <- function (X, FUN, ...) 
{
    FUN <- match.fun(FUN)
    if (!inherits(X, "dendrogram")) 
        stop("'X' is not a dendrogram")
    Napply <- function(d) {
        r <- FUN(d, ...)
        if (!is.leaf(d)) {
            if (!is.list(r)) 
                r <- as.list(r)
            if (length(r) < (n <- length(d))) 
                r[seq_len(n)] <- vector("list", n)
            r[] <- lapply(d, Napply)
        }
        r
    }
    Napply(X)
}

# Examples
require(graphics)

## a smallish simple dendrogram
dhc <- as.dendrogram(hc <- hclust(dist(USArrests), "ave"))
(dhc21 <- dhc[[2]][[1]])

## too simple:
dendrapply(dhc21, function(n) utils::str(attributes(n)))

## toy example to set colored leaf labels :
local({
  colLab <<- function(n) {
      if(is.leaf(n)) {
        a <- attributes(n)
        i <<- i+1
        attr(n, "nodePar") <-
            c(a$nodePar, list(lab.col = mycols[i], lab.font = i%%3))
      }
      n
  }
  mycols <- grDevices::rainbow(attr(dhc21,"members"))
  i <- 0
 })
dL <- dendrapply(dhc21, colLab)
op <- par(mfrow = 2:1)
 plot(dhc21)
 plot(dL) ## --> colored labels!
par(op)

