#? stdlib
`reorder.dendrogram` <- function (x, wts, agglo.FUN = sum, ...) 
{
    if (!inherits(x, "dendrogram")) 
        stop("'reorder.dendrogram' requires a dendrogram")
    agglo.FUN <- match.fun(agglo.FUN)
    oV <- function(x, wts) {
        depth <- 0L
        kk <- jj <- integer()
        xx <- list()
        repeat {
            if (is.leaf(x)) 
                attr(x, "value") <- wts[x[1L]]
            else {
                k <- length(x)
                if (k == 0L) 
                  stop("invalid (length 0) node in dendrogram")
                depth <- depth + 1L
                kk[depth] <- k
                if (storage.mode(jj) != storage.mode(kk)) 
                  storage.mode(jj) <- storage.mode(kk)
                xx[[depth]] <- x
                x <- x[[jj[depth] <- 1L]]
                next
            }
            while (depth) {
                b <- x
                x <- xx[[depth]]
                j <- jj[depth]
                x[[j]] <- b
                if (j < kk[depth]) 
                  break
                depth <- depth - 1L
                vals <- vapply(x, attr, numeric(1L), which = "value")
                iOrd <- sort.list(vals)
                attr(x, "value") <- agglo.FUN(vals[iOrd])
                x[] <- x[iOrd]
            }
            if (!depth) 
                break
            xx[[depth]] <- x
            x <- x[[jj[depth] <- j + 1L]]
        }
        x
    }
    midcache.dendrogram(oV(x, wts))
}

# Examples
require(graphics)

set.seed(123)
x <- rnorm(10)
hc <- hclust(dist(x))
dd <- as.dendrogram(hc)
dd.reorder <- reorder(dd, 10:1)
plot(dd, main = "random dendrogram 'dd'")

op <- par(mfcol = 1:2)
plot(dd.reorder, main = "reorder(dd, 10:1)")
plot(reorder(dd, 10:1, agglo.FUN = mean), main = "reorder(dd, 10:1, mean)")
par(op)

