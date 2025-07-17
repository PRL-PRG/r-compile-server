execute <- function(size=1000000L){
  a <- 5; class(a) <- "fred"

  for (i in 1:size) r <- a+1
  return(r)
}