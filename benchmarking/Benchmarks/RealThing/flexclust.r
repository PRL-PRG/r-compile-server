fname <- "aloi-8d.csv.gz"
alldata <- read.csv(gzfile(fname), header=F, sep=" ")
data <- alldata[,1:8]

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

setClass("ModelEnv",
    representation(
        env = "environment",
        get = "function",
        set = "function",
        hooks = "list"))

setClass("flexclustControl",
         representation(iter.max="numeric",
                        tolerance="numeric",
                        verbose="numeric",
                        classify="character",
                        initcent="character",
                        gamma="numeric",          # for kcca
                        simann="numeric",         # for kcca
                        ntry="numeric",           # for qtclust
                        min.size="numeric",       # for qtclust and ockc
                        subsampling="numeric"     # for ockc
                        ),
         prototype(iter.max=200,
                   tolerance=10e-7,
                   verbose=0,
                   classify="auto",
                   initcent="randomcent",
                   gamma=1,
                   simann=c(0.3, 0.95, 10),
                   ntry=5,
                   min.size=2,
                   subsampling=1))


setAs("list", "flexclustControl",
function(from, to){
    z <- list2object(from, to)
    z@classify <- match.arg(z@classify,
                            c("auto", "weighted", "hard", "simann"))
    z
})

setAs("NULL", "flexclustControl",
function(from, to){
    new(to)
})

setClass("kccaFamily",
         representation(name="character",
                        dist="function",
                        cent="function",
                        allcent="function",
                        wcent="function",
                        weighted="logical",
                        cluster="function",
                        preproc="function",
                        groupFun="function"),
         prototype(weighted=FALSE,
                   preproc=function(x) x))

setClass("flexclust",
         representation(k="integer",
                        cluster="integer",
                        iter="integer",
                        converged="logical",
                        clusinfo="data.frame",
                        index="numeric",
                        call="call",
                        control="flexclustControl",
                        data="ModelEnv"))


setClass("kccasimple",
         contains="flexclust",
         representation(centers="ANY",
                        family="kccaFamily",
                        cldist="matrix"))
setClass("kcca",
         contains="kccasimple",
         representation(second="integer",
                        xrange="ANY",           # range of all data
                        xcent="ANY",            # centroid of all data
                        totaldist="numeric",    # total dist data<->xcent
                        clsim="matrix"))

clusinfo <- function(cluster, cldist, simple=FALSE)
### cluster: vector of cluster memberships
### cldist: matrix with 1 or 2 columns
{
    size <- as.vector(table(cluster))

    clusinfo <-
        data.frame(size=size,
                   av_dist = as.vector(tapply(cldist[,1], cluster, sum))/size)

    if(!simple){
        clusinfo <- cbind(clusinfo,
                          max_dist = as.vector(tapply(cldist[,1], cluster, max)),
                          separation = as.vector(tapply(cldist[,2], cluster, min)))
    }
    clusinfo
}

simple2kcca <- function(x, from, group=NULL, distmat=NULL)
{
    if(is.null(distmat))
        distmat <- from@family@dist(x, from@centers)

    cluster <- from@family@cluster(n=2, distmat=distmat)
    if(!is.null(group))
        cluster <- from@family@groupFun(cluster, group, distmat)

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

    xcent <- from@family@cent(x)
    totaldist <- sum(from@family@dist(x, matrix(xcent,nrow=1)))

    z <- as(from, "kcca")
    z@second <- as(cluster[[2]], "integer")
    z@xcent <- xcent
    z@xrange <- apply(x, 2, range, na.rm=TRUE)
    z@totaldist <- totaldist
    z@clsim <- clsim
    z@clusinfo <- clusinfo(cluster[[1]], cldist, simple=FALSE)
    z@cldist <- cldist

    z
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

kccaFamily <- function(which=NULL, dist=NULL,
                       cent=NULL, name=which,
                       preproc=NULL,
                       trim=0, groupFun="minSumClusters")
{
    if(is.null(which) && is.null(dist))
        stop("either ", sQuote("which")," or ", sQuote("dist"),
             " must be specified\n")

    if(is.null(name)) name <- deparse(substitute(dist))

    z <- new("kccaFamily", name=name)

    if(!is.null(preproc)) z@preproc <- preproc

    if(!is.null(which)){
        which <- match.arg(which, c("kmeans", "kmedians",
                                    "angle", "jaccard",
                                    "ejaccard"))
        if(!is.null(name)) z@name <- which

        if(which == "kmeans"){
            z@dist <- distEuclidean
            if(trim==0){
                z@cent <- function(x) colMeans(x)
                z@wcent <- function(x, weights)
                    colMeans(x*normWeights(weights))
            }
            else{
                z@cent <- function(x)
                    apply(x, 2, mean, trim=trim)
                z@wcent <- function(x, weights)
                    apply(x*normWeights(weights), 2, mean, trim=trim)
            }
            z@weighted <- TRUE
        }
        else if(which == "kmedians"){
            z@dist <- distManhattan
            z@cent <- function(x) apply(x, 2, median)
        }
        else if(which == "angle"){
            z@dist <- distAngle
            z@cent <- centAngle
            z@wcent <- wcentAngle
            z@weighted <- TRUE
            z@preproc <- function(x) x/sqrt(rowSums(x^2))
        }
        else if(which == "jaccard"){
            z@dist <- distJaccard
            z@cent <- function(x) centOptim01(x, dist=distJaccard)
        }
        else if(which == "ejaccard"){
            z@dist <- distJaccard
            z@cent <- function(x) colMeans(x)
        }
    }
    else{
        if(is.character(dist))
            z@dist <- get(dist, mode="function")
        else
            z@dist <- dist

        if(is.null(cent))
            z@cent <- function(x)
                centOptim(x, dist=dist)
        else if(is.character(cent))
            z@cent <- get(cent, mode="function")
        else
            z@cent <- cent
    }

    ## fill in z@cluster and z@allcent which use lexical scoping
    eval(FAMILY_CLUSTER_ALLCENT)

    if(is.character(groupFun))
        groupFun <- get(groupFun, mode="function")
    z@groupFun <- groupFun

    z
}


FAMILY_CLUSTER_ALLCENT <- expression({

    z@cluster <- function(x, centers, n=1, distmat=NULL){

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

    z@allcent <- function(x, cluster, k=max(cluster, na.rm=TRUE))
    {
        centers <- matrix(NA, nrow=k, ncol=ncol(x))
        for(n in 1:k){
            if(sum(cluster==n, na.rm=TRUE)>0){
                centers[n,] <- z@cent(x[cluster==n,,drop=FALSE])
            }
        }
        centers
    }
})

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

initCenters <- function(x, k, family, control)
{
    cluster <- integer(nrow(x))
    if(is.matrix(k)){
        centers <- k
        if(any(duplicated(centers)))
            stop("initial centers are not distinct")
        k <- nrow(k)
    }
    else{
        if(length(k)>1){
            cluster <- rep(k, length=nrow(x))
            k <- max(cluster)
            centers <- family@allcent(x, cluster=cluster, k=k)
        }
        else{
            k <- as.integer(k)
            if(k<2) stop("number of clusters must be at least 2")
            ## we need to avoid duplicates here
            x <- na.omit(unique(x))
            if(nrow(x) < k)
                stop("k larger than number of distinct complete data points in x")
            centers <- do.call(control@initcent,
                               list(x=x, k=k, family=family))
        }
    }
    list(centers=centers, cluster=cluster, k=k)
}

kmeanspp <- function(x, k, family)
{
    centers <- matrix(0, nrow=k, ncol=ncol(x))
    centers[1,] <- x[sample(1:nrow(x), 1), , drop=FALSE]
    d <- family@dist(x, centers[1L,,drop=FALSE])^2
    for(l in 2:k){
        centers[l,] <- x[sample(1:nrow(x), 1, prob=d), , drop=FALSE]
        d <- pmin(d, family@dist(x, centers[l,,drop=FALSE])^2)
    }
    centers
}

newKccaObject <- function(x, family, centers, group=NULL, simple=FALSE,
                          ...)
{
    distmat <- family@dist(x, centers)

    z <- newKccasimpleObject(x=x, family=family, centers=centers,
                             group=group, distmat=distmat, ...)

    if(!simple){
        z <- simple2kcca(x=x, from=z, group=group, distmat=distmat)
    }

    z
}

newKccasimpleObject <- function(x, family, centers, group=NULL,
                                distmat=NULL, ...)
{
    if(is.null(distmat))
        distmat <- family@dist(x, centers)

    cluster <- family@cluster(distmat=distmat)
    if(!is.null(group))
        cluster <- family@groupFun(cluster, group, distmat)
    names(cluster) <- rownames(x)
    colnames(centers) <- colnames(x)

    size <- as.vector(table(cluster))
    cldist <- as(distmat[cbind(1:nrow(x), cluster)], "matrix")
    cluster <- as(cluster, "integer")

    new("kccasimple",
        k=as(nrow(centers),"integer"),
        centers=centers,
        cluster=cluster,
        family=family,
        clusinfo=clusinfo(cluster, cldist, simple=TRUE),
        cldist=cldist,
        ...)
}


flexclust_kcca <-
function (x, k, family = kccaFamily("kmeans"), weights = NULL, 
    group = NULL, control = NULL, simple = FALSE, save.data = FALSE) 
{
    MYCALL <- match.call()
    control <- as(control, "flexclustControl")
    x <- as(x, "matrix")
    x <- family@preproc(x)
    N <- nrow(x)
    if (control@classify == "auto") {
        control@classify = "hard"
    }
    if (!is.null(group)) {
        if (length(group) > N) 
            warning("group vector longer than nrow(x)")
        group <- rep(group, length = N)
        group <- as.factor(group)
    }
    if (!is.null(weights)) {
        control@classify = "weighted"
        if (!family@weighted) 
            stop("Centroid function of family cannot use weights")
        if (!is.null(group)) 
            stop("Weighted clustering for grouped data is not implemented yet.")
        weights <- rep(weights, length = N)
    }
    centers <- initCenters(x, k, family, control)
    cluster <- centers$cluster
    k <- centers$k
    centers <- centers$centers
    sannprob <- control@simann[1]
    if (control@classify %in% c("hard", "simann")) {
        for (iter in 1:control@iter.max) {
            clustold <- cluster
            distmat <- family@dist(x, centers)
            cluster <- family@cluster(x, distmat = distmat)
            if (control@classify == "simann") {
                cluster <- perturbClusters(cluster, sannprob)
                sannprob <- sannprob * control@simann[2]
            }
            if (!is.null(group)) 
                cluster <- family@groupFun(cluster, group, distmat)
            centers <- family@allcent(x, cluster = cluster, k = k)
            centers <- centers[complete.cases(centers), , drop = FALSE]
            k <- nrow(centers)
            changes <- sum(cluster != clustold)
            if (control@verbose && (iter%%control@verbose == 
                0)) {
                td <- sum(distmat[cbind(1:N, cluster)])
                printIter(iter, paste(changes, format(td), sep = " / "), 
                  "Changes / Distsum")
            }
            if (changes == 0) 
                break
        }
    }
    else if (control@classify == "weighted") {
        td <- -1
        for (iter in 1:control@iter.max) {
            td.old <- td
            distmat <- family@dist(x, centers)
            cluster <- family@cluster(distmat = distmat)
            td <- sum(distmat[cbind(1:N, cluster)])
            if (control@verbose && (iter%%control@verbose == 
                0)) 
                printIter(iter, td, "Sum of distances")
            if (abs(td - td.old)/(abs(td) + 0.1) < control@tolerance) 
                break
            distmat <- mlogit(distmat)
            for (n in 1:k) {
                w <- weights * distmat[, n]
                w[cluster == n] <- w[cluster == n] + control@gamma
                centers[n, ] <- family@wcent(x, weights = w)
            }
        }
        for (n in 1:k) {
            centers[n, ] <- family@cent(x[cluster == n, , drop = FALSE])
        }
    }
    else stop("Unknown classification method")
    centers <- centers[complete.cases(centers), , drop = FALSE]
    z <- newKccaObject(x = x, family = family, centers = centers, 
        group = group, iter = iter, converged = (iter < control@iter.max), 
        call = MYCALL, control = control, simple = simple)
    if (save.data) 
        z@data <- ModelEnvMatrix(designMatrix = x)
    z
}


flexclust <- function(k) {
   km <- flexclust_kcca(data, k=k, control=list(initcent="kmeanspp", iter.max=10000))
   sum(km@cldist[,1]**2)
}

execute <- function(n) {
  set.seed(42)
  checksum = flexclust(n)
  cat("Flexclust::kcca ", n, " " , checksum, "\n")
}
