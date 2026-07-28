#? stdlib
`relist.list` <- function (flesh, skeleton = attr(flesh, "skeleton")) 
{
    ind <- 1L
    result <- skeleton
    for (i in seq_along(skeleton)) {
        skel_i <- result[[i]]
        if (is.null(skel_i)) 
            skel_i <- flesh[0]
        size <- length(unlist(skel_i))
        result[[i]] <- relist(flesh[seq.int(ind, length.out = size)], 
            skel_i)
        ind <- ind + size
    }
    result
}
