
#  Original flexclust code is 
#    Copyright (C) 2005-2009 Friedrich Leisch
#
#  and has been restructured and stripped off into this benchmark

normWeights <- function(x) x/mean(x)

kcca <- function(x, k, iter.max)
{
    x <- as.matrix(x)
    k <- as.integer(k)
    cluster <- integer(nrow(x))

    # takes some time
    centers <- kmeanspp(na.omit(unique(x)), k)

    for(iter in 1:iter.max){
            
        clustold <- cluster
        
        # takes some time
        distmat <- distEuclidean(x, centers)

        cluster <- kmeansCluster(x, distmat=distmat)
        centers <- kmeansAllcent(x, cluster=cluster, k=k)
        ## NAs in centers are empty clusters
        centers <- centers[complete.cases(centers),,drop=FALSE]
        k <- nrow(centers)
            
        changes <- sum(cluster!=clustold)
        if(changes==0) break
    }

    centers <- centers[complete.cases(centers),,drop=FALSE]
    
    r <- summarizeCenters(x, centers)
    append(r, list(iter = iter))
}

kmeansCluster <- function(x, centers, n=1, distmat=NULL)
{

    if(is.null(distmat))
        distmat <- z@dist(x, centers)
        
    if(n==1){
        return(max.col(-distmat))
    }
    else{
        r <- t(matrix(apply(distmat, 1,
                            rank, ties.method="random"),
                      nrow=ncol(distmat)))
        z <- list()
        for(k in 1:n)
            z[[k]] <- apply(r, 1, function(x) which(x==k))
    }
    return(z)
}

kmeansAllcent <- function(x, cluster, k=max(cluster, na.rm=TRUE))
{
    centers <- matrix(NA, nrow=k, ncol=ncol(x))
    for(n in 1:k){
        if(sum(cluster==n, na.rm=TRUE)>0){
            centers[n,] <- colMeans(x[cluster==n,,drop=FALSE])
        }
    }
    centers
}

kmeanspp <- function(x, k)
{
    centers <- matrix(0, nrow=k, ncol=ncol(x))
    centers[1,] <- x[sample(1:nrow(x), 1), , drop=FALSE]
    d <- distEuclidean(x, centers[1L,,drop=FALSE])^2
    for(l in 2:k){
        centers[l,] <- x[sample(1:nrow(x), 1, prob=d), , drop=FALSE]
        d <- pmin(d, distEuclidean(x, centers[l,,drop=FALSE])^2)
    }
    centers
}
                  
summarizeCenters <- function(x, centers)
{
    distmat <- distEuclidean(x, centers)
    cluster <- kmeansCluster(n=2, distmat=distmat)
        
    if(ncol(distmat)>1){
        ## at least 2 clusters
        cldist <- cbind(distmat[cbind(1:nrow(x), cluster[[1]])],
                        distmat[cbind(1:nrow(x), cluster[[2]])])
        clsim <- computeClusterSim(distmat,cluster)
    }
    else{
        ## only one cluster
        cldist <- distmat
        clsim <- as.matrix(1)
    }
            
    xcent <- colMeans(x)
    totaldist <- sum(distEuclidean(x, matrix(xcent,nrow=1)))
    clusinfo <- clusinfo(cluster[[1]], cldist)
    sse <- sum(cldist[,1]**2)

    list(xcent = xcent, totaldist = totaldist, clusinfo = clusinfo,
         cldist = cldist, sse = sse)
}

clusinfo <- function(cluster, cldist)
### cluster: vector of cluster memberships
### cldist: matrix with 1 or 2 columns
{
    size <- as.vector(table(cluster))
    
    clusinfo <-
        data.frame(size=size,
                   av_dist = as.vector(tapply(cldist[,1], cluster, sum))/size)

    clusinfo <- cbind(clusinfo,
                      max_dist = as.vector(tapply(cldist[,1], cluster, max)),
                      separation = as.vector(tapply(cldist[,2], cluster, min)))
    clusinfo
}

computeClusterSim <- function(distmat, cluster)
{
    K <- max(cluster[[1]])
    z <- matrix(0, ncol=K, nrow=K)

    for(k in 1:K){
        ok1 <- cluster[[1]]==k
        if(any(ok1)){
            for(n in 1:K){
                if(k!=n){
                    ok2 <- ok1 & cluster[[2]]==n
                    if(any(ok2)){
                        z[k,n] <- 2*sum(distmat[ok2,k]/
                                        (distmat[ok2,k]+distmat[ok2,n]))
                    }
                }
            }
            z[k,] <- z[k,]/sum(ok1)
        }
    }
    diag(z) <- 1
    z
}

list2object = function(from, to){
    n = names(from)
    s = slotNames(to)
    p = pmatch(n, s)
    if(any(is.na(p)))
        stop(paste("\nInvalid slot name(s) for class",
                   to, ":", paste(n[is.na(p)], collapse=" ")))
    names(from) = s[p]
    do.call("new", c(from, Class=to))
}

## Assign each observation to the cluster minimizing the sum
## of distances to all group members.
minSumClusters <- function(cluster, group, distmat)
{
    G <- levels(group)
    x <- matrix(0, ncol=ncol(distmat), nrow=length(G))

    for(n in 1:length(G)){
        x[n,] <- colSums(distmat[group==G[n],,drop=FALSE])
    }

    m <- max.col(-x)
    names(m) <- G
    z <- m[group]
    names(z) <- NULL

    if(is.list(cluster))
    {
        ## get second best
        x[cbind(1:nrow(x), m)] <- Inf
        m <- max.col(-x)
        names(m) <- G
        z1 <- m[group]
        names(z1) <- NULL
        z <- list(z, z1)
    }
    z
}

distEuclidean <- function(x, centers)
{
    if(ncol(x)!=ncol(centers))
        stop(sQuote("x")," and ",sQuote("centers"),
             " must have the same number of columns")
    z <- matrix(0, nrow=nrow(x), ncol=nrow(centers))
    for(k in 1:nrow(centers)){
        z[,k] <- sqrt( colSums((t(x) - centers[k,])^2) )
    }
    z
}

# ---------------------------------------------------

fname <- "aloi-8d.csv.gz"
alldata <- read.csv(gzfile(fname), header=F, sep=" ")
data <- alldata[,1:8]

execute <- function(k) {
  set.seed(42)
  km <- kcca(data, k=k, iter.max=10000)
  cat("Flexclust::kcca ", k, "", km$sse, " " , km$iter, "\n")
}
