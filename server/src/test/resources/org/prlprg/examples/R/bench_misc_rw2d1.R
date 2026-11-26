# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/misc/2DRandomWalk/rw2d1.R
# License: BSD-3-Clause, see server/doc/benchmark-licenses.md
# 2D Random Walk, scalar version
# src: https://www.stat.auckland.ac.nz/~ihaka/downloads/Taupo-handouts.pdf
# Author: Ross Ihaka
###############################################################################


run = function(n = 100000) {
    set.seed(42)
    xpos = ypos = numeric(n)
    for(i in 2:n) {
        # Decide whether we are moving horizontally or vertically.
        delta = if(runif(1) > .5) 1 else -1
        if (runif(1) > .5) {
            xpos[i] = xpos[i-1] + delta
            ypos[i] = ypos[i-1]
        }
        else {
            xpos[i] = xpos[i-1]
            ypos[i] = ypos[i-1] + delta
        }
    }
    # upstream returns list(x = xpos, y = ypos); the port returns their sums, so that the value is small
    c(x = sum(xpos), y = sum(ypos))
}

#? benchmark: run(40000L)

# warmup
for (i in 1:12) {
  run(10L)
}
