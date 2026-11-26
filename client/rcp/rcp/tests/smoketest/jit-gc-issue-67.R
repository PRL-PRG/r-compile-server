library(rcp)

# Issue 67: rcp_jit_enable() rebinds compiler::cmpfun, which left rcp's pointer to the original
# cmpfun (what the JIT compiles bytecode with) unreachable, so a GC collected it and the first JIT
# compile called garbage.
invisible(rcp_jit_enable())
invisible(gc())

# Reuse the freed memory, so a collected cmpfun is overwritten rather than still intact.
junk <- lapply(1:1e5, function(i) list(i, TRUE, FALSE))
rm(junk)

f <- function(n) { s <- 0; for (i in 1:n) s <- s + i; s }
gctorture(TRUE)
for (i in 1:10) r <- f(100)
gctorture(FALSE)
stopifnot(r == 5050, rcp_is_compiled(f))

invisible(rcp_jit_disable())

cat("OK\n")
