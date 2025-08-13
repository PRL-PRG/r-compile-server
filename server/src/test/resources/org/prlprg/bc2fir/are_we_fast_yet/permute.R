permute <- function(n, list) {
  if (n == 1) {
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

main <- function() {
  list <- 1:7
  result <- permute(7, list)
  return(result)
}