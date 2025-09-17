execute <- function(size=300000L){
  a <- 5; class(a) <- "fred"
  b <- 7; class(b) <- "mary"

  addzero <- function (x) UseMethod("addzero")

  addzero.fred <- function (x) c(x,0)
  addzero.mary <- function (x) c(0,x)
  addzero.default <- function (x) c(8,9)

  f <- function (n,a,b) { 
    for (i in 1:n) r <- list(addzero(a),addzero(b))
    r
  }

  r1 <- f(size,a,b)
  r2 <- f(size,2,TRUE)

  list(r1, r2)
}