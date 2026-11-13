# https://github.com/reactorlabs/RBenchmarking/blob/a92447b37a03e96f8da1e18eb3cd8ab3b46fbf89/Benchmarks/shootout/mandelbrot/mandelbrot.r
# License: none stated, see server/doc/benchmark-licenses.md
# ------------------------------------------------------------------
# The Computer Language Shootout
# http://shootout.alioth.debian.org/
#
# Contributed by Leo Osvald
# ------------------------------------------------------------------

lim <- 2
iter <- 50

mandelbrot <- function(args) {
    n = if (length(args)) as.integer(args[[1]]) else 200L
    n_mod8 = n %% 8L
    pads <- if (n_mod8) rep.int(0, 8L - n_mod8) else integer(0)
    p <- rep(as.integer(rep.int(2, 8) ^ (7:0)), length.out=n)

    cat("P4\n")
    cat(n, n, "\n")
    bin_con <- rawConnection(raw(0), "wb") # port: was pipe("cat", "wb")
    for (y in 0:(n-1)) {
        c <- 2 * 0:(n-1) / n - 1.5 + 1i * (2 * y / n - 1)
        z <- rep(0+0i, n)
        i <- 0L
        while (i < iter) {  # faster than for loop
            z <- z * z + c
            i <- i + 1L
        }
        bits <- as.integer(abs(z) <= lim)
        bytes <- as.raw(colSums(matrix(c(bits * p, pads), 8L)))
        writeBin(bytes, bin_con)
        flush(bin_con)
    }
    # port: return the bytes in place of the binary output
    bytes <- rawConnectionValue(bin_con)
    close(bin_con)
    bytes
}

execute <- function(n) {
    mandelbrot(n)
}

#? benchmark: execute(328L)

# warmup
for (i in 1:12) {
  execute(8L)
}
