execute <- function(size = 1000000L) {
  f <- function(n, j, v){
    vec <- (1:100)/100
    names(vec) <- paste(c("a","b","c","d","e","f","g","h","i","j"),1:100,sep="")
    for (i in 1:n) vec[j] <- v
    sum(vec)
  }
  r1 <- f(size, "g17", 1.1)
  r2 <- f(size, c("e15, f16, g17"), 1.1)
  list(r1,r2)
}