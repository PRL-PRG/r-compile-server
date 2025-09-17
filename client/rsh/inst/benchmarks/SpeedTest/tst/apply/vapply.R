execute <- function(size = 10000L) {
  S <- lapply(1:9, function(i) rep(1.01*i, 100))
  L <- lapply(1:99, function(i) rep(1.01*i, 100))
  f1 <- function(x) sum(x)+10000
  f2 <- function(x,a) sum(x)+a
  f3 <- function(x) c(sum(x),-1)
  
  a1 <- a2 <- a3 <- a4 <- a5 <- a6 <- NULL
  for (i in 1:(size*10)) a1 <- vapply(S, f1, numeric(1))
  for (i in 1:(size*10)) a2 <- vapply(S, f2, numeric(1), 10000)
  for (i in 1:(size*10)) a3 <- vapply(S, f3, numeric(2))
  for (i in 1:size) a4 <- vapply(L, f1, numeric(1))
  for (i in 1:size) a5 <- vapply(L, f2, numeric(1), 10000)
  for (i in 1:size) a6 <- vapply(L, f3, numeric(2))
  
  res <- lapply(list(a1, a2, a3, a4, a5, a6), unlist)
  return(res)
}