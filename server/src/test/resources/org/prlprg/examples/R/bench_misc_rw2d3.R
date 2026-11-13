# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/misc/2DRandomWalk/rw2d3.R
# License: BSD-3-Clause, see server/doc/benchmark-licenses.md
# 2D Random Walk, optimized vector version
# src: https://www.stat.auckland.ac.nz/~ihaka/downloads/Taupo-handouts.pdf
# Author: Ross Ihaka
###############################################################################


run<-function(n = 100000) {
    set.seed(42)
    xsteps = c(-1, 1, 0, 0)
    ysteps = c(0, 0, -1, 1)
    dir = sample(1:4, n - 1, replace = TRUE)
    xpos = c(0, cumsum(xsteps[dir]))
    ypos = c(0, cumsum(ysteps[dir]))
    # upstream returns list(x = xpos, y = ypos); the port returns their sums, so that the value is small
    c(x = sum(xpos), y = sum(ypos))
}

#? benchmark: run(1500000L)

# warmup
for (i in 1:12) {
  run(10L)
}
