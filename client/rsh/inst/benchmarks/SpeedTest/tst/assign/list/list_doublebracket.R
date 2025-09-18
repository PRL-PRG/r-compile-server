execute <- function(size = 1000000L) {
  f <- function(n, j){
    lis <- list(ab=3,cd=4,ef=5,gh=6)
    for (i in 1:n) lis[[j]] <- 10
    lis
  }

  r1 <- f(size,"ef")
  r2 <- f(size,3)
  list(unlist(r1),unlist(r2))
}