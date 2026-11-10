# `b` elides its frame, whose parent is the frame of `make_b`. `callb`'s frame is real, so `b`'s
# frame is the outermost elided one. After `b` returns, nothing keeps `make_b`'s frame alive, so
# `gc()` runs its finalizer.
finalized <- 0L
make_b <- function() {
  x <- 100
  function(n) n + x
}
callb <- function() r <<- b(1)
fin <- function() reg.finalizer(environment(b), function(e) finalized <<- finalized + 1L)
run <- function(test) {
  if (test) {
    fin()
    callb()
    b <<- NULL
    gc()
    finalized
  } else callb()
}

for (i in 1:12) {
  b <- make_b()
  run(FALSE)
}

run(TRUE)
