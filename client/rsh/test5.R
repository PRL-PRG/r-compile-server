dyn.load("../../external/R/library/rsh/libs/rsh.so", local = FALSE)

f <- function (n) {
    s <- 0
    i <- 0
    while (i < n) {
        s <- s + i
        i <- i + 1
    }
    s
}

compiler:::enableJIT(0)

rbc <- compiler:::cmpfun(f, options=list(optimize=3L))
rsh <- rsh:::rsh_cmpfun(f, options=list(optimize=3L))

f <- function (n) {
    s <- 0
    i <- 0
    while (i < n) {
        s <- s + i
        i <- i + 1
    }
    s
}

N <- 100

stopifnot(f(N) == 4950)
stopifnot(rbc(N) == 4950)
stopifnot(rsh(N) == 4950)

N <- 1e6
microbenchmark::microbenchmark(f(N), rbc(N), rsh(N), times=10)
# microbenchmark::microbenchmark(f(N), times=10)
