execute <- function(size = 10000L) {
  F <- new.env()
  for (i in 1:9) F[[paste0("v",i)]] <- rep(1.01*i, 100)
  E <- new.env()
  for (i in 1:99) E[[paste0("v",i)]] <- rep(1.01*i, 100)
  f1 <- function(x) sum(x)+10000
  f2 <- function(x,a) sum(x)+a
  f3 <- function(x) c(sum(x),-1)
  
  a1 <- a2 <- a3 <- a4 <- a5 <- a6 <- NULL
  for (i in 1:(size*10)) a1 <- eapply(F, f1)[order(names(eapply(F, f1)))]
  for (i in 1:(size*10)) a2 <- eapply(F, f2, 10000)[order(names(eapply(F, f2, 10000)))]
  for (i in 1:(size*10)) a3 <- eapply(F, f3)[order(names(eapply(F, f3)))]
  for (i in 1:size) a4 <- eapply(E, f1)[order(names(eapply(E, f1)))]
  for (i in 1:size) a5 <- eapply(E, f2, 10000)[order(names(eapply(E, f2, 10000)))]
  for (i in 1:size) a6 <- eapply(E, f3)[order(names(eapply(E, f3)))]
  
  res <- lapply(list(a1, a2, a3, a4, a5, a6), unlist)
  return(res)
}