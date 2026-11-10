# A loop that writes a vector in place, and closures and lazy arguments that read it after later
# writes (see `loop_owned_vector.R`). The FIŘ interpreter can't call a closure from a list.

mk <- function(x) function() x[1]
f3 <- function(n) {
  v <- rep(0L, n)
  getters <- list()
  for (i in 1:n) {
    getters[[i]] <- mk(v)
    # Forces `x` now, so it holds this iteration's vector.
    if (i == 2L) getters[[i]]()
    peek <- function() v[1]
    j <- 1L
    while (j <= n) {
      v[j] <- v[j] + i
      j <- j + 1L
    }
    getters[[i + n]] <- peek
  }
  acc <- 0L
  for (q in seq_along(getters)) acc <- acc * 7L + getters[[q]]()
  acc
}

for (k in 1:12) f3(3)

f3(4)
