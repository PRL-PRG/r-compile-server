execute <- function(size = 500000L) {
  b <- rep(T,1000)

  d <- c(FALSE, TRUE)
  f1 <- function () {for (i in 1:(size*10)) x <- all(d); x}
  x1<-f1()
  
  b[700] <- F
  f2 <- function () {for (i in 1:size) x <- all(b); x}
  x2<-f2()
  
  b[700] <- NA
  f3 <- function () {for (i in 1:size) x <- all(b); x}
  x3<-f3()
  
  list(x1, x2, x3)
}