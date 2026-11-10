#? gcTorture
# In `g`'s lazily compiled version, `SchedulePure` deferred a `box` to just before the first
# statement after a checkpoint's assumptions, which put it in front of them: the checkpoint then did
# not check the `ldf f` assumption, and Fir2C left its register uninitialized for the GC to mark.
f <- function(a, b) a
g <- function(n) {
  s <- 0
  for (i in 1:n) s <- s + f(i, stop("forced"))
  s
}

# warmup
for (i in 1:12) {
  g(10)
}

g(100)
