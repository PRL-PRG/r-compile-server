permute <- function(n, list) {
  if (n == 1) {
    return(1)
  }

  count <- 0
  for (i in 1:n) {
    count <- count + permute(n - 1, swap(list, i, n))
  }

  return(count)
}

swap <- function(list, i, j) {
  temp <- list[i]
  list[i] <- list[j]
  list[j] <- temp
  list
}

#? benchmark: permute(10, 1:20)
permute(4, 1:5)
