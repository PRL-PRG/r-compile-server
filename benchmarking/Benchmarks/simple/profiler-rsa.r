execute <- function(n) {
  
  p1 <- 971
  p2 <- 383
  n1 <- p1 * p2
  e <- 17

  encrypt <- function(msg) {
    p <- 1
    a1 <- msg
    for(i in 1:e) {
      p <- p*a1
      p <- p%%n1
    }

    p
  }
  
  for(i in 1:n) encrypt(i)

  n1 <- 371893L
  for(i in 1:n) encrypt(i)
  
  body(execute)<<- body(execute)
 

}