# https://github.com/reactorlabs/RBenchmarking/blob/a92447b37a03e96f8da1e18eb3cd8ab3b46fbf89/Benchmarks/shootout/spectralnorm/spectralnorm_alt_2.r
# License: none stated, see server/doc/benchmark-licenses.md
# ------------------------------------------------------------------
# The Computer Language Shootout
# http://shootout.alioth.debian.org/
#
# Contributed by Leo Osvald
# ------------------------------------------------------------------

spectralnorm_alt_2 <- function(args) {
    n = if (length(args)) as.integer(args[[1]]) else 100L

    n = if (length(args)) as.integer(args[[1]]) else 100L

    eval_A <- function(i, j) 1 / ((i + j - 2) * (i + j - 1) / 2 + i)
    eval_A_times_u <- function(u)
        u %*% outer(seq(n), seq(n), FUN=eval_A)
    eval_At_times_u <- function(u)
        u %*% t(outer(seq(n), seq(n), FUN=eval_A))
    eval_AtA_times_u <- function(u)
    eval_At_times_u(eval_A_times_u(u))

    u <- rep(1, n)
    v <- rep(0, n)
    for (itr in seq(10)) {
        v <- eval_AtA_times_u(u)
        u <- eval_AtA_times_u(v)
    }
    sqrt(sum(u * v) / sum(v * v))
}

execute <- function(n) {
    spectralnorm_alt_2(n)
}

#? benchmark: execute(200L)

# warmup
for (i in 1:12) {
  execute(2L)
}
