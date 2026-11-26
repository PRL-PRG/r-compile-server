# `b` elides its frame, whose parent is the frame of `make_b`. `fail` catches an error raised in an
# elided frame of `bad`, so the pop of that frame doesn't run. After `fail` returns, nothing keeps
# the frame of the `make_b` call that made `bad` alive, so `gc()` runs its finalizer.
finalized <- 0L
make_b <- function() {
  x <- 100
  function(n) n + x
}
callb <- function() r <<- b(1)
fail <- function() {
  bad <- make_b()
  environment(bad)$x <- "a"
  reg.finalizer(environment(bad), function(e) finalized <<- finalized + 1L)
  tryCatch(bad(1), error = function(e) 0)
}
run <- function(test) {
  if (test) {
    fail()
    gc()
    finalized
  } else callb()
}

for (i in 1:12) {
  b <- make_b()
  run(FALSE)
}

run(TRUE)
