#? gcTorture
# A promise without captures (its body reads `i` from the frame) shares one code object for its
# site, so each execution allocates only the promise. `f` forces it in half of the calls.
f <- function(a, b) if (b) a + 1 else 0
g <- function(n) {
  s <- 0
  for (i in 1:n) s <- s + f(i, i %% 2 == 0)
  s
}
# `k`'s promise outlives `k`: `mk` keeps it in a closure, which forces it after `k` returned.
mk <- function(a) function() a
k <- function(i) mk(i * 2)

# warmup
for (i in 1:12) {
  g(10)
  k(i)()
}

c(g(200), k(3)())
