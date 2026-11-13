# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/riposte/mandelbrot.R
# License: BSD-3-Clause, see server/doc/benchmark-licenses.md
#adapted from https://github.com/ispc/ispc/tree/master/examples/mandelbrot

run<-function(dataset) {
    c_re<-dataset[[1]]
    c_im<-dataset[[2]]
    maxIterations <-dataset[[3]]


#c_ <- complex(real=c_re, imaginary=c_im)

#mandel <- function(maxIterations) {
#    z_ <- c_
#    cnt <- 0
#    for(i in 1:maxIterations) {
#        z_ <- z_*z_ + c
#        cnt <- cnt + ifelse(Mod(z_) < 2, 1, 0)
#    }
#    cnt
#}
    #bench part
    z_re <- c_re
    z_im <- c_im
    cnt <- 0
    for(i in 1:maxIterations) {
        #cnt <- cnt + ifelse(z_re * z_re + z_im * z_im <= 4, 1, 0)
        cnt <- cnt + (z_re*z_re + z_im*z_im <= 4)
        z_re2 <- c_re + (z_re*z_re - z_im*z_im)
        z_im2 <- c_im + (2. * z_re * z_im)
        z_re <- z_re2
        z_im <- z_im2
    }
    length(cnt)

}

# Calls `run` `reps` times, like the upstream harness, because one call is too short to time.
bench_reps <- function(reps, data) {
  for (bench_i in 1:reps) r <- run(data)
  r
}

# The data of upstream `setup`, with the size as parameters (upstream: 2048 x 1536).
mandelbrot_data <- function(width, height, maxIterations) {
    x0 <- -2
    x1 <- 1
    y0 <- -1
    y1 <- 1


    dx <- (x1 - x0) / width
    dy <- (y1 - y0) / height

    c <- (1:(width*height)) - 1
    i <- c %% width
    j <- floor(c / width)

    c_re <- x0 + i * dx
    c_im <- y0 + j * dy

    list(c_re, c_im, maxIterations);
}

data <- mandelbrot_data(160, 120, 100L)

#? benchmark: bench_reps(4L, data)

# warmup
warmup_data <- mandelbrot_data(2, 2, 2L)
for (i in 1:12) {
  bench_reps(2L, warmup_data)
}
