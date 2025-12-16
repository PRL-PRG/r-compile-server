#? stdlib
`midcache.dendrogram` <- function (x, type = "hclust", quiet = FALSE) 
{
    type <- match.arg(type)
    stopifnot(inherits(x, "dendrogram"))
    verbose <- getOption("verbose", 0) >= 2
    setmid <- function(d, type) {
        depth <- 0L
        kk <- integer()
        jj <- integer()
        dd <- list()
        repeat {
            if (!is.leaf(d)) {
                k <- length(d)
                if (k < 1) 
                  stop("dendrogram node with non-positive #{branches}")
                depth <- depth + 1L
                if (verbose) 
                  cat(sprintf(" depth(+)=%4d, k=%d\n", depth, 
                    k))
                kk[depth] <- k
                if (storage.mode(jj) != storage.mode(kk)) 
                  storage.mode(jj) <- storage.mode(kk)
                dd[[depth]] <- d
                d <- d[[jj[depth] <- 1L]]
                next
            }
            while (depth) {
                k <- kk[depth]
                j <- jj[depth]
                r <- dd[[depth]]
                r[[j]] <- unclass(d)
                if (j < k) 
                  break
                depth <- depth - 1L
                if (verbose) 
                  cat(sprintf(" depth(-)=%4d, k=%d\n", depth, 
                    k))
                midS <- sum(vapply(r, .midDend, 0))
                if (!quiet && type == "hclust" && k != 2) 
                  warning("midcache() of non-binary dendrograms only partly implemented")
                attr(r, "midpoint") <- (.memberDend(r[[1L]]) + 
                  midS)/2
                d <- r
            }
            if (!depth) 
                break
            dd[[depth]] <- r
            d <- r[[jj[depth] <- j + 1L]]
        }
        d
    }
    setmid(x, type = type)
}
