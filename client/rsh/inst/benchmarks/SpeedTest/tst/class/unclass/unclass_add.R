execute <- function(size=5000L){
  `+.mod12` <- function (x,y) { 
    s <- (unclass(x) + unclass(y)) %% 12L
    class(s) <- "mod12"
    s
  }

  f <- function (n,a,b) { 
    for (i in 1:n) r <- (a+b)
    r
  }

  a <- 6L; class(a) <- "mod12"
  b <- 8L; class(b) <- "mod12"
  r1 <- f((size*100),a,b)
  
  a <- rep(6L,200); class(a) <- "mod12"
  b <- rep(8L,200); class(b) <- "mod12"
  r2 <- f((size*100),a,b)
  
  a <- rep(6L,100000); class(a) <- "mod12"
  b <- rep(8L,100000); class(b) <- "mod12"
  r3 <- f(size,a,b)
  
  list(r1, r2, sum(r3))
}