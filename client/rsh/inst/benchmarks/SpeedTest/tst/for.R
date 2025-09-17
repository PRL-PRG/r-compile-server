execute <- function(size=10L){
  a1 <- 0; n <- (size*200)
  for (j in 1:n) for (i in 1:n) a1 <- a1+i/j

  a2 <- 0; n <- (size*15)
  for (k in 1:n) for (j in 1:n) for (i in 1:n) a2 <- a2+k*i/j

  a3 <- 0; n <- (size*4)
  for (l in 1:n) for (k in 1:n) for (j in 1:n) for (i in 1:n) a3 <- a3+l*k*i/j

  a4 <- 0; n <- (size*200)
  for (j in seq_len(n)) for (i in seq_len(n)) a4 <- a4+i/j

  f <- function (n) {for (l in 1:n) for (k in 1:n) for (j in 1:n) for (i in 1:n) i}
  a5 <- f(size*7)

  v1n <- 1:(size*7)
  g <- function () {for (l in v1n) for (k in v1n) for (j in v1n) for (i in v1n) i}
  a6 <- g()

  h <- function(){
    v1 <- 1:70; 
    for (l in v1) 
    { v2 <- 1:70
      for (k in v2) 
      { v3 <- 1:70
        for (j in v3) 
        { v4 <- 1:70
          for (i in v4) i 
        }
      }
    }
  }
  a7 <- h()

  list(a1,a2,a3,a4,a5,a6,a7)
}