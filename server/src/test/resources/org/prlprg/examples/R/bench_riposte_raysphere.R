# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/riposte/raysphere.R
# License: BSD-3-Clause, see server/doc/benchmark-licenses.md

run<-function(dataset) {
    xo <- 0
    yo <- 0
    zo <- 0
    xd <- 1
    yd <- 0
    zd <- 0

    xc<- dataset[[1]];
    yc<- dataset[[2]];
    zc<- dataset[[3]];

    intersect <- function() {
        rx <- xo-xc
        ry <- yo-yc
        rz <- zo-zc

        a <- 1
        b <- 2*(xd*rx+yd*ry+zd*rz)
        c <- rx*rx+ry*ry+rz*rz-1

        disc <- b*b-4*a*c

        m <- sqrt(disc)
        t0 <- (-b - m)/2
        t1 <- (-b + m)/2

        cond <- disc > 0
        min(pmin(t0[cond], t1[cond]))
    }
    #benchpart
    r<-intersect();
    #system.time()
    r
}

n <- 2000000L
xc <- as.double(0:(n-1))
yc <- as.double(0:(n-1))
zc <- as.double(0:(n-1))
data <- list(xc,yc,zc);

#? benchmark: run(data)

# warmup
warmup_data <- list(as.double(0:3), as.double(0:3), as.double(0:3))
for (i in 1:12) {
  run(warmup_data)
}
