# A vector subassignment in a loop: each iteration `dup`s `lo` into an owned register and `consume`s
# it in the call of the owned version of `[<-`. `which` gets a promise in the same loop.
f <- function(n) {
  lo <- rep.int(1L, 5L)
  i <- 0L
  while (i < n) {
    inds <- which(lo > i)
    lo[inds] <- lo[inds] + 1L
    i <- i + 1L
  }
  lo
}

for (k in 1:12) {
  f(3L)
}
f(4L)
