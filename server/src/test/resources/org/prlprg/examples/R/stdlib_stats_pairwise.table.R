#? stdlib
`pairwise.table` <- function (compare.levels, level.names, p.adjust.method) 
{
    ix <- setNames(seq_along(level.names), level.names)
    pp <- outer(ix[-1L], ix[-length(ix)], function(ivec, jvec) vapply(seq_along(ivec), 
        function(k) {
            i <- ivec[k]
            j <- jvec[k]
            if (i > j) 
                compare.levels(i, j)
            else NA_real_
        }, 0.05))
    il.tri <- lower.tri(pp, TRUE)
    pp[il.tri] <- p.adjust(pp[il.tri], p.adjust.method)
    pp
}

# Examples
