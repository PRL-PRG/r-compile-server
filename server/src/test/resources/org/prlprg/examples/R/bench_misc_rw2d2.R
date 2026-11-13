# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/misc/2DRandomWalk/rw2d2.R
# License: BSD-3-Clause, see server/doc/benchmark-licenses.md
# 2D Random Walk, vector version
# src: https://www.stat.auckland.ac.nz/~ihaka/downloads/Taupo-handouts.pdf
# Author: Ross Ihaka
###############################################################################


run<-function(n = 100000) {
    set.seed(42)
    steps = sample(c(-1,1), n -1, replace = TRUE)
    xdir = sample(c(TRUE,FALSE), n - 1, replace = TRUE)
    xpos = c(0, cumsum(ifelse(xdir, steps, 0)))
    ypos = c(0, cumsum(ifelse(xdir, 0, steps)))
    # upstream returns list(x = xpos, y = ypos); the port returns their sums, so that the value is small
    c(x = sum(xpos), y = sum(ypos))
}

#? benchmark: run(600000L)

# warmup
for (i in 1:12) {
  run(10L)
}
