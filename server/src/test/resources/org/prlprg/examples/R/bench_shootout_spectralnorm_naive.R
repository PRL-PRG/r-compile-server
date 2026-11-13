# https://github.com/reactorlabs/RBenchmarking/blob/a92447b37a03e96f8da1e18eb3cd8ab3b46fbf89/Benchmarks/shootout/spectralnorm/spectralnorm_naive.r
# License: none stated, see server/doc/benchmark-licenses.md
# ------------------------------------------------------------------
# The Computer Language Shootout
# http://shootout.alioth.debian.org/
#
# Contributed by Leo Osvald
# ------------------------------------------------------------------

spectralnorm_naive <- function(args) {
    n = if (length(args)) as.integer(args[[1]]) else 100L

    eval_A <- function(i, j) 1 / ((i + j) * (i + j + 1) / 2 + i + 1)
    # TODO: get rid of this hack
    eval_A_2 <- function(i, j) 1 / ((i + j) * (i + j + 1) / 2 + i + 1)

    eval_A_times_u <- function(u) {
        ret <- rep(0, n)
        for (i in 1:n)
	    for (j in 0:n1)
                ret[[i]] <- ret[[i]] + u[[j + 1]] * eval_A(i - 1, j)
        return(ret)
    }
    eval_At_times_u <- function(u) {
        ret <- rep(0, n)
        for (i in 1:n)
	    for (j in 0:n1)
                ret[[i]] <- ret[[i]] + u[[j + 1]] * eval_A_2(j, i - 1)
        return(ret)
    }
    eval_AtA_times_u <- function(u) eval_At_times_u(eval_A_times_u(u))

    n1 <- n - 1
    u <- rep(1, n)
    v <- rep(0, n)
    for (itr in seq(10)) {
        v <- eval_AtA_times_u(u)
        u <- eval_AtA_times_u(v)
    }

    sqrt(sum(u * v) / sum(v * v))
}

execute <- function(n) {
    spectralnorm_naive(n)
}

#? benchmark: execute(50L)

# warmup
for (i in 1:12) {
  execute(2L)
}
