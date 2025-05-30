# ------------------------------------------------------------------
# The Computer Language Shootout
# http://shootout.alioth.debian.org/
#
# Contributed by Leo Osvald
# ------------------------------------------------------------------

execute <- function(n=9) {
    tree <- function(item, depth) {
        if (depth == 0L)
            return(c(item, NA, NA))
        return(list(item,
            tree(2L * item - 1L, depth - 1L),
            tree(2L * item, depth - 1L)))
    }

    check <- function(tree)
        if(is.na(tree[[2]][[1]])) tree[[1]] else tree[[1]] + check(tree[[2]]) - check(tree[[3]])

    binarytrees_naive <- function(args) {
        n = if(length(args)) as.integer(args[[1]]) else 13L

        min_depth <- 4
        max_depth <- max(min_depth + 2, n)
        stretch_depth <- max_depth + 1

        cat(sep="", "stretch tree of depth ", stretch_depth, "\t check: ",
            check(tree(0, stretch_depth)), "\n")

        long_lived_tree <- tree(0, max_depth)

        for (depth in seq(min_depth, max_depth, 2)) {
            iterations <- as.integer(2^(max_depth - depth + min_depth))
            chk_sum <- 0L
            for (i in 1:iterations)
            chk_sum <- chk_sum + check(tree(i, depth)) + check(tree(-i, depth))
            cat(sep="", iterations * 2L, "\t trees of depth ", depth, "\t check ",
                chk_sum, "\n")
        }

        cat(sep="", "long lived tree of depth ", max_depth, "\t check: ", 
            check(long_lived_tree), "\n")
    }

    binarytrees_naive(n)
}
