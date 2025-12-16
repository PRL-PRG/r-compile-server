#? stdlib
`hclust` <- function (d, method = "complete", members = NULL) 
{
    METHODS <- c("ward.D", "single", "complete", "average", "mcquitty", 
        "median", "centroid", "ward.D2")
    if (method == "ward") {
        message("The \"ward\" method has been renamed to \"ward.D\"; note new \"ward.D2\"")
        method <- "ward.D"
    }
    i.meth <- pmatch(method, METHODS)
    if (is.na(i.meth)) 
        stop("invalid clustering method", paste("", method))
    if (i.meth == -1) 
        stop("ambiguous clustering method", paste("", method))
    n <- as.integer(attr(d, "Size"))
    if (is.null(n)) 
        stop("invalid dissimilarities")
    if (is.na(n) || n > 65536L) 
        stop("size cannot be NA nor exceed 65536")
    if (n < 2) 
        stop("must have n >= 2 objects to cluster")
    len <- as.integer(n * (n - 1)/2)
    if (length(d) != len) 
        (if (length(d) < len) 
            stop
        else warning)("dissimilarities of improper length")
    if (is.null(members)) 
        members <- rep(1, n)
    else if (length(members) != n) 
        stop("invalid length of members")
    storage.mode(d) <- "double"
    hcl <- .Fortran(C_hclust, n = n, len = len, method = as.integer(i.meth), 
        ia = integer(n), ib = integer(n), crit = double(n), members = as.double(members), 
        nn = integer(n), disnn = double(n), diss = d)
    hcass <- .Fortran(C_hcass2, n = n, ia = hcl$ia, ib = hcl$ib, 
        order = integer(n), iia = integer(n), iib = integer(n))
    structure(list(merge = cbind(hcass$iia[1L:(n - 1)], hcass$iib[1L:(n - 
        1)]), height = hcl$crit[1L:(n - 1)], order = hcass$order, 
        labels = attr(d, "Labels"), method = METHODS[i.meth], 
        call = match.call(), dist.method = attr(d, "method")), 
        class = "hclust")
}

# Examples
require(graphics)

### Example 1: Violent crime rates by US state

hc <- hclust(dist(USArrests), "ave")
plot(hc)
plot(hc, hang = -1)

## Do the same with centroid clustering and *squared* Euclidean distance,
## cut the tree into ten clusters and reconstruct the upper part of the
## tree from the cluster centers.
hc <- hclust(dist(USArrests)^2, "cen")
memb <- cutree(hc, k = 10)
cent <- NULL
for(k in 1:10){
  cent <- rbind(cent, colMeans(USArrests[memb == k, , drop = FALSE]))
}
hc1 <- hclust(dist(cent)^2, method = "cen", members = table(memb))
opar <- par(mfrow = c(1, 2))
plot(hc,  labels = FALSE, hang = -1, main = "Original Tree")
plot(hc1, labels = FALSE, hang = -1, main = "Re-start from 10 clusters")
par(opar)

### Example 2: Straight-line distances among 10 US cities
##  Compare the results of algorithms "ward.D" and "ward.D2"

mds2 <- -cmdscale(UScitiesD)
plot(mds2, type="n", axes=FALSE, ann=FALSE)
text(mds2, labels=rownames(mds2), xpd = NA)

hcity.D  <- hclust(UScitiesD, "ward.D") # "wrong"
hcity.D2 <- hclust(UScitiesD, "ward.D2")
opar <- par(mfrow = c(1, 2))
plot(hcity.D,  hang=-1)
plot(hcity.D2, hang=-1)
par(opar)

