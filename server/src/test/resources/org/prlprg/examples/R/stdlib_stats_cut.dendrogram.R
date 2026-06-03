#? stdlib
`cut.dendrogram` <- function (x, h, ...) 
{
    LOWER <- list()
    X <- 1
    assignNodes <- function(subtree, h) {
        if (!is.leaf(subtree)) {
            if (!(K <- length(subtree))) 
                stop("non-leaf subtree of length 0")
            new.mem <- 0L
            for (k in 1L:K) {
                sub <- subtree[[k]]
                if (attr(sub, "height") <= h) {
                  at <- attributes(sub)
                  at$leaf <- TRUE
                  at$class <- NULL
                  at$x.member <- at$members
                  new.mem <- new.mem + (at$members <- 1L)
                  at$label <- paste("Branch", X)
                  subtree[[k]] <- X
                  attributes(subtree[[k]]) <- at
                  class(sub) <- "dendrogram"
                  LOWER[[X]] <<- sub
                  X <<- X + 1
                }
                else {
                  subtree[[k]] <- assignNodes(sub, h)
                  new.mem <- new.mem + attr(subtree[[k]], "members")
                }
            }
            attr(subtree, "x.member") <- attr(subtree, "members")
            attr(subtree, "members") <- new.mem
        }
        subtree
    }
    list(upper = assignNodes(x, h), lower = LOWER)
}
