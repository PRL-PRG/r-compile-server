# https://github.com/reactorlabs/RBenchmarking/blob/a92447b37a03e96f8da1e18eb3cd8ab3b46fbf89/Benchmarks/shootout/mandelbrot/mandelbrot_naive.r
# License: none stated, see server/doc/benchmark-licenses.md
# ------------------------------------------------------------------
# The Computer Language Shootout
# http://shootout.alioth.debian.org/
#
# Contributed by Leo Osvald
# ------------------------------------------------------------------

lim <- 2
iter <- 50

mandelbrot_naive <- function(args) {
    n = if (length(args)) as.integer(args[[1]]) else 200L
    cat("P4\n")
    cat(n, n, "\n")
    bin_con <- rawConnection(raw(0), "wb") # port: was pipe("cat", "wb")
    for (y in 0:(n-1)) {
        bits <- 0L
        x <- 0L
        while (x < n) {
            c <- 2 * x / n - 1.5 + 1i * (2 * y / n - 1)
            z <- 0+0i
            i <- 0L
            while (i < iter && abs(z) <= lim) {
                z <- z * z + c
                i <- i + 1L
            }
            bits <- 2L * bits + as.integer(abs(z) <= lim)
            if ((x <- x + 1L) %% 8L == 0) {
                writeBin(as.raw(bits), bin_con)
                bits <- 0L
            }
        }
        xmod <- x %% 8L
        if (xmod)
            writeBin(as.raw(bits * as.integer(2^(8L - xmod))), bin_con)
        flush(bin_con)
    }
    # port: return the bytes in place of the binary output
    bytes <- rawConnectionValue(bin_con)
    close(bin_con)
    bytes
}

execute <- function(n) {
    mandelbrot_naive(n)
}

#? benchmark: execute(64L)

# warmup
for (i in 1:12) {
  execute(8L)
}
