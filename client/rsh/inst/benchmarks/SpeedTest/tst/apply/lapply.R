execute <- function(size = 10000L) {
  S <- lapply(1:9, function(i) rep(1.01*i, 100))
  L <- lapply(1:99, function(i) rep(1.01*i, 100))
  
  f1 <- function(x) sum(x)+10000
  f2 <- function(x,a) sum(x)+a
  f3 <- function(x) c(sum(x),-1)
  
  a1 <- a2 <- a3 <- a4 <- a5 <- a6 <- NULL
  for (i in 1:(size*10)) a1 <- lapply(S, f1)
  for (i in 1:(size*10)) a2 <- lapply(S, f2, 10000)
  for (i in 1:(size*10)) a3 <- lapply(S, f3)
  for (i in 1:size) a4 <- lapply(L, f1)
  for (i in 1:size) a5 <- lapply(L, f2, 10000)
  for (i in 1:size) a6 <- lapply(L, f3)
  
  res <- lapply(list(a1, a2, a3, a4, a5, a6), unlist)
  return(res)
}