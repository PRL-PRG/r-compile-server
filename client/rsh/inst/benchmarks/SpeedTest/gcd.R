execute <- function(size = 500L) {
  gcd1 <- function(a, b) if (a > b) gcd1(a - b, b) else if (b > a) gcd1(a, b - a) else a
  
  gcd2 <- function(a, b) {
    if (a == 0) b 
    else if (b == 0) a 
    else if (a > b) gcd2(a %% b, b) 
    else gcd2(a, b %% a) 
  }
  
  gcd3 <- function(a, b) {
    repeat {
      if (a > b) { a <- a - b; next }
      if (b > a) { b <- b - a; next }
      return(a)
    }
  }
  
  gcd4 <- function(a, b) {
    repeat {
      if (a == 0) return(b)
      if (b == 0) return(a)
      if (a > b) a <- a %% b
      else b <- b %% a
    }
  }
  
  gcd5 <- function(a, b) {
    while (a != b) {
      if (a > b) a <- a - b
      else b <- b - a
    }
    a
  }
  
  gcd_table <- function(n, gcd) {
    tbl <- matrix(integer(), n, n)
    for (i in 1:n)
      for (j in 1:n)
        tbl[i, j] <- gcd(i, j)
    tbl
  }
  r1 <- gcd_table(size,gcd1); r2 <- gcd_table(size,gcd2); r3 <- gcd_table(size,gcd3); r4 <- gcd_table(size,gcd4); r5 <- gcd_table(size,gcd5)
  return(all(sapply(list(r2, r3, r4, r5), identical, r1)))
}