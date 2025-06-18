execute <- function(n) {
  a <- 1
  f <- function() a+a+a+a
  f()
  a <- 1L 
  f()
  f()
  for (i in 1:n) f()
  
  body(execute)<<- body(execute)
 

}