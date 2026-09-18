permute <- function(n, list=1:n) {
  if (n == 1) {
    # print(list)
    return(1)
  }

  count <- 0
  for (i in 1:n) {
    list <- swap(list, i, n)
    count <- count + permute(n - 1, list)
    list <- swap(list, i, n)
  }

  return(count)
}

swap <- function(list, i, j) {
  temp <- list[i]
  list[i] <- list[j]
  list[j] <- temp
  list
}

#? benchmark: permute(8)

# warmup
for (i in 1:12) {
  permute(3)
}
