# https://github.com/reactorlabs/RBenchmarking/blob/a92447b37a03e96f8da1e18eb3cd8ab3b46fbf89/Benchmarks/shootout/spectralnorm/spectralnorm_math.r
# License: none stated, see server/doc/benchmark-licenses.md
# ------------------------------------------------------------------
# The Computer Language Shootout
# http://shootout.alioth.debian.org/
#
# Contributed by Leo Osvald
# ------------------------------------------------------------------

spectralnorm_math <- function(args) {
    n = if (length(args)) as.integer(args[[1]]) else 100L

    eval_A <- function(i, j) 1 / ((i + j - 2) * (i + j - 1) / 2 + i)

    m <- outer(seq(n), seq(n), FUN=eval_A)
    sqrt(max(eigen(t(m) %*% m)$val))
}

execute <- function(n) {
    spectralnorm_math(n)
}

#? benchmark: execute(300L)

# warmup
for (i in 1:12) {
  execute(2L)
}
